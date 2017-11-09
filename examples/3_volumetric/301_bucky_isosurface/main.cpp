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

    // This reads the data into memory, we specify float here,
    // which means that the lattice will hold floating values
    // but we could choose other, more compact data types
    cartesian_cubic<float> *cc = sisl::io::read_raw_file<float>(
                32, 32, 32, "data/Bucky.raw", SDT_UINT8);

    
    // Next, combine this data with a basis function in a si_function
    si_function<
        cartesian_cubic<float>, // specify the lattice (and its data type)
        tp_linear,              // specify the basis function
        3> bucky(cc);           // specify the dimension, and call this si_function bucky (fed with the cc lattice)
   
    // by default, an si_fuction has no scaling set, it'll exend to the maximum 
    // boundary of the lattice, 32 x 32 x 32 in this case
    vector scale(3);
    // Scaling is in the form f(s*x, s*y, s*z), so we specify 32-1,32-1,32-1 as scale
    scale << 31.,31.,31.;
    bucky.set_scale(scale);


    // Now we can just use the marching cubes algorithm to march over the data
    vector origin(3), extent(3);

    // Setup the volume over which MC will run
    origin << 0,0,0;
    extent << 1,1,1;

    mc.march_function(
            &bucky,
            127.0,
            0.05,
            origin,
            extent,
            true
    );

    // Write the output as a ply file
    mc.write_surface("bucky.ply");
}
