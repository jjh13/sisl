/**
 * function_base.hpp
 *
 * Abstract class that defines the basic structure of a function in SISL.
 * Basically, all functions are mappings from R^n to R, and only need to
 * provide a means of reconstructing values from that function space.
 *
 * @author Joshua Horacsek
 **/

#ifndef _SISL_FUN_CTION_H_
#define _SISL_FUN_CTION_H_

#include <Eigen/Dense>
#include <sisl/primitives.hpp>


namespace sisl {
    /*! \breif Abstract base class for a function.
     * Defines a function this is defined over all R^n, it's up
     * to the underlying implementation to decide how those values map to
     * real values.
     */
    class function {
    public:
        function() { }
        virtual ~function() { }

        /*! \breif Evaluate the function at a point.
         */
        virtual const double operator()(double d0, ...) const = 0;

        /*! \breif Evaluate the function at a point.
         */
        virtual const double operator()(const vector &p) const = 0;

        /*! \breif Evaluate the function at a point.
         */
        virtual const double d(int component, double d0, ...) const = 0;

        /*! \breif Evaluate the function at a point.
         */
        virtual const double d(int component, const vector &p) const = 0;

        /*! \brief Evaluate the gradient of the function at a point
         */
        virtual const vector grad(double d0, ...) const = 0;

        /*! \brief Evaluate the gradient of the function at a point
         */
        virtual const vector grad(const vector &p) const = 0;

        /*! \breif Evaluate the n'th partial derivative at a point
         */
        virtual const double n_d(const int_tuple &order, double d0, ...) const = 0;

        /*! \breif Evaluate the n'th partial derivative at a point
         */
        virtual const double n_d(const int_tuple &order, double d0, ...) const = 0;
    };
};

#endif // _SISL_FUN_CTION_H_