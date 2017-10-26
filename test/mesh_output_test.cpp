#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

#include <sisl/sisl.hpp>
#include <sisl/utility/ply_mesh.hpp>

#include <iostream>

using namespace sisl;
using namespace sisl::utility;



TEST_CASE("Mesh output test", "Mesh output test"){
	ply_mesh ply;

	ply.add_triangle(sisl::vertex3(1,1,1,1,1,1),
					sisl::vertex3(1,1,-1,1,1,-1),
					sisl::vertex3(1,-1,-1,1,-1,-1));

	ply.add_triangle(sisl::vertex3(1,1,1,1,1,1),
					sisl::vertex3(1,-1,1,1,-1,1),
					sisl::vertex3(1,-1,-1,1,-1,-1));

	ply.add_triangle(sisl::vertex3(1,1,1,1,1,1),
					sisl::vertex3(-1,1,1,-1,1,1),
					sisl::vertex3(1,-1,1,1,-1,1));

	ply.add_triangle(
					sisl::vertex3(-1,-1,1,-1,-1,1),
					sisl::vertex3(-1,1,1,-1,1,1),
					sisl::vertex3(1,-1,1,1,-1,1));

	ply.add_triangle(sisl::vertex3(1,1,1,1,1,1),
					sisl::vertex3(1,1,-1,1,1,-1),
					sisl::vertex3(-1,1,1,-1,1,1));

	ply.add_triangle(sisl::vertex3(-1,1,-1,-1,1,-1),
					sisl::vertex3(-1,1,1,-1,1,1),
					sisl::vertex3(1,1,-1,1,1,-1));

	ply.add_triangle(sisl::vertex3(-1,1,1,1,1,1),
					sisl::vertex3(-1,1,-1,1,1,-1),
					sisl::vertex3(-1,-1,-1,1,-1,-1));

	ply.add_triangle(sisl::vertex3(-1,1,1,1,1,1),
					sisl::vertex3(-1,-1,1,1,-1,1),
					sisl::vertex3(-1,-1,-1,1,-1,-1));

	ply.add_triangle(sisl::vertex3(1,1,-1,1,1,1),
					sisl::vertex3(-1,1,-1,-1,1,1),
					sisl::vertex3(1,-1,-1,1,-1,1));

	ply.add_triangle(
					sisl::vertex3(-1,-1,-1,-1,-1,1),
					sisl::vertex3(-1,1,-1,-1,1,1),
					sisl::vertex3(1,-1,-1,1,-1,1));

	ply.add_triangle(sisl::vertex3(1,-1,1,1,1,1),
					sisl::vertex3(1,-1,-1,1,1,-1),
					sisl::vertex3(-1,-1,1,-1,1,1));

	ply.add_triangle(sisl::vertex3(-1,-1,-1,-1,1,-1),
					sisl::vertex3(-1,-1,1,-1,1,1),
					sisl::vertex3(1,-1,-1,1,1,-1));

	// Ensure that we have no duplicate verts and faces
	REQUIRE(ply.count_vertices() == 8);
	REQUIRE(ply.count_faces() == 12);

	if(!ply.write("ply_tests_1.ply")) {
		// printf("Couldn't write the PLY file!\n");
		FAIL("Couldn't write the PLY file!\n");
	}

}
