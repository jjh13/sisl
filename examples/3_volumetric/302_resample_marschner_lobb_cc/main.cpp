#include <sisl/sisl.hpp>

// We'll be using the CC lattice, so include that here
#include <sisl/lattice/3d/cartesian_cubic.hpp>

// Basis functions we can use
#include <sisl/basis/tp_linear.hpp>
#include <sisl/basis/tp_cubic.hpp>
#include <sisl/basis/tp_cubic_imom.hpp>

#include <sisl/basis/3d/cc/zp3_element.hpp>

// Combiner for lattice + basis function
#include <sisl/function/si_function.hpp>

// IO 
#include <sisl/io/raw_3d.hpp>

#include <sisl/utility/ply_mesh.hpp>
#include <sisl/utility/iso_surface.hpp>

#include <sisl/test/function/marschner_lobb.hpp>
#include <sisl/test/montecarlo.hpp>

#include <iostream>


using namespace sisl;
using namespace sisl::utility;

int main(int argc, char const *argv[])
{
	sisl::utility::isosurface mc;

    // Take the typical marschner lobb test function
    sisl::test::marschner_lobb ml(0.25, 6);

    // Tet's define a 128^3 cubic cartesian lattice
    cartesian_cubic<float> cc(127, 127, 127);

    printf("Resampling marschner_lobb function on to 128x128x128 grid\n");
    printf("This grid has %d points and uses %f Mbytes of memory\n",
        cc.number_of_lattice_sites(),
        float(cc.number_of_lattice_sites())*sizeof(float)/1024./1024.
    );

    // Iterate over each cartesian lattice site. 
    cc.each_site([&cc, &ml](const lattice_site &l) {
        vector x(3); // create a 3d vector to evaluate the ml function
        
        // Scale the lattice site so that we get a point
        // x in [0,1] for each component of x
        x << l[0]/127., l[1]/127., l[2]/127.;

        // shift so that each component is in
        // [-0.5, 0.5]
        x[0] -= 0.5;
        x[1] -= 0.5;
        x[2] -= 0.5;

        // Scale so that each component is in
        // -1, 1
        x = 2*x;

        // Evaluate the marschner lobb function
        // and store that in cc at lattice site l
        cc(l) = ml(x);
    });

    printf("Done... Measuring approximation error...\n");
    
    // Next, combine this data with a basis function in a si_function
    si_function<
        cartesian_cubic<float>, // specify the lattice (and its data type)
        tp_linear,              // specify the basis function
        3> ml_sampled(&cc);     // specify the dimension
   


    // by default, an si_fuction has no scaling set, it'll exend to the maximum 
    // boundary of the lattice, 32 x 32 x 32 in this case
    vector scale(3);

    // We set the scaling parameter to 127./2.0,127./2.0,127./2.0; 
    // so as to match the extent between the fwo functions. 
    scale << 127./2.0,127./2.0,127./2.0; 
    ml_sampled.set_scale(scale);

    vector sampled_offset(3), orig_offset(3), extent(3);

    // we start measuring at 0.01,0.01,0.01, to mitigate boundary artifacts
    sampled_offset << 0.01,0.01,0.01; 
    // likewise, we start integration over (-0.99, -0.99, -0.99)
    // to match with the above domain
    orig_offset << -0.99, -0.99, -0.99; 

    // Close to the correct extent, but we retract a little
    // to ignore the boundary
    extent << 1.98, 1.98, 1.98; 

    double l2_error = 
    sisl::test::montecarlo_l2<3>(       // 3d montecarlo integration of (f-g)^2
        &ml,                            // f = ml
        &ml_sampled,                    // g = ml_sampled
        10000,                          // 10000 samples
        orig_offset,                    // use f(x  - orig_offset)
        sampled_offset,                 // use g(x - ml_sampled)
        extent                          // integrate over this volume
    );

    printf("Approx l2 error between analytic and sampled = %f\n", l2_error);
    printf("Marching the grid so you can see what it looks like...\n");

    // March 
    mc.march_function(
            &ml_sampled,
            0.5,
            0.025,
            sampled_offset,
            0.99*extent,  // pull back a bit to remove edge artifacts
            true
    );

    // Write the output as a ply file
    mc.write_surface("ml_cc_sampled_128.ply");
    printf("Done!\n");
}
