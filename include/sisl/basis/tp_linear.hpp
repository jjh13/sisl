/**
 * tp_linear.h
 * Implements the tensor product linear b_spline in 'N' dimensions. 
 *
 * Box spline generating matrix:
 * [1, 0, 0]
 * [0, 1, 0]
 * [0, 0, 1]
 *
 * @author Joshua Horacsek
 */

#include <vector>
#include <string>
#include <tuple>
#include <sisl/primitives.hpp>
#include <sisl/lattice/base_lattice.hpp>
#include <sisl/basis/basis_function.hpp>

// We specialize on these lattices, so we need to include them
#include <sisl/lattice/2d/cartesian_planar.hpp>
#include <sisl/lattice/3d/cartesian_cubic.hpp>

#ifndef _SISL_TP_LINEAR_BASIS_FUNCTION_H_
#define _SISL_TP_LINEAR_BASIS_FUNCTION_H_

namespace sisl {

    class tp_linear : public basis_function {
    private:
        static const double bspline_1(const double &t){
            double x = std::abs(t);
            return (x <= 1) ? -x + 1 : 0;
        }

        static const double dbspline_1(const double &t){
            if(t > -1 && t <= 1) {
                if(t < 0) {
                    return 1;
                } else {
                    return -1;
                }
            }
            return 0;
        }

    public:
        template <int N>
        static const double phi(const vector &p) {
            double prod = 1;
            for(unsigned int i = 0; i < N; i++) prod *= bspline_1(p[i]);
            return prod;
        }

        template <int N>
        static const double phi(const double &h, const vector &p) {
            return tp_linear::phi<N>(p);
        }

        template <int N>
        static const double dphi(const vector &p, const int &d) {
            double prod = 1;
            for(unsigned int i = 0; i < N; i++) {
                if(i == d)
                    prod *= dbspline_1(p[i]);
                else
                    prod *= bspline_1(p[i]);
            }
            return prod;
        }

        template <int N>
        static const double dphi(const double &h, const vector &p, const int &d) {
            return tp_linear::dphi<N>(p, d);
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
                    ret.push_back(l + po);
                    ret.push_back(l);
                    ret.push_back(l - po);
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

    /*******
     * Specializations for specific lattice types
     *******/

    /**
     * Dimension: 2
     * Lattice: Cartesian (planar)
     * In this case, we can just do a bi-linear interpolation of the values
     * at the corners of a shifted voronoi cell.
     */
    template<class T>
    inline double __fast_planar_tp_linear__(const vector &p, const cartesian_planar<T> *lattice) {
        //vector sx = lattice->get_dimensions().template cast<double>();
        vector vox = p.array();// * sx.array();


        int vx = (int)floor(vox[0]), vy = (int)floor(vox[1]);

        double x = vox[0] - (double)vx,
        y = vox[1] - (double)vy;

        double v00, v10, v01, v11;
        v00 = (*lattice)(vx, vy);
        v10 = (*lattice)(vx+1, vy) - v00;
        v01 = (*lattice)(vx, vy+1) - v00;
        v11 = (*lattice)(vx+1, vy+1) - v10 - v01 - v00;

        return v00 + x*v10 + y*v01 + x*y*v11;
    }

    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_planar, __fast_planar_tp_linear__, 2, unsigned char);
    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_planar, __fast_planar_tp_linear__, 2, char);
    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_planar, __fast_planar_tp_linear__, 2, unsigned short);
    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_planar, __fast_planar_tp_linear__, 2, short);
    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_planar, __fast_planar_tp_linear__, 2, unsigned int);
    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_planar, __fast_planar_tp_linear__, 2, int);
    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_planar, __fast_planar_tp_linear__, 2, float);
    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_planar, __fast_planar_tp_linear__, 2, double);

    /**
     * Dimension: 3
     * Lattice: Cartesian (cubic)
     * In this case, we can just do a tri-linear interpolation of the values
     * at the corners of a shifted voronoi cell.
     */
    template<class T>
    inline double __fast_cubic_tp_linear__(const vector &p, const cartesian_cubic<T> *lattice) {
        //vector sx = lattice->get_dimensions().template cast<double>();
        vector vox = p.array();// * sx.array();

        int vx = (int)floor(vox[0]),
            vy = (int)floor(vox[1]),
            vz = (int)floor(vox[2]);

        double x = vox[0] - (double)vx,
               y = vox[1] - (double)vy,
               z = vox[2] - (double)vz;

        double v000 = (*lattice)(vx, vy, vz);
        double v100 = (*lattice)(vx + 1, vy, vz);
        double v010 = (*lattice)(vx, vy + 1, vz);
        double v110 = (*lattice)(vx + 1, vy + 1, vz);
        double v001 = (*lattice)(vx, vy, vz + 1);
        double v101 = (*lattice)(vx + 1, vy, vz + 1);
        double v011 = (*lattice)(vx, vy + 1, vz + 1);
        double v111 = (*lattice)(vx + 1, vy + 1, vz + 1);

        return (1.-x)*(1.-y)*(1.-z)*v000 +
               x*(1.-y)*(1.-z)*v100 +
               (1.-x)*y*(1.-z)*v010 +
               x*y*(1.-z)*v110 +
               (1.-x)*(1.-y)*z*v001 +
               x*(1.-y)*z*v101 +
               (1.-x)*y*z*v011 +
               x*y*z*v111;
    }

    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_cubic, __fast_cubic_tp_linear__, 3, unsigned char);
    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_cubic, __fast_cubic_tp_linear__, 3, char);
    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_cubic, __fast_cubic_tp_linear__, 3, unsigned short);
    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_cubic, __fast_cubic_tp_linear__, 3, short);
    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_cubic, __fast_cubic_tp_linear__, 3, unsigned int);
    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_cubic, __fast_cubic_tp_linear__, 3, int);
    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_cubic, __fast_cubic_tp_linear__, 3, float);
    FAST_BASIS_SPECIALIZATION(tp_linear, cartesian_cubic, __fast_cubic_tp_linear__, 3, double);

};
#endif // _TP_LINEAR_BASIS_FUNCTION_H_
