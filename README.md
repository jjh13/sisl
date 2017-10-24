SISL
====

SISL (Shift Invariant Space Library) is  minimalistic (i.e. header only) C++ library that eases
data processing tasks and interpolation on non-Cartesian (and Cartesian lattices). There are 
many works in the field of scientific visualization that use the techniques implemented in this
framework, but do not provide source code implementations. This inherently makes those works
difficult to understand and extend. 

Requirements
====
This project requires a few libraries to compile, specifically.

cmake 
FFTW3
eigen

On OSX, these can be installed via MacPorts

sudo port install fftw-3 cmake eigen3

Compiling
====
To compile, change to the project directory and run the commands:
mkdir build
cd build
cmake ..
make
cd examples
./renderer

Running
====
There is a test input file under the examples directory

Specify an input file via
inputFile = test/stent16.raw
inputResolution = 512, 512, 174
inputSpacing = 0.8398, 0.8398, 3.2
inputType = uint16

isoValue = 500

camperaUp = 0, 0, 1
cameraLookAt = 0, 0, 0
cameraPosition = 0, -5, 0

This sets the dimensios of the virtual film plane
filmRatio = 1, 1

And this outputs the image rendered to vol_render.ppm with image dimensions of 128x128
outFile = vol_render, 128, 128
