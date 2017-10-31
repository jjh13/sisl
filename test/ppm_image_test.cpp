#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

#define NO_FAST_BASES

#include <sisl/sisl.hpp>

// We'll be using the CC lattice, so include that here
#include <sisl/lattice/3d/cartesian_cubic.hpp>

// 
#include <sisl/basis/tp_linear.hpp>
#include <sisl/basis/tp_cubic.hpp>
#include <sisl/basis/tp_cubic_imom.hpp>

#include <sisl/basis/3d/cc/zp3_element.hpp>
//
#include <sisl/function/si_function.hpp>

//
#include <sisl/io/raw_3d.hpp>

#include <sisl/utility/ply_mesh.hpp>
#include <sisl/utility/iso_surface.hpp>

#include <iostream>


using namespace sisl;
using namespace sisl::utility;

/*! \brief Tests that the copy constructor works
 */
TEST_CASE("cartesian_cubic_copy_assign", "Cartesian Cubic Create Test") {
    using namespace sisl;

}