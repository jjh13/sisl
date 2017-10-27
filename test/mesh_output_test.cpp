#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

#include <sisl/sisl.hpp>
#include <sisl/utility/ply_mesh.hpp>
#include <sisl/utility/iso_surface.hpp>

#include <sisl/test/function/marschner_lobb.hpp>
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

	ply.remove_duplicate_vertices();
	// Ensure that we have no duplicate verts and faces
	REQUIRE(ply.count_vertices() == 8);
	REQUIRE(ply.count_faces() == 12);

	if(!ply.write("ply_tests_1.ply")) {
		// printf("Couldn't write the PLY file!\n");
		FAIL("Couldn't write the PLY file!\n");
	}

}


TEST_CASE("marschner_lobb_march", "March the marschner_lobb test function") {
	sisl::test::marschner_lobb ml(0.25, 6);
	sisl::utility::isosurface mc;

	vector origin(3), extent(3);

	// Setup the volume over which MC will run
	origin << -1,-1,-1;
	extent << 1,1,1;
	try {
		mc.march_function(
			&ml,
			0.5,
			0.05,
			origin,
			extent
		);

	}catch(char const*  c){
		std::cout << c << std::endl;
		FAIL("Couldn't March?");
	}
	REQUIRE(mc.write_surface("mc_generic_lattice.ply"));

}