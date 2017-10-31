include_directories(../include)

###############################################
# Simple Array examples
###############################################
add_executable (001_array_example ./0_arrays/001_array_example/main.cpp)
target_link_libraries (001_array_example ${LIBS})

add_executable (002_sarray_example ./0_arrays/002_sparse_array_example/main.cpp)
target_link_libraries (002_sarray_example ${LIBS})


###############################################
# Simple Array examples
###############################################
add_executable (200_simple_image ./2_images/200_simple_image/main.cpp)
target_link_libraries (200_simple_image ${LIBS})

###############################################
# Volumetric examples
###############################################
add_executable (300_simple_cc ./3_volumetric/300_simple_cc/main.cpp)
target_link_libraries (300_simple_cc ${LIBS})

add_executable (301_bucky_isosurface ./3_volumetric/301_bucky_isosurface/main.cpp)
target_link_libraries (301_bucky_isosurface ${LIBS})

add_executable (302_resample_marschner_lobb_cc ./3_volumetric/302_resample_marschner_lobb_cc/main.cpp)
target_link_libraries (302_resample_marschner_lobb_cc ${LIBS})

add_executable (303_resample_marschner_lobb_bcc ./3_volumetric/303_resample_marschner_lobb_bcc/main.cpp)
target_link_libraries (303_resample_marschner_lobb_bcc ${LIBS})

###############################################
# Copy data files
###############################################
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/data/Bucky.raw
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/data)