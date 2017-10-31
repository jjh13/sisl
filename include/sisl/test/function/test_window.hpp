/**
 * test_window.hpp
 * 
 * Defines a test window function in 3D. 
 *
 * @author Joshua Horacsek
 */
#ifndef __SISL__TEST_WINDOW__
#define __SISL__TEST_WINDOW__

#include <iostream>
#include <fstream>

#include <sisl/primitives.hpp>
#include <sisl/function/base_function.hpp>


namespace sisl {
    namespace test {
        /*! 
         * \brief Windowed test function
         */
        class test_window: public function{
        public:
            test_window(const double &alpha, const double &gamma, const double &f_m) : m_Fm(f_m), m_Gamma(gamma), m_Alpha(alpha) { }
            ~test_window() { }

            /*! \brief Evaluate the function at a point.
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

            /*! \brief Evaluate the function at a point.
             */
            virtual const double operator()(const vector &p) const {
            	double len = p.norm();
            	return m_Gamma * len - m_Alpha * cos(2.*M_PI*m_Fm*p[2]/len);
            }

            /*! \brief Evaluate the function at a point.
             */
            virtual const double d(int component, double d0, ...) const {
                throw "Not implemented!";
            }

            /*! \brief Evaluate the function at a point.
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
            /*! \brief Evaluate the n'th partial derivative at a point
             */
            virtual const double n_d(const int_tuple &order, vector &p) const {
                throw "Not implemented!";
            }
            /*! \brief Returns the input dimension of this function 
            */
            virtual const int dim() const {
                return 3;
            }
            
            private:
            double m_Fm, m_Gamma, m_Alpha;
        };
    }
}

#endif // __SISL__TEST_WINDOW__
