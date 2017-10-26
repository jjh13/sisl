/**
 * marschner_lobb.h
 * Defines the marschner-lobb test function as a member of
 * a function_space. TODO: Function_space should really be
 * refactored into function.
 *
 * @Joshua Horacsek
 */
#ifndef __SISL__MARSNHER_LOBB__
#define __SISL__MARSNHER_LOBB__

#include <iostream>
#include <fstream>

#include <sisl/primitives.h>
#include <sisl/function/function_base.h>


namespace sisl {
    namespace test {
        class marschner_lobb : public function{
        public:
            marschner_lobb(const double &alpha, const double &f_m) : m_Fm(f_m), m_Alpha(alpha) { }
            ~marschner_lobb() { }

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
                double ret = 1 - sin(M_PI * p[2] * 0.5) + m_Alpha*(1 + rho_r(sqrt(p[0]*p[0] + p[1]*p[1])));
                return 0.5 * ret / (1 + m_Alpha);
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
            double rho_r(const double &r) const {
                return cos(2*M_PI*m_Fm*cos(M_PI*r*0.5));
            }
            double m_Fm, m_Alpha;
        };
    }
}

#endif // __SISL__MARSNHER_LOBB__
