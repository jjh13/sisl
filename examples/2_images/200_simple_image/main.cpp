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

#include <sisl/utility/ppm_image.hpp>

#include <iostream>

int main(int argc, char const *argv[])
{
	// The most simple way to output an image
	// in sisl, is to create a ppm image object
	sisl::utility::ppm_image image(256, 256);


	// then fill in its cells with pixel rgb values
	// images start at 0,0 top left
	
	// square 1
	for(int i = 0; i < 10; i++)
		for(int j = 0; j < 10; j++) {
			image(i,j) << 1.0, 0.0, 0.0; // all red
		}

	// square 2
	for(int i = 10; i < 20; i++)
		for(int j = 0; j < 10; j++) {
			image(i,j) << 0.0, 1.0, 0.0; // all green
		}

	// square 3
	for(int i = 20; i < 30; i++)
		for(int j = 0; j < 10; j++) {
			image(i,j) << 0.0, 0.0, 1.0; // all blue
		}

	image.write("200_output.ppm");
	return 0;
}