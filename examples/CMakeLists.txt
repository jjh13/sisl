include_directories(../include)

add_executable (001_array_example ./0_arrays/001_array_example/main.cpp)
target_link_libraries (001_array_example ${LIBS})

add_executable (002_sarray_example ./0_arrays/002_sparse_array_example/main.cpp)
target_link_libraries (002_sarray_example ${LIBS})

