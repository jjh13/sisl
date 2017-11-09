#include <sisl/sisl.hpp>

// We'll be using the CC lattice, so include that here
#include <sisl/lattice/3d/cartesian_cubic.hpp>

// Basis functions we can use
#include <sisl/basis/tp_linear.hpp>
#include <sisl/basis/tp_quadratic.hpp>
#include <sisl/basis/tp_cubic.hpp>
#include <sisl/basis/tp_cubic_imom.hpp>

#include <sisl/basis/3d/cc/zp3_element.hpp>

// Combiner for lattice + basis function
#include <sisl/function/si_function.hpp>

// IO 
#include <sisl/io/raw_3d.hpp>

#include <sisl/utility/ply_mesh.hpp>
#include <sisl/utility/iso_surface.hpp>

#include <iostream>


using namespace sisl;
using namespace sisl::utility;

int main(int argc, char const *argv[])
{
	sisl::utility::isosurface mc;

    // Let's create a little example data volume
    cartesian_cubic<float> data(7,7,7);

    // We just created a cartesian cubic grid.
    // This grid can store float values. For example
    // lets store some random data

    data(2,1,3) = 1;
    data(2,2,3) = 1;

    data(4,1,3) = 1;
    data(4,2,3) = 1;

    data(1,4,3) = 1;
    data(2,5,3) = 1;
    data(3,5,3) = 1;
    data(4,5,3) = 1;
    data(5,4,3) = 1;


    // This is great, but provides no way of interpolating
    // data between sites. To do this, we need to make 
    // an si_function.
    si_function<
        cartesian_cubic<float>, // specify the lattice (and its data type)
        tp_linear,              // specify the basis function
        3>                      // specify dimension 
        f_data(&data);          // specify name and input grid

    // now we can call f_data(x,y,z); to interpolate data
    // for example
    printf("f_data(4.0,1.0,3.0) = %f\n", f_data(4.0,1.0,3.0));

    // It's very important to make sure you specify
    // decimal values to f_data. The compiler isn't smart
    // enough to cast f_data(4.0,1,3) correctly
    // (this is a vargs limitation)

    // To see that this is interpolating, let's move away from
    // a grid point
    printf("f_data(4.0,1.0,3.5) = %f\n", f_data(4.0,1.0,3.5));

    // Most of the time, we need to scale the volume
    // we can normalize the input with the following code

    vector scale(3);
    // Scaling is in the form f(s*x, s*y, s*z), so we specify 7,7,7 as scale
    scale << 7.,7.,7.;
    f_data.set_scale(scale);

    printf("After setting the proper scale, we still have\n");
    printf("f_data(4.0/7,1.0/7,3.5/7) = %f\n", f_data(4.0/7.,1.0/7.,3.5/7.));


    // Finally, if you want to see what these data look like
    // you can do an isosurface extraction
    vector origin(3), extent(3);

    // Setup the volume over which MC will run
    origin << 0,0,0;
    extent << 1,1,1;

    mc.march_function(
            &f_data,
            0.25,
            0.01,
            origin,
            extent,
            true
    );

    // Write the output as a ply file
    mc.write_surface("300_examplemesh.ply");
}
