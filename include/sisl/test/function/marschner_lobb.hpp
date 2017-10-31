/**
 * marschner_lobb.hpp
 * Defines the marschner-lobb test function as a descendent of
 * the function abstract class. 
 *
 * @author Joshua Horacsek
 */
#ifndef __SISL__MARSNHER_LOBB__
#define __SISL__MARSNHER_LOBB__

#include <iostream>
#include <fstream>

#include <sisl/primitives.hpp>
#include <sisl/function/base_function.hpp>


namespace sisl {

    /*!
     * \brief Namespace for most test functions within SISL, this includes anything
     * that would be useful for verification of experimental results.
     */ 
    namespace test {
        /*! 
         * \brief Marschner lobb test function
         */
        class marschner_lobb : public function{
        public:

           /*! \breif Constructor
            * Constructs an instance of the Marshcner lobb function
            * \param
            */
            marschner_lobb(const double &alpha, const double &f_m) : m_Fm(f_m), m_Alpha(alpha) { }
            ~marschner_lobb() { }

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
                double ret = 1 - sin(M_PI * p[2] * 0.5) + m_Alpha*(1 + rho_r(sqrt(p[0]*p[0] + p[1]*p[1])));
                return 0.5 * ret / (1 + m_Alpha);
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

            /*! \brief Evaluate the gradient of the function at a point
             */
            virtual const vector grad(double d0, ...) const {
                throw "Not implemented!";
            }

            /*! \brief Evaluate the gradient of the function at a point
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
            double rho_r(const double &r) const {
                return cos(2*M_PI*m_Fm*cos(M_PI*r*0.5));
            }
            double m_Fm, m_Alpha;
        };
    }
}

#endif // __SISL__MARSNHER_LOBB__
