/**
 * marschner_lobb.h
 * Defines the marschner-lobb test function as a member of
 * a function_space. TODO: Function_space should really be
 * refactored into function.
 *
 * @Joshua Horacsek
 */
#ifndef __SISL__TEST_WINDOW__
#define __SISL__TEST_WINDOW__

#include <iostream>
#include <fstream>

#include <sisl/primitives.h>
#include <sisl/function/function_base.h>


namespace sisl {
    namespace test {
        class test_window: public function{
        public:
            test_window(const double &alpha, const double &gamma, const double &f_m) : m_Fm(f_m), m_Gamma(gamma), m_Alpha(alpha) { }
            ~test_window() { }

            /*! \breif Evaluate the function at a point.
             */
            virtual const double operator()(double d0, ...) const {
                va_list vl;
                vector V(3);
                V[0] = d0;

                va_start(vl, d0);
                V[1] = va_arg(vl, double);
                V[2] = va_arg(vl, double);
                va_end(vl);

                return (*this)(V);
            }

            /*! \breif Evaluate the function at a point.
             */
            virtual const double operator()(const vector &p) const {
            	double len = p.length();
            	return m_Gamma * len - m_Alpha * cos(2.*M_PI*m_Fm*p[2]/len);
            }

            /*! \breif Evaluate the function at a point.
             */
            virtual const double d(int component, double d0, ...) const {
                throw "Not implemented!";
            }

            /*! \breif Evaluate the function at a point.
             */
            virtual const double d(int component, const vector &p) const {
                throw "Not implemented!";
            }

            /*! \brief Evaluate rhe gradient of the function at a point
             */
            virtual const vector grad(double d0, ...) const {
                throw "Not implemented!";
            }

            /*! \brief Evaluate rhe gradient of the function at a point
             */
            virtual const vector grad(const vector &p) const {
                throw "Not implemented!";
            }

            virtual const double n_d(const int_tuple &order, double d0, ...) const {
                throw "Not implemented!";
            }
            /*! \breif Evaluate the n'th partial derivative at a point
             */
            virtual const double n_d(const int_tuple &order, vector &p) const {
                throw "Not implemented!";
            }
            /*! \breif Returns the input dimension of this function 
            */
            virtual const int dim() const {
                return 3;
            }
            
            private:
            double m_Fm, m_Gamma, m_Alpha;
        };
    }
}

#endif // __SISL__MARSNHER_LOBB__
