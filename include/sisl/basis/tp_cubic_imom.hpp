/**
 * tp_cubic_imom.h
 * Implements the tensor product interpolating cubic imom
 * in 'N' dimensions. 
 *
 * b_3imom(x) = b_3(x) - 1/6 d^2/dx^2 b_3(x)
 *
 * @author Joshua Horacsek
 */

#ifndef _SISL_TP_CUBICIMOM_BASIS_FUNCTION_H_
#define _SISL_TP_CUBICIMOM_BASIS_FUNCTION_H_

#include <vector>
#include <string>
#include <tuple>
#include <sisl/primitives.hpp>
#include <sisl/lattice/base_lattice.hpp>
#include <sisl/basis/basis_function.hpp>

// We specialize on these lattices, so we need to include them
#include <sisl/lattice/2d/cartesian_planar.hpp>
#include <sisl/lattice/3d/cartesian_cubic.hpp>


namespace sisl {

    /** \brief Tensor product cubic interpolating MOM.
     * 
     */
    class tp_cubic_imom : public basis_function {
    private:
	    static inline const double imom3(const double &t){
	        double x = std::abs(t);
	        if(x < 1.) return (1./2.)*x*x*x - x*x - (1./2.)*x + 1;
	        if(x < 2.) return (-1./6.)*x*x*x + x*x - 11./6 *x + 1;
	        return 0; 
	    }

	    static inline const double dimom3(const double &t){
	        double x = std::abs(t);
            double s =  t < 0 ? -1 : 1;
	        if(x < 1.) return s*((3./2.)*x*x - 2*x - (1./2.));
	        if(x < 2.) return s*((-3./6.)*x*x + 2*x - (11./6.));
	        return 0; 
	    }

    public:
        template <int N>
        static const double phi(const vector &p) {
            double prod = 1;
            for(unsigned int i = 0; i < N; i++) prod *= imom3(p[i]);
            return prod;
        }

        template <int N>
        static const double phi(const double &h, const vector &p) {
            return tp_cubic_imom::phi<N>(p);
        }

        template <int N>
        static const double dphi(const vector &p, const int &d) {
            double prod = 1;
            for(unsigned int i = 0; i < N; i++) {
                if(i == d)
                    prod *= dimom3(p[i]);
                else
                    prod *= imom3(p[i]);
            }
            return prod;
        }

        template <int N>
        static const double dphi(const double &h, const vector &p, const int &d) {
            return tp_cubic_imom::dphi<N>(p, d);
        }

        template <int N>
        static std::vector<lattice_site> get_integer_support() {
		    // Poor man's cartesian product :x
		    std::vector<lattice_site> ret = {}, tret = {};
		    lattice_site zero(N), po(N);
		    zero.setZero();
		    po.setZero();
		    tret.push_back(zero);

		    for(int i = 0; i < N; i++) {
		      ret.clear();
		      po[i] = 1;
		      for(auto l : tret) {
		        ret.push_back(l + 2*po);
		        ret.push_back(l + po);
		        ret.push_back(l);
		        ret.push_back(l - po);
		        ret.push_back(l - 2*po);
		      }
		      po[i] = 0;
		      tret = ret;
		    }
		    return ret;
        }

        static bool has_derivative() { return true; }

        template<int N, class L, class BF>
        static double convolution_sum(const vector &p, const L *lattice) {
            /*
             * We have to explicitly call the base method for convolution_sum
             **/
            return basis_function::convolution_sum<N,L,BF>(p, lattice);
        }

        template<int N, class L, class BF>
        static double convolution_sum_deriv(const vector &p, const L *lattice, const int &component) {
            return basis_function::convolution_sum_deriv<N,L,BF>(p, lattice, component);
        }
        template<int N, class L, class BF>
        static vector grad_convolution_sum(const vector &p, const L *lattice) {
            return basis_function::grad_convolution_sum<N,L,BF>(p, lattice);
        }
        template<int N, class L, class BF>
        static vector grad_convolution_sum(const vector &p, const L* base, const L **lattices) {
            return basis_function::grad_convolution_sum<N,L,BF>(p, base, lattices);
        }
        template<int N, class L, class BF>
        static double convolution_sum_h(const vector &p, const L *lattice, const double &h) {
            return basis_function::convolution_sum_h<N,L,BF>(p, lattice, h);
        }
        template<int N, class L, class BF>
        static double convolution_sum_deriv_h(const vector &p, const L *lattice, const int &component, const double &h) {
            return basis_function::convolution_sum_deriv_h<N,L,BF>(p, lattice, component, h);
        }
        template<int N, class L, class BF>
        static vector grad_convolution_sum_h(const vector &p, const L *lattice, const double &h) {
            return basis_function::grad_convolution_sum_h<N,L,BF>(p, lattice, h);
        }
        template<int N, class L, class BF>
        static vector grad_convolution_sum_h(const vector &p, const L* base, const L **lattices, const double &h) {
            return basis_function::grad_convolution_sum_h<N,L,BF>(p, base, lattices, h);
        }
    };
    /*! No fast basis specialization for this guy right now
     */

};
#endif // _SISL_TP_CUBICIMOM_BASIS_FUNCTION_H_
