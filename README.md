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
If you've built the project in the step above, you've built the examples and tests as well. Example code
can be found in the ```Examples``` directory, whereas test can be found in the ```tests``` directory.
Output executables for each can be found in the corresponding directory in your ```build``` folder.


Using SISL in Your Projects
====
SISL is header only, thus all one needs to do, is to ensure that the Eigen and SISL include files can be
found by the compiler. For GCC this may look something like
```
g++ {input files .cpp} -I./path/containing/sisl -I./path/containing/eigen -o output -std=c++11
```



Documentation
====

Documentation is included in its compiled output format under the ```doc``` directory. It can be 
regenerated via doxygen with the following commands

```{bash}
cd doc
doxygen config.dox
```
