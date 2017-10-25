/**
 * si_function.h
 *
 * This file defines functions from a shift invariant space. We call these
 * Shift Invariant Functions (si_functions), which is a slight abuse 
 * of naming to mean that they come from shift invariant spaces.
 *
 * @author Joshua Horacsek
 **/

#if 0
#ifndef _SISL_RFSPACE_H_
#define _SISL_RFSPACE_H_

#include <Eigen/Dense>
#include <Eigen/Geometry>
#include <sisl/primitives.hpp>
#include <sisl/function/base_function.hpp>

namespace sisl {

    template<class L, class BF, int N>
    class si_function : public function {
    public:
        /*! \breif Evaluate the function at a point.
         */
        si_function() : _bForceScale(false), _lattice(nullptr), _dBasisScale(1.), _bUseBasisDerivative(true){
            _mSpaceTransform = Eigen::MatrixXd::Identity(N, N);
        }

        /*! \breif Evaluate the function at a point.
         */
        si_function(L *lattice) : si_function(){
            _lattice = lattice;
        }

        virtual ~si_function() {

        }

        /*! \breif Evaluate the function at a point.
         */
        virtual const double operator()(double d0, ...) const {
            va_list vl;
            vector V(N);
            V[0] = d0;

            va_start(vl, d0);
            for(unsigned int i = 1; i < N; i++) {
                V[i] = va_arg(vl, double);
            }
            va_end(vl);

            return (*this)(V);
        }

        /*! \breif Evaluate the function at a point.
         */
        virtual const double operator()(const vector &p) const {
            if(_lattice == nullptr) return 0;

            if(!_bForceScale) {
                return BF::template convolution_sum<N, L, BF>(
                            _mSpaceTransform*p,
                            (const L*)_lattice);
            }
            return BF::template convolution_sum_h<N, L, BF>(
                        _mSpaceTransform*p,
                        (const L*)_lattice,
                        _dBasisScale);
        }

        /*! \breif Evaluate the function at a point.
         */
        virtual const double d(int component, double d0, ...) const {
            va_list vl;
            vector V(N);
            V[0] = d0;

            va_start(vl, d0);
            for(unsigned int i = 1; i < N; i++) {
                V[i] = va_arg(vl, double);
            }
            va_end(vl);

            return d(component, V);
        }

        /*! \breif Evaluate the function at a point.
         */
        virtual const double d(int component, const vector &p) const {
            if(_bUseBasisDerivative && BF::has_derivative()) {
                if(!_bForceScale)
                    return BF::template convolution_sum_deriv<N, L, BF>(
                            _mSpaceTransform*p,
                            (const L*)_lattice,
                            component);
                return BF::template convolution_sum_deriv_h<N, L, BF>(
                        _mSpaceTransform*p,
                        (const L*)_lattice,
                        component,
                        _dBasisScale);

            }
            if(!_d[component]) return 0;
            if(!_bForceScale)
                return BF::template convolution_sum<N, L, BF>(
                            _mSpaceTransform*p,
                            (const L*)_d[component]);
            return BF::template convolution_sum_h<N, L, BF>(
                        _mSpaceTransform*p,
                        (const L*)_d[component],
                        _dBasisScale);

        }

        /*! \breif Evaluate the function at a point.
         */
        virtual const vector grad(double d0, ...) const {
            va_list vl;
            vector V(N);
            V[0] = d0;

            va_start(vl, d0);
            for(unsigned int i = 1; i < N; i++) {
                V[i] = va_arg(vl, double);
            }
            va_end(vl);

            return grad(V);
        }

        /*! \breif Evaluate the function at a point.
         */
        virtual const vector grad(const vector &p) const {
            if(_bUseBasisDerivative && BF::has_derivative()) {
                if(!_bForceScale)
                    return BF::template grad_convolution_sum<N, L, BF>(
                            _mSpaceTransform*p,
                            (const L*)_lattice);
                return BF::template grad_convolution_sum_h<N, L, BF>(
                        _mSpaceTransform*p,
                        (const L*)_lattice,
                        _dBasisScale);

            }
            if(!_bForceScale)
                return BF::template grad_convolution_sum<N, L, BF>(
                        _mSpaceTransform*p,
                        (const L*)_lattice,
                        (const L**)_d);
            return BF::template grad_convolution_sum_h<N, L, BF>(
                        _mSpaceTransform*p,
                        (const L*)_lattice,
                        (const L**)_d,
                        _dBasisScale);

        }
        /*! \breif Sets a scale for the basis function to use.
        */
        void set_basis_scale(const double &h) {
            _dBasisScale = h;
            _bForceScale = true;
        }

        /*! \brief If the basis has a derivative, this makes the function use
         * that derivative for derivative reconstruction
         */
        void use_basis_gradient() {
            _bUseBasisDerivative = true;
        }

        /*! \brief If the function has derivative lattices, this makes the
         * function use the given basis to reconstruct derivative values.
         */
        void use_derivative_lattice() {
            _bUseBasisDerivative = false;
        }

        /*! \brief Sets the current reconstruction lattice
         */
        void set_lattice(L *new_lat) {
            this->_lattice = new_lat;
        }

        /*! \brief Sets the lattice to be used for derivative reconstruction
         *  use use_derivative_lattice() to use this for reconstruction after
         *  all lattices have been set.
         */
        void set_derivative_lattice(unsigned int component, L *d) {
            if(component < N)
                _d[component] = d;
        }

        /*! \brief Sets the transform for this space,
        */
        void set_transform(const transform &t){
            if(t.determinant() > 0)
                _mSpaceTransform = t;
        }

        /*! \bried Gets the transform assiated to this space,
         */
         transform get_transform() const{
             return _mSpaceTransform;
         }

         L *get_lattice() {
             return _lattice;
         }

         void set_scale(const vector &s) {
             m_vUserScale = s;
             _mSpaceTransform *= Eigen::Scaling(s);
         }

         vector get_scale() const {
             return m_vUserScale;
         }

    private:
        L *_lattice, *_d[N];
        bool _bUseBasisDerivative;
        bool _bForceScale;
        double _dBasisScale;
        transform _mSpaceTransform;
        sisl::vector m_vUserScale;
    };
}
#endif

#endif // _SISL_RFSPACE_H_
