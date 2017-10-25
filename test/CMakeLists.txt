include_directories(../include)

# Define all tests
add_executable(primitive_test primitive_test.cpp)
add_executable(array_test array_test.cpp)


# Link each test with its appropriate libraries
target_link_libraries (primitive_test ${LIBS})
target_link_libraries (array_test ${LIBS})