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
        virtual const double eval(double d0, ...) {
        	va_list args;  
        	int n = this->dim();
        	vector p(n);

        	p[0] = d0;
			va_start(args, d0);  
        	for(int i = 1; i < n; i++) {
        		p[i] = va_arg (args, double);
        	}
        	va_end (args);
        	return this->operator()(p);
        }

        /*! \breif Evaluate the function at a point.
         */
        virtual const double eval(const vector &p) {
        	return this->operator()(p);
        }

        /*! \breif Evaluate the derivative of a function at a point.
         */
        virtual const double d(int component, double d0, ...) const = 0;

        /*! \breif Evaluate the derivative of a function at a point.
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
        virtual const double n_d(const int_tuple &order, vector &p) const = 0;

        /*! \breif Returns the input dimension of this function 
        */
        virtual const int dim() const = 0;
    };
};

#endif // _SISL_FUN_CTION_H_