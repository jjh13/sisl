/**
 * Tests for primitives -- most of these should be extremely basic
 * but it's important that they all behave as expected, since they 
 * form the basis for many operations in SISL
 *
 * @author Joshua Horacsek
 */

#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

#include <sisl/primitives.hpp>


/*! \brief Create a ray.
 */
TEST_CASE("raymake", "Create a ray") {
    using namespace sisl;

    // Create two 3d vectors
    vector ray_origin(3);
    vector ray_direction(3);

    // Assign them data
    ray_origin << 0,0,0;
    ray_direction << 1,1,1;

    // define a ray
    ray a_drop_of_golden_sun(
        ray_origin, 
        ray_direction
    );

    REQUIRE(ray_origin == a_drop_of_golden_sun.o);
}


/*! \brief Create a ray, check to see if its direction gets normalized properly
 */
TEST_CASE("raynorm", "Create a ray") {
    using namespace sisl;

    // Create two 3d vectors
    vector ray_origin(3);
    vector ray_direction(3);

    // Assign them data
    ray_origin << 0,0,0;
    ray_direction << 1,1,1;

    // define a ray
    ray a_drop_of_golden_sun(
        ray_origin, 
        ray_direction
    );

    REQUIRE(ray_direction.normalized() == a_drop_of_golden_sun.d);
}

