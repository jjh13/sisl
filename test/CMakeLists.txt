include_directories(../include)

# Define all tests
add_executable(primitive_test primitive_test.cpp)
add_executable(array_test array_test.cpp)
add_executable(cubic_cartesian_test cubic_cartesian_test.cpp)
add_executable(bcc_test bcc_test.cpp)
add_executable(mesh_output_test mesh_output_test.cpp)
add_executable(io_raw_test io_raw_test.cpp)
add_executable(ppm_image_test ppm_image_test.cpp)


# Link each test with its appropriate libraries
target_link_libraries (array_test ${LIBS})
target_link_libraries (primitive_test ${LIBS})
target_link_libraries (cubic_cartesian_test ${LIBS})
target_link_libraries (bcc_test ${LIBS})
target_link_libraries (mesh_output_test ${LIBS})
target_link_libraries (io_raw_test ${LIBS})
target_link_libraries (ppm_image_test ${LIBS})

# Copy deps
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/Bucky.raw
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/)