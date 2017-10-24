SISL
====

SISL (Shift Invariant Space Library) is  minimalistic (i.e. header only) C++ library that eases
data processing tasks and interpolation on non-Cartesian (and Cartesian lattices). There are 
many works in the field of scientific visualization that use the techniques implemented in this
framework, but do not provide source code implementations. This inherently makes those works
difficult to understand and extend. 


Requirements
====
This project requires a few libraries to compile, specifically:
 * ```cmake```
 * ```FFTW3```
 * ```eigen3```
 * ```OpenCL```

Although the only hard requirement is eigen3. If you don't have this library, there's a submodule
in the repository that will pull a usable version of eigen3. See Getting the Code

On macOS, these can be installed via MacPorts
```sudo port install fftw-3 cmake eigen3```


Getting the Code
====
First checkout the code:
```git checkout https://github.com/jjh13/sisl_redux.git```

If you don't have eigen3 installed, then checkout the submodules:
```git submodule init```
```git submodule update```

However, keep in mind that this is a header only library intended to be installed on a system, so 
as a user it is advised to install eigen3 to your system, rather than depending on the submodule 
in this repository.

Compiling & Installing
====
To compile, change to the project directory and run the commands:

```{bash}
mkdir build
cd build
cmake ..
make 
```

This will build the tests and examples. To install use 
```{bash}
make install
```
with sudo privledges, if needed.

Running Examples & Tests
====
There is a test input file under the examples directory

Specify an input file via

```
inputFile = test/stent16.raw
inputResolution = 512, 512, 174
inputSpacing = 0.8398, 0.8398, 3.2
inputType = uint16

isoValue = 500

camperaUp = 0, 0, 1
cameraLookAt = 0, 0, 0
cameraPosition = 0, -5, 0
```

This sets the dimensios of the virtual film plane
```
filmRatio = 1, 1
```

And this outputs the image rendered to vol_render.ppm with image dimensions of 128x128
```
outFile = vol_render, 128, 128
```