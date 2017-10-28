/**
 * nearest_neighbor.hpp
 * Provides the an abstract class for basis functions of arbitary dimension.
 *
 * @author Joshua Horacsek
 */

#ifndef __SISL_NN_BASIS_H__
#define __SISL_NN_BASIS_H__

#include <vector>
#include <string>
#include <tuple>

#include <sisl/primitives.hpp>
#include <sisl/lattice/base_lattice.hpp>
#include <sisl/basis/basis_function.hpp>


namespace sisl {
    /*! \brief Nearest neighbor interpolation for any lattice.
     *  Simply finds the nearest lattice site and returns the value at that
     *  site. This class doesn't implement phi or dphi functions, as one would
     *  need to know the lattice a-priori for those, and this class structure
     *  isn't sophisticated enough to facilitate that.
     */
    class nearest_neighbor : public basis_function {
    public:
        /*! \brief Evaluates the un-scaled basis function.
         * Evaluates the basis function as if it were not scaled by any scaling
         * parameter.
         */
        template<int N>
        static const double phi(const vector &) { throw "nearest_neighbor::phi() - Not Implemented!"; }

        /*! \brief Evaluates the un-scaled basis function.
         * Evaluates the basis function as if it were not scaled by any scaling
         * parameter. This, however, does take a scale parameter, as the basis
         * may change per scale (e.g. exponential splines)
         */
        template<int N>
        static const double phi(const double &h, const vector &p ) { throw "nearest_neighbor::phi() - Not Implemented!"; }

        /*! \brief Evaluates the derivative of an un-scaled basis function.
         * Evaluates the derivative of a basis function as if it were not scaled
         * by any scaling parameter.
         */
        template<int N>
        static const double dphi(const vector &p, const int &d ) { throw "nearest_neighbor::dphi() - Not Implemented!"; }

        /*! \brief Evaluates the derivative of the un-scaled basis function.
         * Evaluates the basis function as if it were not scaled by any scaling
         * parameter. This, however, does take a scale parameter, as the basis
         * may change per scale (e.g. exponential splines)
         */
        template< int N>
        static const double dphi(const double &h, const vector &p, const int &d ) { throw "nearest_neighbor::dphi() - Not Implemented!"; }

        template<int N>
        static std::vector<lattice_site> get_integer_support() { throw "nearest_neighbor()::getSupport() - Not Implemented!"; }


        static bool has_derivative() { return false; }

        /* \brief Default convolution sum function.
         * This is the bread and meat of this class -- the idea of this
         * structure is that can allow any basis function and lattice combo.
         * There is a cost to this generality, i.e  we may explicitly shift
         * to a non-lattice site (which is easy to check for) and we may
         * evaluate at a point that doesn't contribute to our convolution sum.
         * But this design is general enough that for specific combinations of
         * lattices and generating functions, we can derive faster evaluation
         * schemes.
         */
        template<int N, class L, class BF>
        static double convolution_sum(const vector &p, const L *lattice) {
            lattice_site c = lattice->get_nearest_site(p);
            return (*lattice)(c);
        }

        /* \brief Default derivative convolution sum function.
         * This is basically the same as the above, but with derivatives.
         */
        template<int N, class L, class BF>
        static double convolution_sum_deriv(const vector &p, const L *lattice, const int &component) {
            return 0;
        }


        /* \brief Default derivative convolution sum function.
         * Like above, but for all first derivatives of this function.
         */
        template<int N, class L, class BF>
        static vector grad_convolution_sum(const vector &p, const L *lattice) {
            vector value(N);
            value.setZero();
            return value;
        }
        /* \brief Default derivative convolution sum function.
         * Like above, but for all first derivatives of this function.
         */
        template<int N, class L, class BF>
        static vector grad_convolution_sum(const vector &p, const L* base, const L **lattices) {
            vector value(N);
            value.setZero();
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
            lattice_site c = lattice->get_nearest_site(p);
            return (*lattice)(c);
        }

        /* \brief Default derivative convolution sum function.
         * This is basically the same as the above, but with derivatives.
         *
         * This is for basis functions that change along with the space scale.
         */
        template<int N, class L, class BF>
        static double convolution_sum_deriv_h(const vector &p, const L *lattice, const double &h, const int &component) {
            return 0;
        }


        /* \brief Default derivative convolution sum function.
         * Like above, but for all first derivatives of this function.
         *
         * This is for basis functions that change along with the space scale.
         */
        template<int N, class L, class BF>
        static vector grad_convolution_sum_h(const vector &p, const L *lattice, const double &h) {
            vector value(N);
            value.setZero();

            return value;
        }


        /* \brief Default derivative convolution sum function.
         * Like above, but for all first derivatives of this function.
         */
        template<int N, class L, class BF>
        static vector grad_convolution_sum_h(const vector &p, const L* base, const L **lattices, const double &h) {
            vector value(N);
            value.setZero();

            return value;
        }

    };
}
#endif // __SISL_NN_BASIS_H__
