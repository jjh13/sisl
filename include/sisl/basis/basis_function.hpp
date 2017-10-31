/**
 * basis_function.hpp
 * Provides the an abstract class for basis functions of arbitary dimension.
 *
 * @author Joshua Horacsek
 */

#include <vector>
#include <string>
#include <tuple>

#include <sisl/primitives.hpp>
#include <sisl/lattice/base_lattice.hpp>

#ifndef __SISL_BASIS_FUNCTION_H__
#define __SISL_BASIS_FUNCTION_H__

#ifndef NO_FAST_BASES //! if NO_FAST_BASES is defined, all fast implementations of basis functions will be disabled 
#define FAST_BASIS_SPECIALIZATION(basis, lattice, function, dim, type) \
template<> \
inline double basis::convolution_sum<dim, lattice<type>, basis>(const vector &p, const lattice<type> *l) { \
    return function<type>(p,l); \
}
#else
#define FAST_BASIS_SPECIALIZATION(basis, lattice, function, dim, type)
#endif

namespace sisl {

    /*! \brief Abstract definition of a basis function.
     * Provides an interface that any basis function of a shift invariant
     * space must adhere to. This also provides the heavy lifting code for a 
     * ``brute force'' convolution sum. tp_linear is a good example of how
     * to implement basis functions.
     */
    class basis_function {
    public:
        /*! \brief Evaluates the un-scaled basis function.
         * Evaluates the basis function as if it were not scaled by any scaling
         * parameter.
         */
        template<int N>
        static const double phi(const vector &p) { return 0; }

        /*! \brief Evaluates the un-scaled basis function.
         * Evaluates the basis function as if it were not scaled by any scaling
         * parameter. This, however, does take a scale parameter, as the basis
         * may change per scale (e.g. exponential splines)
         */
        template<int N>
        static const double phi(const double &h, const vector &p ) { return 0; }

        /*! \brief Evaluates the derivative of an un-scaled basis function.
         * Evaluates the derivative of a basis function as if it were not scaled
         * by any scaling parameter.
         */
        template<int N>
        static const double dphi(const vector &p, const int &d ) { return 0; }

        /*! \brief Evaluates the derivative of the un-scaled basis function.
         * Evaluates the basis function as if it were not scaled by any scaling
         * parameter. This, however, does take a scale parameter, as the basis
         * may change per scale (e.g. exponential splines)
         */
        template< int N>
        static const double dphi(const double &h, const vector &p, const int &d ) { return 0; }

        /*! \brief Returns the integer support for this basis function.
         * Returns the closure of the support of the basis function, intersected
         * with the integer lattice.
         */
        template<int N>
        static std::vector<lattice_site> get_integer_support() { throw "basis_function()::getSupport() - Not Implemented!"; }


        static bool has_derivative() { throw "basis_function()::has_derivative() - Not Implemented!"; }

        /* \brief Default convolution sum function.
         * This is the meat of this class -- the idea of this
         * structure is that can allow any basis function and lattice combo.
         * There is a cost to this generality, i.e  we may explicitly shift
         * to a non-lattice site (which is easy to check for) and we may
         * evaluate at a point that doesn't contribute to our convolution sum.
         * 
         * The overarching design of this structure is general enough so that, 
         * for certain lattice basis combinations, we can write fast versions
         * of this function via means of template specification. This is what
         * the FAST_BASIS_SPECIALIZATION macro does. 
         */
        template<int N, class L, class BF>
        static double convolution_sum(const vector &p, const L *lattice) {
            auto sites = BF::template get_integer_support<N>();
            lattice_site c = lattice->get_nearest_site(p);
            lattice_site extent = lattice->get_dimensions();

            double value = 0;

            for(lattice_site s : sites) {

                if(!lattice->is_lattice_site(c+s)) continue;
                if(!lattice->is_filled(c+s)) continue;

                double w = BF::template phi<N>(p.cast<double>() - (c+s).cast<double>());
                if(w == 0.) continue;
                value += w * (double)(*lattice)(c + s);
            }
            return value;
        }

        /* \brief Default derivative convolution sum function.
         * This is basically the same as the above, but with derivatives.
         */
        template<int N, class L, class BF>
        static double convolution_sum_deriv(const vector &p, const L *lattice, const int &component) {
            auto sites = BF::template get_integer_support<N>();
            lattice_site c = lattice->get_nearest_site(p);
            lattice_site extent = lattice->get_dimensions();

            double value = 0;

            for(lattice_site s : sites) {

                if(!lattice->is_lattice_site(c+s)) continue;
                if(!lattice->is_filled(c+s)) continue;

                double w = BF::template dphi<N>(p - (c+s).cast<double>(), component);
                if(w == 0.) continue;
                value += w * (double)(*lattice)(c + s);
            }
            return value;
        }


        /* \brief Default derivative convolution sum function.
         * Like above, but for all first derivatives of this function.
         */
        template<int N, class L, class BF>
        static vector grad_convolution_sum(const vector &p, const L *lattice) {
            auto sites = BF::template get_integer_support<N>();
            lattice_site c = lattice->get_nearest_site(p);
            lattice_site extent = lattice->get_dimensions();

            vector value(N);
            value.setZero();

            for(lattice_site s : sites) {
                if(!lattice->is_lattice_site(c+s)) continue;
                if(!lattice->is_filled(c+s)) continue;

                for(int j = 0; j < N; j++) {
                    double w = BF::template dphi<N>(p - (c+s).cast<double>(), j);
                    if(w == 0.) continue;
                    value[j] += w * (double)(*lattice)(c + s);
                }
            }
            return value;
        }

        /* \brief Default derivative convolution sum function.
         * Like above, but for all first derivatives of this function.
         */
        template<int N, class L, class BF>
        static vector grad_convolution_sum(const vector &p, const L* base, const L **lattices) {
            auto sites = BF::template get_integer_support<N>();
            lattice_site c = base->get_nearest_site(p);
            lattice_site extent = base->get_dimensions();

            vector value(N);
            value.setZero();

            for(lattice_site s : sites) {
                if(!base->is_lattice_site(c+s)) continue;

                double w = BF::template phi<N>(p - (c+s).cast<double>());

                if(w == 0.) continue;

                for(int j = 0; j < N; j++) {
                    if(lattices[j] == nullptr) continue;
                    if(!lattices[j]->is_filled(c+s)) continue;
                    value[j] += w * (double)(*lattices[j])(c + s);
                }
            }
            return value;
        }

        /* \brief Default convolution sum function.
         * This is the bread and meat of this class -- the idea of this
         * structure is that can allow any basis function and lattice combo.
         * There is a cost to this generality, i.e  we may explicitly shift
         * to a non-lattice site (which is easy to check for) and we may
         * evaluate at a point that doesn't contribute to our convolution sum.
         * But this design is general enough that for specific combinations of
         * lattices and generating functions, we can derive faster evaluation
         * schemes.
         *
         * This is for basis functions that change along with the space scale.
         */
        template<int N, class L, class BF>
        static double convolution_sum_h(const vector &p, const L *lattice, const double &h) {
            auto sites = BF::template get_integer_support<N>();
            lattice_site c = lattice->get_nearest_site(p);
            lattice_site extent = lattice->get_dimensions();

            double value = 0;

            for(lattice_site s : sites) {

                if(!lattice->is_lattice_site(c+s)) continue;
                if(!lattice->is_filled(c+s)) continue;


                double w = BF::template phi<N>(h, p - (c+s).cast<double>());
                if(w == 0.) continue;
                value += w * (*lattice)(c + s);
            }
            return value;
        }

        /* \brief Default derivative convolution sum function.
         * This is basically the same as the above, but with derivatives.
         *
         * This is for basis functions that change along with the space scale.
         */
        template<int N, class L, class BF>
        static double convolution_sum_deriv_h(const vector &p, const L *lattice, const int &component, const double &h) {

            auto sites = BF::template get_integer_support<N>();
            lattice_site c = lattice->get_nearest_site(p);
            lattice_site extent = lattice->get_dimensions();
            double value = 0;

            for(lattice_site s : sites) {
                if(!lattice->is_lattice_site(c+s)) continue;
                if(!lattice->is_filled(c+s)) continue;

                double w = BF::template dphi<N>(h, p - (c+s).cast<double>(), component);
                if(w == 0.) continue;
                value += w * (*lattice)(c + s);
            }
            return value;
        }


        /* \brief Default derivative convolution sum function.
         * Like above, but for all first derivatives of this function.
         *
         * This is for basis functions that change along with the space scale.
         */
        template<int N, class L, class BF>
        static vector grad_convolution_sum_h(const vector &p, const L *lattice, const double &h) {
            auto sites = BF::template get_integer_support<N>();
            lattice_site c = lattice->get_nearest_site(p);
            lattice_site extent = lattice->get_dimensions();

            vector value(N);
            value.setZero();

            for(lattice_site s : sites) {
                if(!lattice->is_lattice_site(c+s)) continue;
                if(!lattice->is_filled(c+s)) continue;

                for(int j = 0; j < N; j++) {
                    double w = BF::template dphi<N>(h, p - (c+s).cast<double>(), j);
                    if(w == 0.) continue;
                    value[j] += w * (*lattice)(c + s);
                }
            }
            return value;
        }

        /* \brief Default derivative convolution sum function.
         * Like above, but for all first derivatives of this function.
         */
        template<int N, class L, class BF>
        static vector grad_convolution_sum_h(const vector &p, const L* base, const L **lattices, const double &h) {
            auto sites = BF::template get_integer_support<N>();
            lattice_site c = base->get_nearest_site(p);
            lattice_site extent = base->get_dimensions();

            vector value(N);
            value.setZero();

            for(lattice_site s : sites) {
                if(!base->is_lattice_site(c+s)) continue;

                double w = BF::template phi<N>(h, p - (c+s).cast<double>());

                if(w == 0.) continue;

                for(int j = 0; j < N; j++) {
                    if(lattices[j] == nullptr) continue;
                    if(!lattices[j]->is_filled(c+s)) continue;
                    value[j] += w * (double)(*lattices[j])(c + s);
                }
            }
            return value;
        }

    };
}
#endif // __SISL_BASIS_FUNCTION_H__
