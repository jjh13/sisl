cmake_minimum_required(VERSION 3.2)
project(sisl_library VERSION 0.1 LANGUAGES CXX)


add_library(sisl INTERFACE)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

# Make sure we have at least C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# and make sure it's standard C++11
set(CMAKE_CXX_EXTENSIONS OFF)

# So we know where to install 
include(GNUInstallDirs)

# 
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

MARK_AS_ADVANCED(USE_FFTWD)
OPTION(USE_FFTWF "Use single precision FFTW if found" OFF)
MARK_AS_ADVANCED(LIBS)

find_package(FFTW)
if(FFTW_FOUND)
	include_directories(${FFTW_INCLUDES})
	set(LIBS ${LIBS} ${FFTW_LIBRARIES})
	add_definitions(-DSISL_FFTW)
else()
	message(WARNING "FFTW not found! We'll continue, but Fourier domain filtering will be disabled!")
endif()

find_package(OpenCL)
if(OPENCL_FOUND)
	include_directories(${OPENCL_INCLUDE_DIRS})
	set(LIBS ${LIBS} ${OPENCL_LIBRARIES})
	add_definitions(-DSISL_OPENCL)
else()
	message(WARNING "OpenCL! We'll continue, but you'll get no GPU acceleration!")
endif()

# It's SUPER recommended that you have an OpenMP compatible compiler 
find_package(OpenMP)
if(OPENMP_FOUND)
    message("OpenMP Found")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}")
endif()


find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

#
target_include_directories(sisl INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include> $<INSTALL_INTERFACE:include>)

install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

add_subdirectory(examples)
add_subdirectory(test)

