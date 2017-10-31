/**
 * sisl.hpp
 *
 * Base SISL include, includes all the most basic functionality for SISL. This
 * includes the base_lattice, basis_function, function_space classes and all
 * primitives and their dependencies.
 *
 * @author Joshua Horacsek
 */

// Basic includes
#include <sisl/primitives.hpp>

// Basic memory abstractions
#ifdef SISL_FFTW
    #include <sisl/memory/fftwalloc.hpp>
#endif
#include <sisl/memory/array.hpp>
#include <sisl/memory/sparse_array.hpp>

// Base classes
#include <sisl/lattice/base_lattice.hpp>
#include <sisl/function/base_function.hpp>
