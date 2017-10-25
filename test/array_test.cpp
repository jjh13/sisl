/**
 * Simple array read-write tests. These should verify
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
#include <sisl/memory/fftwalloc.hpp>

#ifdef SISL_CL
#include <sisl/opencl/opencl.hpp>
#endif

#include <iostream>



// #ifdef SISL_CL


/*! \brief Tests that we can simply create
 * arrays.
 */
TEST_CASE("Array create test", "array_n_create") {
    using namespace sisl;

    array_n<float, 1> array(100);
    array((unsigned int)0) = 1.;
    array((unsigned int)1) = 2.;

    REQUIRE(array((unsigned int)0) == 1.);
    REQUIRE(array((unsigned int)1) == 2.);

    array_n<float, 2> array2(2, 2);
    array_n<float, 3> array3(3, 3, 3);
}

/*! \brief Tests that we can simply create
 * arrays.
 */
TEST_CASE("Array test copy constructor", "array_n_create") {
    using namespace sisl;

    array_n<float, 1> array(100), array2;
    array((unsigned int)0) = 1.;
    array((unsigned int)1) = 2.;

    // Test that we copied the data correctly
    array_n<float, 1> arr_copy = array;
    REQUIRE(arr_copy((unsigned int)0) == 1.);
    REQUIRE(arr_copy((unsigned int)1) == 2.);

    // Test that modifying the new array doesn't stomp old values
    arr_copy((unsigned int)0) = 0;
    REQUIRE(array((unsigned int)0) == 1.);

    // Same tests, but for the assignment operator
    array2 = array;
    REQUIRE(array2((unsigned int)0) == 1.); 
    array2((unsigned int)0) = 0;
    REQUIRE(array((unsigned int)0) == 1.);

}


/*! \brief Tests that we can simply create
 * sparse arrays.
 */
TEST_CASE("Sparse array create test", "sparese_array_n_create") {
    using namespace sisl;

    sparse_array_n<float, 1> array(123.0, 100);
    array((unsigned int)0) = 1.;
    array((unsigned int)1) = 2.;

    REQUIRE(array((unsigned int)0) == 1.);
    REQUIRE(array((unsigned int)1) == 2.);

    // Ensure the default value is correct
    REQUIRE(array((unsigned int)2) == 123.);

    sparse_array_n<float, 2> array2(0.0, 2, 2);
    sparse_array_n<float, 3> array3(0.0, 3, 3, 3);
}

/*! \brief Tests that writes are consistent,
 * that is, that all writes read the same value,
 * and now values get overriden.
 */
TEST_CASE("Array consistency test", "array_n_consistent") {
    using namespace sisl;

    array_n<float, 3> a(200, 200, 200);

    float val = 100;
    bool valsWereWrong = false;

    // Write unique values
    for(int i = 0; i < 200; i++)
        for(int j = 0; j < 200; j++)
            for(int k = 0; k < 200; k++){
                a(i,j,k) = val++;
            }

    // Check that they all read back
    val = 100;
    for(int i = 0; i < 200; i++)
        for(int j = 0; j < 200; j++)
            for(int k = 0; k < 200; k++){
                valsWereWrong |= (a(i,j,k) != val++);
            }

    REQUIRE(valsWereWrong == false);
}

/*! \brief Tests that writes are consistent,
 * that is, that all writes read the same value,
 * and now values get overriden.
 */
TEST_CASE("Sparse array consistency test", "sparse_array_n_consistent") {
	using namespace sisl;
    sparse_array_n<unsigned int, 3> a(0, 200, 200, 200);

    unsigned int val = 100;
    bool valsWereWrong = false;

    // Write unique values
    for(int i = 0; i < 200; i+=2)
        for(int j = 0; j < 200; j+=2)
            for(int k = 0; k < 200; k+=2) {
                a(i,j,k) = val++;
            }

    // Check that they all read back
    val = 100;
    for(int i = 0; i < 200; i+=2)
        for(int j = 0; j < 200; j+=2)
            for(int k = 0; k < 200; k+=2) {
                valsWereWrong |= (a(i,j,k) != val++);
            }

    REQUIRE(valsWereWrong == false);
}

/*! \brief Tests that array indcies that are out of bounds
 * throw exceptions
 */
TEST_CASE("Array index out of bounds","array_n_index_out_of_bounds") {
	using namespace sisl;
    array_n<float, 3> a(200,200,200);

    bool exceptionThrew = false;
    try{
        a(150,150,200) = 10; // (150, 150, 200) is just on the edge
    }catch(...){
        exceptionThrew = true;
    }
    REQUIRE(exceptionThrew == true);

    exceptionThrew = false;
    try{
        a(150,150,-1) = 10;
    }catch(...){
        exceptionThrew = true;
    }
    REQUIRE(exceptionThrew == true);

    exceptionThrew = false;
    try{
        a(200,150,150) = 10;
    }catch(...){
        exceptionThrew = true;
    }
    REQUIRE(exceptionThrew == true);

    exceptionThrew = false;
    try{
        a(-1,150,150) = 10;
    }catch(...){
        exceptionThrew = true;
    }
    REQUIRE(exceptionThrew == true);

    exceptionThrew = false;
    try{
        a(150,200,150) = 10;
    }catch(...){
        exceptionThrew = true;
    }
    REQUIRE(exceptionThrew == true);

    exceptionThrew = false;
    try{
        a(150,-1,150) = 10;
    }catch(...){
        exceptionThrew = true;
    }
    REQUIRE(exceptionThrew == true);
}


/*! \brief Tests that array indcies that are out of bounds
 * throw exceptions
 */
TEST_CASE("Sparse array index out of bounds","sparse_array_n_index_out_of_bounds") {
	using namespace sisl;
    sparse_array_n<float, 3> a(0.0, 200,200,200);

    bool exceptionThrew = false;
    try{
        a(150,150,200) = 10;
    }catch(...){
        exceptionThrew = true;
    }
    REQUIRE(exceptionThrew == true);

    exceptionThrew = false;
    try{
        a(150,150,-1) = 10;
    }catch(...){
        exceptionThrew = true;
    }
    REQUIRE(exceptionThrew == true);

    exceptionThrew = false;
    try{
        a(200,150,150) = 10;
    }catch(...){
        exceptionThrew = true;
    }
    REQUIRE(exceptionThrew == true);

    exceptionThrew = false;
    try{
        a(-1,150,150) = 10;
    }catch(...){
        exceptionThrew = true;
    }
    REQUIRE(exceptionThrew == true);

    exceptionThrew = false;
    try{
        a(150,200,150) = 10;
    }catch(...){
        exceptionThrew = true;
    }
    REQUIRE(exceptionThrew == true);

    exceptionThrew = false;
    try{
        a(150,-1,150) = 10;
    }catch(...){
        exceptionThrew = true;
    }
    REQUIRE(exceptionThrew == true);
}


/*! \brief Tests that writes are consistent,
 * that is, that all writes read the same value,
 * and now values get overriden.
 */
TEST_CASE("Array write test with FFT allocator", "array_n_fftwalloc") {
	using namespace sisl;
    array_n<float, 3, _fftwalloc<float> > a(200,200,200);

    float val = 100;
    bool valsWereWrong = false;

    for(int i = 0; i < 200; i++)
        for(int j = 0; j < 200; j++)
            for(int k = 0; k < 200; k++){
                a(i,j,k) = val++;
            }

    val = 100;
    for(int i = 0; i < 200; i++)
        for(int j = 0; j < 200; j++)
            for(int k = 0; k < 200; k++){
                valsWereWrong |= (a(i,j,k) != val++);
            }

    REQUIRE(valsWereWrong == false);
}

/*! \brief Array dump/read tests, writes array to
 * a temporary file and reads it back.
 */
TEST_CASE("Array dump test", "array_n_dump_n_read") {
    using namespace sisl;

    array_n<float, 3> a(10, 20, 30);
    array_n<float, 3> a_loaded(10, 20, 30);

    float val = 100;
    bool valsWereWrong = false;

    // Write unique values
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 20; j++)
            for(int k = 0; k < 30; k++){
                a(i,j,k) = val++;
            }

    std::remove("array_n_dump_n_read_temp.bin");

    // Dump those vals yo
    {
        std::ofstream outfile("array_n_dump_n_read_temp.bin", std::ofstream::binary);
        REQUIRE(a.dump_to_stream(outfile) == true);
        outfile.close();
    }

    // Read them back in the "loaded" array
    {
        std::ifstream infile("array_n_dump_n_read_temp.bin", std::ofstream::binary);
        REQUIRE(a_loaded.read_from_stream(infile) == true);
    }

    // Check that they all read back
    val = 100;
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 20; j++)
            for(int k = 0; k < 30; k++){
                valsWereWrong |= (a_loaded(i,j,k) != val++);
            }

    REQUIRE(valsWereWrong == false);
}

/*! \brief Sparese array dump/read tests, writes array to
 * a temporary file and reads it back.
 */
TEST_CASE("Sparse dump test", "sparese_array_n_dump_n_read") {
	using namespace sisl;
    sparse_array_n<unsigned int, 3> a(0, 10, 20, 30);
    sparse_array_n<unsigned int, 3> a_loaded(0, 10, 20, 30);

    unsigned int val = 100;
    bool valsWereWrong = false;
    // Write unique values
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 20; j++)
            for(int k = 0; k < 30; k++){
                a(i,j,k) = val++;
            }

    std::remove("sparse_array_n_dump_n_read_temp.bin");

    // Dump those vals yo
    {
        std::ofstream outfile("sparse_array_n_dump_n_read_temp.bin", std::ofstream::binary);
        REQUIRE(a.dump_to_stream(outfile) == true);
        outfile.close();
    }

    // Read them back in the "loaded" array
    {
        std::ifstream infile("sparse_array_n_dump_n_read_temp.bin", std::ofstream::binary);
        REQUIRE(a_loaded.read_from_stream(infile) == true);
    }

    // Check that they all read back
    val = 100;
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 20; j++)
            for(int k = 0; k < 30; k++){
                valsWereWrong |= (a_loaded(i,j,k) != val++);
            }

    REQUIRE(valsWereWrong == false);
}