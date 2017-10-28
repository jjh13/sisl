/**
 * Simple array read-write tests. These should verify
 * that all writes and reads are consistent, and bounds
 * are checked on reads and writes. We should also verify that
 * we can use other allocators.
 *
 * @author Joshua Horacsek
 */

#define NO_FAST_BASES
#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

#include <sisl/memory/array.hpp>
#include <sisl/memory/sparse_array.hpp>

#include <sisl/lattice/base_lattice.hpp>

#include <sisl/function/si_function.hpp>
#include <sisl/lattice/3d/cartesian_cubic.hpp>

#include <sisl/basis/tp_linear.hpp>
#include <sisl/basis/tp_cubic_imom.hpp>

#include <iostream>



/*! \brief Tests that we can simply create a cartesian planar lattice
 */
TEST_CASE("cartesian_cubic_lattice_init", "Cartesian Cubic Create Test") {
    using namespace sisl;

    cartesian_cubic<char> cart_cube_test(9, 9, 9);
}

/*! \brief Tests that the copy constructor works
 */
TEST_CASE("cartesian_cubic_copy_assign", "Cartesian Cubic Create Test") {
    using namespace sisl;

    cartesian_cubic<char> cart_cube_test(9, 9, 9), cc_copy;
    cart_cube_test(4,2,0) = 100;

    cartesian_cubic<char> cc2 = cart_cube_test;
    
    REQUIRE(cc2(4,2,0) == 100);
    cc2(4,2,0) = 101;

    REQUIRE(cart_cube_test(4,2,0) == 100);

    cc_copy = cart_cube_test;
    REQUIRE(cc_copy(4,2,0) == 100);
    cc_copy(4,2,0) = 101;

    REQUIRE(cart_cube_test(4,2,0) == 100);

}

/*! \brief Tests that we consistently read and write to these lattices, that is,
 * values don't overwrite each other, and each value is retained.
 */
TEST_CASE("cartesian_cubic_value_retention", "Cartesian Cubic Consistency Test") {
    using namespace sisl;

    cartesian_cubic<int> cart_cube_test(9, 9, 9);
    bool valsWereWrong = false;
    short val = 1;

    for(int i = 0; i <= 9; i++) {
        for(int j = 0; j <= 9; j++) {
            for(int k = 0; k <= 9; k++) {
                cart_cube_test(i, j, k) = i  + (j + k*10)*10;
            }
        }
    }

    auto each_f = [&valsWereWrong, &cart_cube_test](const lattice_site &s) {
        int i = s[0];
        int j = s[1];
        int k = s[2];
        valsWereWrong |= cart_cube_test(s) !=  i  + (j + k*10)*10;
    };
    cart_cube_test.each_site(each_f);

    REQUIRE(valsWereWrong == false);
}

/*! \brief Tests that sites map to their own nearest site.
 */
TEST_CASE("cartesian_planar_vac_each_site", "Vacuous Cartesian Cubic Nearest Site Test") {
    using namespace sisl;

    cartesian_cubic<short> cart_cube_test(9, 9, 9);

    auto each_lambda = [&cart_cube_test](const lattice_site &l) {
        vector p = cart_cube_test.get_site_position(l);
        lattice_site lprime = cart_cube_test.get_nearest_site(p);
        REQUIRE(lprime == l);
    };
    cart_cube_test.each_site(each_lambda);
}

/*! \brief Tests that a few sites map to their proper nearest site
 */
TEST_CASE("cartesian_cubic_nearest_site", "Cartesian Cubic Nearest Site Test") {
    using namespace sisl;

    cartesian_cubic<short> cart_cube_test(2, 2, 2);
    vector point(3);
    lattice_site lprime(3);

    point << .51, .51, 0;
    lprime = cart_cube_test.get_nearest_site(point);
    REQUIRE(lprime[0] == 1);
    REQUIRE(lprime[1] == 1);
    REQUIRE(lprime[2] == 0);

    point << 2.51, 1.9, 0;
    lprime = cart_cube_test.get_nearest_site(point);
    REQUIRE(lprime[0] == 3);
    REQUIRE(lprime[1] == 2);
    REQUIRE(lprime[2] == 0);

    point << 0.24, .76, 0;
    lprime = cart_cube_test.get_nearest_site(point);
    REQUIRE(lprime[0] == 0);
    REQUIRE(lprime[1] == 1);
    REQUIRE(lprime[2] == 0);
}


/********************************************
 * Tests for the various extension types
 ********************************************/
/**
 * TODO:
 */

/********************************************
 * 
 ********************************************/
TEST_CASE("cartesian_tp_linear", "tp_cubic") {
    using namespace sisl;
    vector pt(3);
    double value;

    // Setup a generating matrix for the CC lattice
    cartesian_cubic<short> lattice(2, 2, 2);

    lattice(0,1,0) = 10;
    lattice(1,1,0) = 10;

    auto  *f = new si_function<
                                cartesian_cubic<short>,
                                tp_linear,
                                3>(&lattice);

    vector scale(3);
    scale << 2.,2.,2.;
    f->set_scale(scale);

    REQUIRE( (*f)(0.5, 0.5, 0.) == 10. );
    REQUIRE( (*f)(0.25, 0.5, 0.) == 10. );
    REQUIRE( (*f)(0.75, 0.25, 0.) == 2.5 );
}

TEST_CASE("cartesian_tp_cubic_imom", "tp_cubic") {
    using namespace sisl;
    vector pt(3);
    double value;

    // Setup a generating matrix for the CC lattice
    cartesian_cubic<short> lattice(2, 2, 2);

    lattice(0,1,0) = 2;
    lattice(1,1,0) = 10;

    auto *f = new si_function<
                                cartesian_cubic<short>,
                                tp_cubic_imom,
                                3>(&lattice);

    if(fabs((*f)(1., 1., 0.) - 10.) > 0.00001)
        FAIL("Not close enough to interpolating 10");

    if(fabs((*f)(0.0, 1., 0.) - 2.) > 0.00001)
        FAIL("Not close enough to interpolating 2");
}
