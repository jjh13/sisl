/**
 * Simple BCC read-write tests. These should verify
 * that all writes and reads are consistent, and bounds
 * are checked on reads and writes. We should also verify that
 * we can use other allocators.
 *
 * @author Joshua Horacsek
 */


#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

#include <sisl/memory/array.hpp>
#include <sisl/memory/sparse_array.hpp>

#include <sisl/lattice/base_lattice.hpp>

//#include <sisl/lattice/2d/cartesian_planar.hpp>
#include <sisl/lattice/3d/cartesian_cubic.hpp>

#include <sisl/lattice/3d/body_centered_cubic.hpp>

#include <iostream>


/*! \brief Tests that we can simply create a generic lattice
 */
TEST_CASE("bcc_init", "BCC Lattice Create Test") {
    using namespace sisl;

    body_centered_cubic<char> bcc_test(10, 10, 10);
}

/*! \brief Tests that the copy constructor works
 */
TEST_CASE("bcc_copy_assign", "Cartesian Cubic Create Test") {
    using namespace sisl;

    body_centered_cubic<char> test(9, 9, 9), bcc_copy;
    test(4,2,0) = 100;

    body_centered_cubic<char> bcc2 = test;
    
    REQUIRE(bcc2(4,2,0) == 100);
    bcc2(4,2,0) = 101;

    REQUIRE(test(4,2,0) == 100);

    bcc_copy = test;
    REQUIRE(bcc_copy(4,2,0) == 100);
    bcc_copy(4,2,0) = 101;

    REQUIRE(test(4,2,0) == 100);

}

/*! \brief Tests that a generic lattices sucessfully
 * classify their sites.
 */
TEST_CASE("bcc_lattice_is_site", "BCC Lattice Site Test") {
    using namespace sisl;

    // Setup a generating matrix for the BCC lattice
    body_centered_cubic<char> bcc_test(10, 10, 10);

    REQUIRE(bcc_test.is_lattice_site(1,1,1) == true);
    REQUIRE(bcc_test.is_lattice_site(1,1,2) == false);
    REQUIRE(bcc_test.is_lattice_site(2,2,2) == true);
}

/*! \brief Tests that a generic lattices have consistent
 * reads and writes.
 */
TEST_CASE("bcc_lattice_rw", "BCC Lattice Read Write Test") {
    using namespace sisl;

    // Setup a generating matrix for the BCC lattice
    body_centered_cubic<char> bcc_test(10, 10, 10);

    bcc_test(0,0,0) = 10;
    bcc_test(1,1,1) = 20;
    bcc_test(2,2,4) = 30;

    REQUIRE(bcc_test(0,0,0) == 10);
    REQUIRE(bcc_test(1,1,1) == 20);
    REQUIRE(bcc_test(2,2,4) == 30);

    // Looking up an element creates that element, use is_filled first
    // if you don't want that behaviour
    REQUIRE(bcc_test(2,2,0) == 0); //
    REQUIRE(bcc_test.is_filled(2,2,0) == true);

    REQUIRE(bcc_test.is_filled(1,1,1) == true);
}


/*! \brief Tests that a generic lattices have consistent
 * reads and writes.
 */
TEST_CASE("bcc_lattice_each_site", "BCC Lattice Each Site Test") {
    using namespace sisl;

    for(int i = 0; i<1; i++) for(int j = 0; j < 1; j++) for(int k = 0; k < 1; k++) {
        body_centered_cubic<char> bcc_test(10+i, 10+j, 10+k);
        int lattice_site_count = 0;

        auto each_lambda = [&lattice_site_count](const lattice_site &l) {
            int x, y, z;
            x = l[0];
            y = l[1];
            z = l[2];

            // Ensure parity conditions on BCC lattice
            if(z % 2) {
                REQUIRE((x % 2) == 1);
                REQUIRE((y % 2) == 1);
            } else {
                REQUIRE((x % 2) == 0);
                REQUIRE((y % 2) == 0);
            }
            lattice_site_count++;
        };
        bcc_test.each_site(each_lambda);
        REQUIRE(bcc_test.number_of_lattice_sites() == lattice_site_count);
    }
}

/*! \brief Tests that sites map to their own nearest site.
 */
TEST_CASE("bcc_lattice_vac_each_site", "Vacuous BCC Nearest Site Test") {
    using namespace sisl;

    // Setup a generating matrix for the BCC lattice
    body_centered_cubic<char> bcc_test(10, 10, 10);

    auto each_lambda = [&bcc_test](const lattice_site &l) {
        vector p = bcc_test.get_site_position(l);
        lattice_site lprime = bcc_test.get_nearest_site(p);
        REQUIRE(lprime == l);
    };
    bcc_test.each_site(each_lambda);
}

/*! \brief Tests that a few sites map to their proper nearest site
 */
TEST_CASE("bcc_nearest_site", "Nearest BCC Site Test") {
    using namespace sisl;

    // Setup a generating matrix for the BCC lattice
    body_centered_cubic<char> bcc_test( 4, 4, 4);
    vector point(3);
    lattice_site lprime(3);

    point << 0., 0., 4.;
    lprime = bcc_test.get_nearest_site(point);
    REQUIRE(lprime[0] == 0);
    REQUIRE(lprime[1] == 0);
    REQUIRE(lprime[2] == 4);

    point << 0.25, .25, .49;
    lprime = bcc_test.get_nearest_site(point*4);
    REQUIRE(lprime[0] == 1);
    REQUIRE(lprime[1] == 1);
    REQUIRE(lprime[2] == 1);

    point << 0.25, .75, .49;
    lprime = bcc_test.get_nearest_site(point*4);
    REQUIRE(lprime[0] == 1);
    REQUIRE(lprime[1] == 3);
    REQUIRE(lprime[2] == 1);
}

//** TODO: Test linear indices

//** TODO: Test extension modes


