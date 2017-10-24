include_directories(../include)

# Define all tests
add_executable(array_test array_test.cpp)


# Link each test with its appropriate libraries
target_link_libraries (array_test ${LIBS})