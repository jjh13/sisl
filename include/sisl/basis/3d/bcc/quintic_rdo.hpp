/**
 * quintic_rdo.hpp
 *
 * Default evaluation code for the spline defined by
[-1  1  1 -1 -1  1  1 -1]
[ 1 -1  1 -1  1 -1  1 -1]
[ 1  1 -1 -1  1  1 -1 -1]
 * Auto-generated from the Sage worksheet.
 */

#ifndef __SISL_BOX_BCC_QUINTIC_RDO__
#define __SISL_BOX_BCC_QUINTIC_RDO__

#include <vector>
#include <string>
#include <tuple>
#include <sisl/primitives.hpp>
#include <sisl/lattice/base_lattice.hpp>
#include <sisl/basis/basis_function.hpp>


namespace sisl {
    /**
     * \brief Quintic BCC basis function.
     */
    class bcc_quintic_rdo : public basis_function {
    private:
        static inline double __pp_r0____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r0____d0___result;
           __pp_r0____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/128.0L)*pow(x_1, 2)*x_2*(x_0 - 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/3.0L;
           return __pp_r0____d0___result;
        }
        static inline double __pp_r1____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r1____d0___result;
           __pp_r1____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/128.0L)*pow(x_1, 2)*x_2*(x_0 - 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/3.0L;
           return __pp_r1____d0___result;
        }
        static inline double __pp_r2____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r2____d0___result;
           __pp_r2____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 4*x_1 + 16) - 1.0L/128.0L*x_2*(-2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 - 4) - 4*x_1*(x_0 - 4) - 32) - 1.0L/3.0L;
           return __pp_r2____d0___result;
        }
        static inline double __pp_r3____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r3____d0___result;
           __pp_r3____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3)*(x_0 - 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 4) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 4*x_1*(x_0 - 2) - 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 - 2) - 4*x_1*(x_0 - 2) + 8) - 5.0L/24.0L;
           return __pp_r3____d0___result;
        }
        static inline double __pp_r4____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r4____d0___result;
           __pp_r4____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 4*x_1 + 16) - 1.0L/128.0L*x_2*(-2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 - 4) + 4*x_1*(x_0 - 4) - 32) - 1.0L/3.0L;
           return __pp_r4____d0___result;
        }
        static inline double __pp_r5____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r5____d0___result;
           __pp_r5____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3)*(x_0 - 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 4*x_0 + 4) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 4*x_1*(x_0 - 2) - 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 - 2) + 4*x_1*(x_0 - 2) + 8) - 5.0L/24.0L;
           return __pp_r5____d0___result;
        }
        static inline double __pp_r6____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r6____d0___result;
           __pp_r6____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) - 1.0L/6.0L*x_0 + (1.0L/128.0L)*pow(x_1, 2)*x_2*(5*x_0 - 8) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(5*x_0 - 8) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16);
           return __pp_r6____d0___result;
        }
        static inline double __pp_r7____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r7____d0___result;
           __pp_r7____d0___result = (1.0L/256.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) - 1.0L/12.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 8*x_0) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 4) - 1.0L/256.0L*pow(x_2, 2)*(3*pow(x_0, 2) - 8*x_0 + 3*pow(x_1, 2)) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) + x_0*pow(x_1, 2) - 16*x_0 + 16) - 1.0L/12.0L;
           return __pp_r7____d0___result;
        }
        static inline double __pp_r8____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r8____d0___result;
           __pp_r8____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 1.0L/192.0L*pow(x_2, 3)*(x_0 - 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 2*x_1*(x_0 - 2) - 8) - 1.0L/64.0L*x_2*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2)*(x_0 - 2) - 2*x_1*(x_0 - 2) + 4) - 5.0L/24.0L;
           return __pp_r8____d0___result;
        }
        static inline double __pp_r9____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r9____d0___result;
           __pp_r9____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r9____d0___result;
        }
        static inline double __pp_r10____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r10____d0___result;
           __pp_r10____d0___result = (1.0L/256.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) - 1.0L/12.0L*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 4) - 1.0L/256.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 8*x_0) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 1.0L/256.0L*pow(x_2, 2)*(3*pow(x_0, 2) - 2*x_0*x_1 - 8*x_0 + 3*pow(x_1, 2)) - 1.0L/12.0L;
           return __pp_r10____d0___result;
        }
        static inline double __pp_r11____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r11____d0___result;
           __pp_r11____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) - 1.0L/6.0L*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(5*x_0 - 8) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(5*x_0 - 8) + 16);
           return __pp_r11____d0___result;
        }
        static inline double __pp_r12____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r12____d0___result;
           __pp_r12____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r12____d0___result;
        }
        static inline double __pp_r13____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r13____d0___result;
           __pp_r13____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r13____d0___result;
        }
        static inline double __pp_r14____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r14____d0___result;
           __pp_r14____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r14____d0___result;
        }
        static inline double __pp_r15____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r15____d0___result;
           __pp_r15____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 4) + (1.0L/192.0L)*pow(x_2, 3)*(x_0 - 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 2*x_1*(x_0 - 2) - 8) + (1.0L/64.0L)*x_2*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2)*(x_0 - 2) - 2*x_1*(x_0 - 2) + 4) - 5.0L/24.0L;
           return __pp_r15____d0___result;
        }
        static inline double __pp_r16____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r16____d0___result;
           __pp_r16____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 1.0L/192.0L*pow(x_2, 3)*(x_0 - 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 2*x_1*(x_0 - 2) - 8) - 1.0L/64.0L*x_2*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2)*(x_0 - 2) + 2*x_1*(x_0 - 2) + 4) - 5.0L/24.0L;
           return __pp_r16____d0___result;
        }
        static inline double __pp_r17____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r17____d0___result;
           __pp_r17____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r17____d0___result;
        }
        static inline double __pp_r18____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r18____d0___result;
           __pp_r18____d0___result = (1.0L/256.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) - 1.0L/12.0L*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 4) - 1.0L/256.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 8*x_0) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 1.0L/256.0L*pow(x_2, 2)*(3*pow(x_0, 2) + 2*x_0*x_1 - 8*x_0 + 3*pow(x_1, 2)) - 1.0L/12.0L;
           return __pp_r18____d0___result;
        }
        static inline double __pp_r19____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r19____d0___result;
           __pp_r19____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) - 1.0L/6.0L*x_0 - 1.0L/384.0L*pow(x_1, 3)*(5*x_0 - 8) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(5*x_0 - 8) + 16);
           return __pp_r19____d0___result;
        }
        static inline double __pp_r20____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r20____d0___result;
           __pp_r20____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r20____d0___result;
        }
        static inline double __pp_r21____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r21____d0___result;
           __pp_r21____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r21____d0___result;
        }
        static inline double __pp_r22____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r22____d0___result;
           __pp_r22____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r22____d0___result;
        }
        static inline double __pp_r23____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r23____d0___result;
           __pp_r23____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 4*x_0 + 4) + (1.0L/192.0L)*pow(x_2, 3)*(x_0 - 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 2*x_1*(x_0 - 2) - 8) + (1.0L/64.0L)*x_2*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2)*(x_0 - 2) + 2*x_1*(x_0 - 2) + 4) - 5.0L/24.0L;
           return __pp_r23____d0___result;
        }
        static inline double __pp_r24____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r24____d0___result;
           __pp_r24____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 4*x_1 + 16) + (1.0L/128.0L)*x_2*(-2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 - 4) - 4*x_1*(x_0 - 4) - 32) - 1.0L/3.0L;
           return __pp_r24____d0___result;
        }
        static inline double __pp_r25____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r25____d0___result;
           __pp_r25____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 4*x_1 + 16) + (1.0L/128.0L)*x_2*(-2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 - 4) + 4*x_1*(x_0 - 4) - 32) - 1.0L/3.0L;
           return __pp_r25____d0___result;
        }
        static inline double __pp_r26____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r26____d0___result;
           __pp_r26____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/12.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0) + (1.0L/384.0L)*pow(x_2, 3)*(3*x_0 - 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 16) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) + 3*x_0*pow(x_1, 2) - 16) - 1.0L/12.0L;
           return __pp_r26____d0___result;
        }
        static inline double __pp_r27____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r27____d0___result;
           __pp_r27____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/8.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3)*(x_0 - 1) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8) + (1.0L/16.0L)*x_1*(x_0 - 1) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 4*x_1*(x_0 - 1) - 8) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 + 2) + 8*x_1*(x_0 - 1) - 8) - 1.0L/24.0L;
           return __pp_r27____d0___result;
        }
        static inline double __pp_r28____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r28____d0___result;
           __pp_r28____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/8.0L*x_0 - 1.0L/192.0L*pow(x_1, 3)*(x_0 - 1) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8) - 1.0L/16.0L*x_1*(x_0 - 1) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 4*x_1*(x_0 - 1) - 8) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 + 2) - 8*x_1*(x_0 - 1) - 8) - 1.0L/24.0L;
           return __pp_r28____d0___result;
        }
        static inline double __pp_r29____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r29____d0___result;
           __pp_r29____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2)) - 1.0L/128.0L*x_2*(-4*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 - 4));
           return __pp_r29____d0___result;
        }
        static inline double __pp_r30____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r30____d0___result;
           __pp_r30____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2)) - 1.0L/128.0L*x_2*(-4*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 - 4));
           return __pp_r30____d0___result;
        }
        static inline double __pp_r31____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r31____d0___result;
           __pp_r31____d0___result = -5.0L/768.0L*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(5*pow(x_0, 2) - 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(5*pow(x_0, 2) - 8*x_0 + 5*pow(x_1, 2)) - 1.0L/128.0L*x_2*(-8*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 - 8));
           return __pp_r31____d0___result;
        }
        static inline double __pp_r32____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r32____d0___result;
           __pp_r32____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/128.0L*pow(x_1, 2)*x_2*(x_0 - 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/3.0L;
           return __pp_r32____d0___result;
        }
        static inline double __pp_r33____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r33____d0___result;
           __pp_r33____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/128.0L*pow(x_1, 2)*x_2*(x_0 - 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/3.0L;
           return __pp_r33____d0___result;
        }
        static inline double __pp_r34____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r34____d0___result;
           __pp_r34____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3)*(x_0 - 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 4*x_1*(x_0 - 2) - 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 - 2) - 4*x_1*(x_0 - 2) + 8) - 5.0L/24.0L;
           return __pp_r34____d0___result;
        }
        static inline double __pp_r35____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r35____d0___result;
           __pp_r35____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 4*x_1 + 16) + (1.0L/128.0L)*x_2*(-2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 - 4) - 4*x_1*(x_0 - 4) - 32) - 1.0L/3.0L;
           return __pp_r35____d0___result;
        }
        static inline double __pp_r36____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r36____d0___result;
           __pp_r36____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3)*(x_0 - 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 4*x_1*(x_0 - 2) - 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 - 2) + 4*x_1*(x_0 - 2) + 8) - 5.0L/24.0L;
           return __pp_r36____d0___result;
        }
        static inline double __pp_r37____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r37____d0___result;
           __pp_r37____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 4*x_1 + 16) + (1.0L/128.0L)*x_2*(-2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 - 4) + 4*x_1*(x_0 - 4) - 32) - 1.0L/3.0L;
           return __pp_r37____d0___result;
        }
        static inline double __pp_r38____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r38____d0___result;
           __pp_r38____d0___result = (1.0L/256.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) - 1.0L/12.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 8*x_0) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 4) - 1.0L/256.0L*pow(x_2, 2)*(3*pow(x_0, 2) - 8*x_0 + 3*pow(x_1, 2)) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) + x_0*pow(x_1, 2) - 16*x_0 + 16) - 1.0L/12.0L;
           return __pp_r38____d0___result;
        }
        static inline double __pp_r39____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r39____d0___result;
           __pp_r39____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) - 1.0L/6.0L*x_0 - 1.0L/128.0L*pow(x_1, 2)*x_2*(5*x_0 - 8) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(5*x_0 - 8) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16);
           return __pp_r39____d0___result;
        }
        static inline double __pp_r40____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r40____d0___result;
           __pp_r40____d0___result = (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 - 2) - 1.0L/8.0L*x_1*(x_0 - 2) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 2) - 1.0L/128.0L*pow(x_2, 2)*(-4*x_0 + x_1*(x_0 - 2) + 8) + (1.0L/128.0L)*x_2*(16*x_0 + pow(x_1, 2)*(x_0 - 2) - 8*x_1*(x_0 - 2) - 32) - 1.0L/3.0L;
           return __pp_r40____d0___result;
        }
        static inline double __pp_r41____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r41____d0___result;
           __pp_r41____d0___result = -1.0L/384.0L*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/8.0L*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 2) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4) - 1.0L/64.0L*x_1*(3*pow(x_0, 2) - 4*x_0 - 4) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - x_1*(x_0 + 4) + 4) - 1.0L/128.0L*x_2*(-2*pow(x_0, 2) + 8*x_0 + pow(x_1, 2)*(x_0 - 2) - 4*x_1*(x_0 - 2) - 8) - 1.0L/24.0L;
           return __pp_r41____d0___result;
        }
        static inline double __pp_r42____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r42____d0___result;
           __pp_r42____d0___result = (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) + (1.0L/8.0L)*x_0*x_1 - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(x_0*x_1 - 4*x_0) - 1.0L/128.0L*x_2*(x_0*pow(x_1, 2) - 8*x_0*x_1 + 16*x_0);
           return __pp_r42____d0___result;
        }
        static inline double __pp_r43____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r43____d0___result;
           __pp_r43____d0___result = (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) + (1.0L/8.0L)*x_0*x_1 - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(x_0*x_1 - 4*x_0) - 1.0L/128.0L*x_2*(x_0*pow(x_1, 2) - 8*x_0*x_1 + 16*x_0);
           return __pp_r43____d0___result;
        }
        static inline double __pp_r44____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r44____d0___result;
           __pp_r44____d0___result = (1.0L/48.0L)*pow(x_0, 3) + (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) + (1.0L/8.0L)*x_0*x_1 - 5.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(x_0*x_1 - 4*x_0) - 1.0L/128.0L*x_2*(5*x_0*pow(x_1, 2) - 16*x_0*x_1 + 16*x_0);
           return __pp_r44____d0___result;
        }
        static inline double __pp_r45____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r45____d0___result;
           __pp_r45____d0___result = (1.0L/48.0L)*pow(x_0, 3) - 1.0L/128.0L*x_0*pow(x_1, 3) - 1.0L/128.0L*x_0*pow(x_1, 2)*x_2 + (1.0L/32.0L)*x_0*pow(x_1, 2) - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/12.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(3*x_0*x_1 - 4*x_0);
           return __pp_r45____d0___result;
        }
        static inline double __pp_r46____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r46____d0___result;
           __pp_r46____d0___result = (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 + 2) - 1.0L/8.0L*x_1*(x_0 + 2) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 2) - 1.0L/128.0L*pow(x_2, 2)*(-4*x_0 + x_1*(x_0 + 2) - 8) + (1.0L/128.0L)*x_2*(16*x_0 + pow(x_1, 2)*(x_0 + 2) - 8*x_1*(x_0 + 2) + 32) + 1.0L/3.0L;
           return __pp_r46____d0___result;
        }
        static inline double __pp_r47____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r47____d0___result;
           __pp_r47____d0___result = (1.0L/384.0L)*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/8.0L*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 2) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) - 4) + (1.0L/64.0L)*x_1*(3*pow(x_0, 2) + 4*x_0 - 4) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + x_1*(x_0 - 4) + 4) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 8*x_0 + pow(x_1, 2)*(x_0 + 2) - 4*x_1*(x_0 + 2) + 8) + 1.0L/24.0L;
           return __pp_r47____d0___result;
        }
        static inline double __pp_r48____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r48____d0___result;
           __pp_r48____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r48____d0___result;
        }
        static inline double __pp_r49____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r49____d0___result;
           __pp_r49____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/8.0L*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 2*x_0 - 2) + (1.0L/192.0L)*pow(x_2, 3)*(x_0 - 1) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 2*x_1*(x_0 + 2) + 8) + (1.0L/64.0L)*x_2*(4*x_0 + pow(x_1, 2)*(x_0 - 1) - 4*x_1*(x_0 - 1) - 4) - 1.0L/24.0L;
           return __pp_r49____d0___result;
        }
        static inline double __pp_r50____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r50____d0___result;
           __pp_r50____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r50____d0___result;
        }
        static inline double __pp_r51____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r51____d0___result;
           __pp_r51____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/6.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 4*x_0) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16);
           return __pp_r51____d0___result;
        }
        static inline double __pp_r52____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r52____d0___result;
           __pp_r52____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/12.0L*x_0 - 1.0L/384.0L*pow(x_1, 3)*(3*x_0 - 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 - 16) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 6*x_0*x_1 + 8*x_0 + pow(x_1, 2)) - 1.0L/12.0L;
           return __pp_r52____d0___result;
        }
        static inline double __pp_r53____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r53____d0___result;
           __pp_r53____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/8.0L*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 2*x_0 - 2) - 1.0L/192.0L*pow(x_2, 3)*(x_0 - 1) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 2*x_1*(x_0 + 2) + 8) - 1.0L/64.0L*x_2*(4*x_0 + pow(x_1, 2)*(x_0 - 1) - 4*x_1*(x_0 - 1) - 4) - 1.0L/24.0L;
           return __pp_r53____d0___result;
        }
        static inline double __pp_r54____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r54____d0___result;
           __pp_r54____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/6.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 4*x_0) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16);
           return __pp_r54____d0___result;
        }
        static inline double __pp_r55____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r55____d0___result;
           __pp_r55____d0___result = -5.0L/768.0L*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/6.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(5*pow(x_0, 2) - 8*x_0) - 1.0L/16.0L*x_1*(pow(x_0, 2) - 2*x_0) + (1.0L/256.0L)*pow(x_2, 2)*(5*pow(x_0, 2) - 8*x_0 + 5*pow(x_1, 2) + 2*x_1*(x_0 - 8) + 16);
           return __pp_r55____d0___result;
        }
        static inline double __pp_r56____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r56____d0___result;
           __pp_r56____d0___result = (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) + (1.0L/8.0L)*x_0*x_1 - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(x_0*x_1 - 4*x_0) - 1.0L/128.0L*x_2*(x_0*pow(x_1, 2) - 8*x_0*x_1 + 16*x_0);
           return __pp_r56____d0___result;
        }
        static inline double __pp_r57____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r57____d0___result;
           __pp_r57____d0___result = (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) + (1.0L/8.0L)*x_0*x_1 - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(x_0*x_1 - 4*x_0) - 1.0L/128.0L*x_2*(x_0*pow(x_1, 2) - 8*x_0*x_1 + 16*x_0);
           return __pp_r57____d0___result;
        }
        static inline double __pp_r58____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r58____d0___result;
           __pp_r58____d0___result = (1.0L/384.0L)*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/8.0L*x_0 - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) + 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 4) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 2) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - x_1*(x_0 + 2) - 4) + (1.0L/128.0L)*x_2*(-6*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 - 4) + 4*x_1*(x_0 + 2) + 8) + 1.0L/24.0L;
           return __pp_r58____d0___result;
        }
        static inline double __pp_r59____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r59____d0___result;
           __pp_r59____d0___result = (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 + 2) - 1.0L/8.0L*x_1*(x_0 + 2) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 2) - 1.0L/128.0L*pow(x_2, 2)*(-4*x_0 + x_1*(x_0 + 2) - 8) + (1.0L/128.0L)*x_2*(16*x_0 + pow(x_1, 2)*(x_0 + 2) - 8*x_1*(x_0 + 2) + 32) + 1.0L/3.0L;
           return __pp_r59____d0___result;
        }
        static inline double __pp_r60____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r60____d0___result;
           __pp_r60____d0___result = (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 - 2) - 1.0L/8.0L*x_1*(x_0 - 2) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 2) - 1.0L/128.0L*pow(x_2, 2)*(-4*x_0 + x_1*(x_0 - 2) + 8) + (1.0L/128.0L)*x_2*(16*x_0 + pow(x_1, 2)*(x_0 - 2) - 8*x_1*(x_0 - 2) - 32) - 1.0L/3.0L;
           return __pp_r60____d0___result;
        }
        static inline double __pp_r61____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r61____d0___result;
           __pp_r61____d0___result = -1.0L/384.0L*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/8.0L*x_0 + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 4*x_0 + 4) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + x_1*(x_0 - 2) - 4) + (1.0L/128.0L)*x_2*(6*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 + 4) + 4*x_1*(x_0 - 2) - 8) - 1.0L/24.0L;
           return __pp_r61____d0___result;
        }
        static inline double __pp_r62____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r62____d0___result;
           __pp_r62____d0___result = (1.0L/48.0L)*pow(x_0, 3) + (5.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) + (1.0L/8.0L)*x_0*x_1 - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(5*x_0*x_1 - 4*x_0) - 1.0L/128.0L*x_2*(x_0*pow(x_1, 2) - 16*x_0*x_1 + 16*x_0);
           return __pp_r62____d0___result;
        }
        static inline double __pp_r63____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r63____d0___result;
           __pp_r63____d0___result = (1.0L/48.0L)*pow(x_0, 3) + (1.0L/384.0L)*x_0*pow(x_1, 3) + (3.0L/128.0L)*x_0*pow(x_1, 2)*x_2 + (1.0L/32.0L)*x_0*pow(x_1, 2) + (1.0L/128.0L)*x_0*pow(x_2, 3) - 1.0L/12.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(x_0*x_1 + 4*x_0);
           return __pp_r63____d0___result;
        }
        static inline double __pp_r64____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r64____d0___result;
           __pp_r64____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 4*x_1 + 16) - 1.0L/128.0L*x_2*(-2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 - 4) - 4*x_1*(x_0 - 4) - 32) - 1.0L/3.0L;
           return __pp_r64____d0___result;
        }
        static inline double __pp_r65____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r65____d0___result;
           __pp_r65____d0___result = (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 - 2) - 1.0L/8.0L*x_1*(x_0 - 2) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 2) - 1.0L/128.0L*pow(x_2, 2)*(-4*x_0 + x_1*(x_0 - 2) + 8) - 1.0L/128.0L*x_2*(16*x_0 + pow(x_1, 2)*(x_0 - 2) - 8*x_1*(x_0 - 2) - 32) - 1.0L/3.0L;
           return __pp_r65____d0___result;
        }
        static inline double __pp_r66____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r66____d0___result;
           __pp_r66____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2)) + (1.0L/128.0L)*x_2*(-4*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 - 4));
           return __pp_r66____d0___result;
        }
        static inline double __pp_r67____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r67____d0___result;
           __pp_r67____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/8.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3)*(x_0 - 1) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8) + (1.0L/16.0L)*x_1*(x_0 - 1) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 4*x_1*(x_0 - 1) - 8) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 + 2) + 8*x_1*(x_0 - 1) - 8) - 1.0L/24.0L;
           return __pp_r67____d0___result;
        }
        static inline double __pp_r68____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r68____d0___result;
           __pp_r68____d0___result = (1.0L/48.0L)*pow(x_0, 3) + (1.0L/384.0L)*x_0*pow(x_1, 3) - 3.0L/128.0L*x_0*pow(x_1, 2)*x_2 + (1.0L/32.0L)*x_0*pow(x_1, 2) - 1.0L/128.0L*x_0*pow(x_2, 3) - 1.0L/12.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(x_0*x_1 + 4*x_0);
           return __pp_r68____d0___result;
        }
        static inline double __pp_r69____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r69____d0___result;
           __pp_r69____d0___result = -1.0L/384.0L*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/8.0L*x_0 + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + x_1*(x_0 - 2) - 4) - 1.0L/128.0L*x_2*(6*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 + 4) + 4*x_1*(x_0 - 2) - 8) - 1.0L/24.0L;
           return __pp_r69____d0___result;
        }
        static inline double __pp_r70____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r70____d0___result;
           __pp_r70____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2)) + (1.0L/128.0L)*x_2*(-4*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 - 4));
           return __pp_r70____d0___result;
        }
        static inline double __pp_r71____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r71____d0___result;
           __pp_r71____d0___result = (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) + (1.0L/8.0L)*x_0*x_1 + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(x_0*x_1 - 4*x_0) + (1.0L/128.0L)*x_2*(x_0*pow(x_1, 2) - 8*x_0*x_1 + 16*x_0);
           return __pp_r71____d0___result;
        }
        static inline double __pp_r72____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r72____d0___result;
           __pp_r72____d0___result = (1.0L/384.0L)*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/8.0L*x_0 - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) + 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 2) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - x_1*(x_0 + 2) - 4) - 1.0L/128.0L*x_2*(-6*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 - 4) + 4*x_1*(x_0 + 2) + 8) + 1.0L/24.0L;
           return __pp_r72____d0___result;
        }
        static inline double __pp_r73____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r73____d0___result;
           __pp_r73____d0___result = (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) + (1.0L/8.0L)*x_0*x_1 + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(x_0*x_1 - 4*x_0) + (1.0L/128.0L)*x_2*(x_0*pow(x_1, 2) - 8*x_0*x_1 + 16*x_0);
           return __pp_r73____d0___result;
        }
        static inline double __pp_r74____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r74____d0___result;
           __pp_r74____d0___result = -1.0L/384.0L*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/8.0L*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 2) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4) - 1.0L/64.0L*x_1*(3*pow(x_0, 2) - 4*x_0 - 4) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - x_1*(x_0 + 4) + 4) + (1.0L/128.0L)*x_2*(-2*pow(x_0, 2) + 8*x_0 + pow(x_1, 2)*(x_0 - 2) - 4*x_1*(x_0 - 2) - 8) - 1.0L/24.0L;
           return __pp_r74____d0___result;
        }
        static inline double __pp_r75____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r75____d0___result;
           __pp_r75____d0___result = (1.0L/48.0L)*pow(x_0, 3) - 1.0L/128.0L*x_0*pow(x_1, 3) + (1.0L/128.0L)*x_0*pow(x_1, 2)*x_2 + (1.0L/32.0L)*x_0*pow(x_1, 2) + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/12.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(3*x_0*x_1 - 4*x_0);
           return __pp_r75____d0___result;
        }
        static inline double __pp_r76____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r76____d0___result;
           __pp_r76____d0___result = (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 - 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 - 2) - 1.0L/8.0L*x_1*(x_0 - 2) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 2) - 1.0L/128.0L*pow(x_2, 2)*(-4*x_0 + x_1*(x_0 - 2) + 8) - 1.0L/128.0L*x_2*(16*x_0 + pow(x_1, 2)*(x_0 - 2) - 8*x_1*(x_0 - 2) - 32) - 1.0L/3.0L;
           return __pp_r76____d0___result;
        }
        static inline double __pp_r77____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r77____d0___result;
           __pp_r77____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 4*x_1 + 16) - 1.0L/128.0L*x_2*(-2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 - 4) + 4*x_1*(x_0 - 4) - 32) - 1.0L/3.0L;
           return __pp_r77____d0___result;
        }
        static inline double __pp_r78____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r78____d0___result;
           __pp_r78____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/8.0L*x_0 - 1.0L/192.0L*pow(x_1, 3)*(x_0 - 1) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8) - 1.0L/16.0L*x_1*(x_0 - 1) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 4*x_1*(x_0 - 1) - 8) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 + 2) - 8*x_1*(x_0 - 1) - 8) - 1.0L/24.0L;
           return __pp_r78____d0___result;
        }
        static inline double __pp_r79____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r79____d0___result;
           __pp_r79____d0___result = -5.0L/768.0L*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(5*pow(x_0, 2) - 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(5*pow(x_0, 2) - 8*x_0 + 5*pow(x_1, 2)) + (1.0L/128.0L)*x_2*(-8*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 - 8));
           return __pp_r79____d0___result;
        }
        static inline double __pp_r80____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r80____d0___result;
           __pp_r80____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/12.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0) - 1.0L/384.0L*pow(x_2, 3)*(3*x_0 - 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 16) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) + 3*x_0*pow(x_1, 2) - 16) - 1.0L/12.0L;
           return __pp_r80____d0___result;
        }
        static inline double __pp_r81____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r81____d0___result;
           __pp_r81____d0___result = (1.0L/48.0L)*pow(x_0, 3) + (5.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) + (1.0L/8.0L)*x_0*x_1 + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(5*x_0*x_1 - 4*x_0) + (1.0L/128.0L)*x_2*(x_0*pow(x_1, 2) - 16*x_0*x_1 + 16*x_0);
           return __pp_r81____d0___result;
        }
        static inline double __pp_r82____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r82____d0___result;
           __pp_r82____d0___result = (5.0L/768.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/6.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(5*pow(x_0, 2) + 8*x_0) + (1.0L/16.0L)*x_1*(pow(x_0, 2) + 2*x_0) - 1.0L/256.0L*pow(x_2, 2)*(5*pow(x_0, 2) + 8*x_0 + 5*pow(x_1, 2) - 2*x_1*(x_0 + 8) + 16);
           return __pp_r82____d0___result;
        }
        static inline double __pp_r83____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r83____d0___result;
           __pp_r83____d0___result = (1.0L/48.0L)*pow(x_0, 3) + (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) + (1.0L/8.0L)*x_0*x_1 + (5.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(x_0*x_1 - 4*x_0) + (1.0L/128.0L)*x_2*(5*x_0*pow(x_1, 2) - 16*x_0*x_1 + 16*x_0);
           return __pp_r83____d0___result;
        }
        static inline double __pp_r84____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r84____d0___result;
           __pp_r84____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/8.0L*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8) + (1.0L/32.0L)*x_1*(pow(x_0, 2) + 2*x_0 - 2) + (1.0L/192.0L)*pow(x_2, 3)*(x_0 + 1) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 2*x_1*(x_0 - 2) + 8) + (1.0L/64.0L)*x_2*(4*x_0 + pow(x_1, 2)*(x_0 + 1) - 4*x_1*(x_0 + 1) + 4) + 1.0L/24.0L;
           return __pp_r84____d0___result;
        }
        static inline double __pp_r85____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r85____d0___result;
           __pp_r85____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r85____d0___result;
        }
        static inline double __pp_r86____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r86____d0___result;
           __pp_r86____d0___result = (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) + (1.0L/8.0L)*x_0*x_1 + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(x_0*x_1 - 4*x_0) + (1.0L/128.0L)*x_2*(x_0*pow(x_1, 2) - 8*x_0*x_1 + 16*x_0);
           return __pp_r86____d0___result;
        }
        static inline double __pp_r87____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r87____d0___result;
           __pp_r87____d0___result = (1.0L/384.0L)*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/8.0L*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 2) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) - 4) + (1.0L/64.0L)*x_1*(3*pow(x_0, 2) + 4*x_0 - 4) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + x_1*(x_0 - 4) + 4) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 8*x_0 + pow(x_1, 2)*(x_0 + 2) - 4*x_1*(x_0 + 2) + 8) + 1.0L/24.0L;
           return __pp_r87____d0___result;
        }
        static inline double __pp_r88____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r88____d0___result;
           __pp_r88____d0___result = (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 + 2) - 1.0L/8.0L*x_1*(x_0 + 2) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 2) - 1.0L/128.0L*pow(x_2, 2)*(-4*x_0 + x_1*(x_0 + 2) - 8) - 1.0L/128.0L*x_2*(16*x_0 + pow(x_1, 2)*(x_0 + 2) - 8*x_1*(x_0 + 2) + 32) + 1.0L/3.0L;
           return __pp_r88____d0___result;
        }
        static inline double __pp_r89____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r89____d0___result;
           __pp_r89____d0___result = (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 + 2) - 1.0L/8.0L*x_1*(x_0 + 2) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 2) - 1.0L/128.0L*pow(x_2, 2)*(-4*x_0 + x_1*(x_0 + 2) - 8) - 1.0L/128.0L*x_2*(16*x_0 + pow(x_1, 2)*(x_0 + 2) - 8*x_1*(x_0 + 2) + 32) + 1.0L/3.0L;
           return __pp_r89____d0___result;
        }
        static inline double __pp_r90____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r90____d0___result;
           __pp_r90____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/6.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0) + (1.0L/32.0L)*x_1*(pow(x_0, 2) + 4*x_0) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16);
           return __pp_r90____d0___result;
        }
        static inline double __pp_r91____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r91____d0___result;
           __pp_r91____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/6.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0) + (1.0L/32.0L)*x_1*(pow(x_0, 2) + 4*x_0) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16);
           return __pp_r91____d0___result;
        }
        static inline double __pp_r92____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r92____d0___result;
           __pp_r92____d0___result = (1.0L/384.0L)*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) + (1.0L/8.0L)*x_0*x_1 + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(x_0*x_1 - 4*x_0) + (1.0L/128.0L)*x_2*(x_0*pow(x_1, 2) - 8*x_0*x_1 + 16*x_0);
           return __pp_r92____d0___result;
        }
        static inline double __pp_r93____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r93____d0___result;
           __pp_r93____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 - 1.0L/384.0L*pow(x_1, 3)*(3*x_0 + 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 - 16) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 6*x_0*x_1 - 8*x_0 + pow(x_1, 2)) + 1.0L/12.0L;
           return __pp_r93____d0___result;
        }
        static inline double __pp_r94____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r94____d0___result;
           __pp_r94____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r94____d0___result;
        }
        static inline double __pp_r95____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r95____d0___result;
           __pp_r95____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/8.0L*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8) + (1.0L/32.0L)*x_1*(pow(x_0, 2) + 2*x_0 - 2) - 1.0L/192.0L*pow(x_2, 3)*(x_0 + 1) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 2*x_1*(x_0 - 2) + 8) - 1.0L/64.0L*x_2*(4*x_0 + pow(x_1, 2)*(x_0 + 1) - 4*x_1*(x_0 + 1) + 4) + 1.0L/24.0L;
           return __pp_r95____d0___result;
        }
        static inline double __pp_r96____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r96____d0___result;
           __pp_r96____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/8.0L*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 2*x_0 - 2) + (1.0L/192.0L)*pow(x_2, 3)*(x_0 - 1) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 2*x_1*(x_0 + 2) + 8) + (1.0L/64.0L)*x_2*(4*x_0 + pow(x_1, 2)*(x_0 - 1) + 4*x_1*(x_0 - 1) - 4) - 1.0L/24.0L;
           return __pp_r96____d0___result;
        }
        static inline double __pp_r97____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r97____d0___result;
           __pp_r97____d0___result = -1.0L/384.0L*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/8.0L*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 2) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4) + (1.0L/64.0L)*x_1*(3*pow(x_0, 2) - 4*x_0 - 4) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + x_1*(x_0 + 4) + 4) + (1.0L/128.0L)*x_2*(-2*pow(x_0, 2) + 8*x_0 + pow(x_1, 2)*(x_0 - 2) + 4*x_1*(x_0 - 2) - 8) - 1.0L/24.0L;
           return __pp_r97____d0___result;
        }
        static inline double __pp_r98____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r98____d0___result;
           __pp_r98____d0___result = (1.0L/48.0L)*pow(x_0, 3) - 1.0L/384.0L*x_0*pow(x_1, 3) - 3.0L/128.0L*x_0*pow(x_1, 2)*x_2 + (1.0L/32.0L)*x_0*pow(x_1, 2) - 1.0L/128.0L*x_0*pow(x_2, 3) - 1.0L/12.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(x_0*x_1 - 4*x_0);
           return __pp_r98____d0___result;
        }
        static inline double __pp_r99____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r99____d0___result;
           __pp_r99____d0___result = (1.0L/48.0L)*pow(x_0, 3) + (1.0L/128.0L)*x_0*pow(x_1, 3) + (1.0L/128.0L)*x_0*pow(x_1, 2)*x_2 + (1.0L/32.0L)*x_0*pow(x_1, 2) + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/12.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(3*x_0*x_1 + 4*x_0);
           return __pp_r99____d0___result;
        }
        static inline double __pp_r100____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r100____d0___result;
           __pp_r100____d0___result = -1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) - 1.0L/8.0L*x_0*x_1 + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(x_0*x_1 + 4*x_0) + (1.0L/128.0L)*x_2*(x_0*pow(x_1, 2) + 8*x_0*x_1 + 16*x_0);
           return __pp_r100____d0___result;
        }
        static inline double __pp_r101____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r101____d0___result;
           __pp_r101____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/8.0L*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8) - 1.0L/32.0L*x_1*(pow(x_0, 2) + 2*x_0 - 2) + (1.0L/192.0L)*pow(x_2, 3)*(x_0 + 1) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 2*x_1*(x_0 - 2) + 8) + (1.0L/64.0L)*x_2*(4*x_0 + pow(x_1, 2)*(x_0 + 1) + 4*x_1*(x_0 + 1) + 4) + 1.0L/24.0L;
           return __pp_r101____d0___result;
        }
        static inline double __pp_r102____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r102____d0___result;
           __pp_r102____d0___result = (1.0L/384.0L)*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/8.0L*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 2) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) - 4) - 1.0L/64.0L*x_1*(3*pow(x_0, 2) + 4*x_0 - 4) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - x_1*(x_0 - 4) + 4) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 8*x_0 + pow(x_1, 2)*(x_0 + 2) + 4*x_1*(x_0 + 2) + 8) + 1.0L/24.0L;
           return __pp_r102____d0___result;
        }
        static inline double __pp_r103____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r103____d0___result;
           __pp_r103____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r103____d0___result;
        }
        static inline double __pp_r104____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r104____d0___result;
           __pp_r104____d0___result = (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 - 2) + (1.0L/8.0L)*x_1*(x_0 - 2) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(4*x_0 + x_1*(x_0 - 2) - 8) - 1.0L/128.0L*x_2*(16*x_0 + pow(x_1, 2)*(x_0 - 2) + 8*x_1*(x_0 - 2) - 32) - 1.0L/3.0L;
           return __pp_r104____d0___result;
        }
        static inline double __pp_r105____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r105____d0___result;
           __pp_r105____d0___result = (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 - 2) + (1.0L/8.0L)*x_1*(x_0 - 2) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(4*x_0 + x_1*(x_0 - 2) - 8) - 1.0L/128.0L*x_2*(16*x_0 + pow(x_1, 2)*(x_0 - 2) + 8*x_1*(x_0 - 2) - 32) - 1.0L/3.0L;
           return __pp_r105____d0___result;
        }
        static inline double __pp_r106____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r106____d0___result;
           __pp_r106____d0___result = -1.0L/384.0L*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/8.0L*x_0 + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 1.0L/384.0L*pow(x_2, 3)*(x_0 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - x_1*(x_0 - 2) - 4) - 1.0L/128.0L*x_2*(6*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 + 4) - 4*x_1*(x_0 - 2) - 8) - 1.0L/24.0L;
           return __pp_r106____d0___result;
        }
        static inline double __pp_r107____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r107____d0___result;
           __pp_r107____d0___result = (1.0L/48.0L)*pow(x_0, 3) - 1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) - 1.0L/8.0L*x_0*x_1 - 5.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(x_0*x_1 + 4*x_0) - 1.0L/128.0L*x_2*(5*x_0*pow(x_1, 2) + 16*x_0*x_1 + 16*x_0);
           return __pp_r107____d0___result;
        }
        static inline double __pp_r108____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r108____d0___result;
           __pp_r108____d0___result = (1.0L/48.0L)*pow(x_0, 3) - 5.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) - 1.0L/8.0L*x_0*x_1 - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(5*x_0*x_1 + 4*x_0) - 1.0L/128.0L*x_2*(x_0*pow(x_1, 2) + 16*x_0*x_1 + 16*x_0);
           return __pp_r108____d0___result;
        }
        static inline double __pp_r109____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r109____d0___result;
           __pp_r109____d0___result = (5.0L/768.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/6.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(5*pow(x_0, 2) + 8*x_0) - 1.0L/16.0L*x_1*(pow(x_0, 2) + 2*x_0) - 1.0L/256.0L*pow(x_2, 2)*(5*pow(x_0, 2) + 8*x_0 + 5*pow(x_1, 2) + 2*x_1*(x_0 + 8) + 16);
           return __pp_r109____d0___result;
        }
        static inline double __pp_r110____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r110____d0___result;
           __pp_r110____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(3*x_0 + 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 - 16) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 6*x_0*x_1 - 8*x_0 + pow(x_1, 2)) + 1.0L/12.0L;
           return __pp_r110____d0___result;
        }
        static inline double __pp_r111____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r111____d0___result;
           __pp_r111____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/12.0L*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(3*x_0 - 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 - 16) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 6*x_0*x_1 + 8*x_0 + pow(x_1, 2)) - 1.0L/12.0L;
           return __pp_r111____d0___result;
        }
        static inline double __pp_r112____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r112____d0___result;
           __pp_r112____d0___result = -5.0L/768.0L*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/6.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(5*pow(x_0, 2) - 8*x_0) + (1.0L/16.0L)*x_1*(pow(x_0, 2) - 2*x_0) + (1.0L/256.0L)*pow(x_2, 2)*(5*pow(x_0, 2) - 8*x_0 + 5*pow(x_1, 2) - 2*x_1*(x_0 - 8) + 16);
           return __pp_r112____d0___result;
        }
        static inline double __pp_r113____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r113____d0___result;
           __pp_r113____d0___result = (1.0L/48.0L)*pow(x_0, 3) - 5.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) - 1.0L/8.0L*x_0*x_1 + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(5*x_0*x_1 + 4*x_0) + (1.0L/128.0L)*x_2*(x_0*pow(x_1, 2) + 16*x_0*x_1 + 16*x_0);
           return __pp_r113____d0___result;
        }
        static inline double __pp_r114____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r114____d0___result;
           __pp_r114____d0___result = (1.0L/48.0L)*pow(x_0, 3) - 1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) - 1.0L/8.0L*x_0*x_1 + (5.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(x_0*x_1 + 4*x_0) + (1.0L/128.0L)*x_2*(5*x_0*pow(x_1, 2) + 16*x_0*x_1 + 16*x_0);
           return __pp_r114____d0___result;
        }
        static inline double __pp_r115____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r115____d0___result;
           __pp_r115____d0___result = -1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) - 1.0L/8.0L*x_0*x_1 - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(x_0*x_1 + 4*x_0) - 1.0L/128.0L*x_2*(x_0*pow(x_1, 2) + 8*x_0*x_1 + 16*x_0);
           return __pp_r115____d0___result;
        }
        static inline double __pp_r116____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r116____d0___result;
           __pp_r116____d0___result = (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 - 2) + (1.0L/8.0L)*x_1*(x_0 - 2) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(4*x_0 + x_1*(x_0 - 2) - 8) + (1.0L/128.0L)*x_2*(16*x_0 + pow(x_1, 2)*(x_0 - 2) + 8*x_1*(x_0 - 2) - 32) - 1.0L/3.0L;
           return __pp_r116____d0___result;
        }
        static inline double __pp_r117____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r117____d0___result;
           __pp_r117____d0___result = -1.0L/384.0L*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/8.0L*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 2) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4) + (1.0L/64.0L)*x_1*(3*pow(x_0, 2) - 4*x_0 - 4) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + x_1*(x_0 + 4) + 4) - 1.0L/128.0L*x_2*(-2*pow(x_0, 2) + 8*x_0 + pow(x_1, 2)*(x_0 - 2) + 4*x_1*(x_0 - 2) - 8) - 1.0L/24.0L;
           return __pp_r117____d0___result;
        }
        static inline double __pp_r118____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r118____d0___result;
           __pp_r118____d0___result = -1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) - 1.0L/8.0L*x_0*x_1 - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(x_0*x_1 + 4*x_0) - 1.0L/128.0L*x_2*(x_0*pow(x_1, 2) + 8*x_0*x_1 + 16*x_0);
           return __pp_r118____d0___result;
        }
        static inline double __pp_r119____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r119____d0___result;
           __pp_r119____d0___result = (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 + 2) + (1.0L/8.0L)*x_1*(x_0 + 2) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 2) + (1.0L/128.0L)*pow(x_2, 2)*(4*x_0 + x_1*(x_0 + 2) + 8) + (1.0L/128.0L)*x_2*(16*x_0 + pow(x_1, 2)*(x_0 + 2) + 8*x_1*(x_0 + 2) + 32) + 1.0L/3.0L;
           return __pp_r119____d0___result;
        }
        static inline double __pp_r120____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r120____d0___result;
           __pp_r120____d0___result = (1.0L/48.0L)*pow(x_0, 3) + (1.0L/128.0L)*x_0*pow(x_1, 3) - 1.0L/128.0L*x_0*pow(x_1, 2)*x_2 + (1.0L/32.0L)*x_0*pow(x_1, 2) - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/12.0L*x_0 + (1.0L/128.0L)*pow(x_2, 2)*(3*x_0*x_1 + 4*x_0);
           return __pp_r120____d0___result;
        }
        static inline double __pp_r121____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r121____d0___result;
           __pp_r121____d0___result = (1.0L/384.0L)*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/8.0L*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 2) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) - 4) - 1.0L/64.0L*x_1*(3*pow(x_0, 2) + 4*x_0 - 4) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - x_1*(x_0 - 4) + 4) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 8*x_0 + pow(x_1, 2)*(x_0 + 2) + 4*x_1*(x_0 + 2) + 8) + 1.0L/24.0L;
           return __pp_r121____d0___result;
        }
        static inline double __pp_r122____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r122____d0___result;
           __pp_r122____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/6.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0) - 1.0L/32.0L*x_1*(pow(x_0, 2) + 4*x_0) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16);
           return __pp_r122____d0___result;
        }
        static inline double __pp_r123____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r123____d0___result;
           __pp_r123____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/6.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0) - 1.0L/32.0L*x_1*(pow(x_0, 2) + 4*x_0) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16);
           return __pp_r123____d0___result;
        }
        static inline double __pp_r124____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r124____d0___result;
           __pp_r124____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r124____d0___result;
        }
        static inline double __pp_r125____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r125____d0___result;
           __pp_r125____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/8.0L*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8) - 1.0L/32.0L*x_1*(pow(x_0, 2) + 2*x_0 - 2) - 1.0L/192.0L*pow(x_2, 3)*(x_0 + 1) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 2*x_1*(x_0 - 2) + 8) - 1.0L/64.0L*x_2*(4*x_0 + pow(x_1, 2)*(x_0 + 1) + 4*x_1*(x_0 + 1) + 4) + 1.0L/24.0L;
           return __pp_r125____d0___result;
        }
        static inline double __pp_r126____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r126____d0___result;
           __pp_r126____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r126____d0___result;
        }
        static inline double __pp_r127____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r127____d0___result;
           __pp_r127____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/6.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 4*x_0) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16);
           return __pp_r127____d0___result;
        }
        static inline double __pp_r128____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r128____d0___result;
           __pp_r128____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/8.0L*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 2*x_0 - 2) - 1.0L/192.0L*pow(x_2, 3)*(x_0 - 1) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 2*x_1*(x_0 + 2) + 8) - 1.0L/64.0L*x_2*(4*x_0 + pow(x_1, 2)*(x_0 - 1) + 4*x_1*(x_0 - 1) - 4) - 1.0L/24.0L;
           return __pp_r128____d0___result;
        }
        static inline double __pp_r129____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r129____d0___result;
           __pp_r129____d0___result = -1.0L/768.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/6.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 4*x_0) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16);
           return __pp_r129____d0___result;
        }
        static inline double __pp_r130____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r130____d0___result;
           __pp_r130____d0___result = -1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) - 1.0L/8.0L*x_0*x_1 + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(x_0*x_1 + 4*x_0) + (1.0L/128.0L)*x_2*(x_0*pow(x_1, 2) + 8*x_0*x_1 + 16*x_0);
           return __pp_r130____d0___result;
        }
        static inline double __pp_r131____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r131____d0___result;
           __pp_r131____d0___result = -1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) - 1.0L/8.0L*x_0*x_1 - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(x_0*x_1 + 4*x_0) - 1.0L/128.0L*x_2*(x_0*pow(x_1, 2) + 8*x_0*x_1 + 16*x_0);
           return __pp_r131____d0___result;
        }
        static inline double __pp_r132____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r132____d0___result;
           __pp_r132____d0___result = -1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) - 1.0L/8.0L*x_0*x_1 - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(x_0*x_1 + 4*x_0) - 1.0L/128.0L*x_2*(x_0*pow(x_1, 2) + 8*x_0*x_1 + 16*x_0);
           return __pp_r132____d0___result;
        }
        static inline double __pp_r133____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r133____d0___result;
           __pp_r133____d0___result = (1.0L/384.0L)*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/8.0L*x_0 - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) + 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 4*x_0 + 4) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 2) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + x_1*(x_0 + 2) - 4) + (1.0L/128.0L)*x_2*(-6*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 - 4) - 4*x_1*(x_0 + 2) + 8) + 1.0L/24.0L;
           return __pp_r133____d0___result;
        }
        static inline double __pp_r134____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r134____d0___result;
           __pp_r134____d0___result = (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 + 2) + (1.0L/8.0L)*x_1*(x_0 + 2) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 2) + (1.0L/128.0L)*pow(x_2, 2)*(4*x_0 + x_1*(x_0 + 2) + 8) + (1.0L/128.0L)*x_2*(16*x_0 + pow(x_1, 2)*(x_0 + 2) + 8*x_1*(x_0 + 2) + 32) + 1.0L/3.0L;
           return __pp_r134____d0___result;
        }
        static inline double __pp_r135____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r135____d0___result;
           __pp_r135____d0___result = (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 - 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 - 2) + (1.0L/8.0L)*x_1*(x_0 - 2) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(4*x_0 + x_1*(x_0 - 2) - 8) + (1.0L/128.0L)*x_2*(16*x_0 + pow(x_1, 2)*(x_0 - 2) + 8*x_1*(x_0 - 2) - 32) - 1.0L/3.0L;
           return __pp_r135____d0___result;
        }
        static inline double __pp_r136____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r136____d0___result;
           __pp_r136____d0___result = -1.0L/384.0L*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/8.0L*x_0 + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 4) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - x_1*(x_0 - 2) - 4) + (1.0L/128.0L)*x_2*(6*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 + 4) - 4*x_1*(x_0 - 2) - 8) - 1.0L/24.0L;
           return __pp_r136____d0___result;
        }
        static inline double __pp_r137____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r137____d0___result;
           __pp_r137____d0___result = (1.0L/48.0L)*pow(x_0, 3) - 1.0L/384.0L*x_0*pow(x_1, 3) + (3.0L/128.0L)*x_0*pow(x_1, 2)*x_2 + (1.0L/32.0L)*x_0*pow(x_1, 2) + (1.0L/128.0L)*x_0*pow(x_2, 3) - 1.0L/12.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(x_0*x_1 - 4*x_0);
           return __pp_r137____d0___result;
        }
        static inline double __pp_r138____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r138____d0___result;
           __pp_r138____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0) + (1.0L/384.0L)*pow(x_2, 3)*(3*x_0 + 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 16) + (1.0L/128.0L)*x_2*(-4*pow(x_0, 2) + 3*x_0*pow(x_1, 2) + 16) + 1.0L/12.0L;
           return __pp_r138____d0___result;
        }
        static inline double __pp_r139____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r139____d0___result;
           __pp_r139____d0___result = -1.0L/256.0L*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(3*pow(x_0, 2) + 8*x_0) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 4) + (1.0L/256.0L)*pow(x_2, 2)*(3*pow(x_0, 2) + 8*x_0 + 3*pow(x_1, 2)) - 1.0L/128.0L*x_2*(-4*pow(x_0, 2) + x_0*pow(x_1, 2) - 16*x_0 - 16) + 1.0L/12.0L;
           return __pp_r139____d0___result;
        }
        static inline double __pp_r140____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r140____d0___result;
           __pp_r140____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 1.0L/192.0L*pow(x_2, 3)*(x_0 + 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 2*x_1*(x_0 + 2) - 8) - 1.0L/64.0L*x_2*(-pow(x_0, 2) - 4*x_0 + pow(x_1, 2)*(x_0 + 2) - 2*x_1*(x_0 + 2) - 4) + 5.0L/24.0L;
           return __pp_r140____d0___result;
        }
        static inline double __pp_r141____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r141____d0___result;
           __pp_r141____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3)*(x_0 + 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 4*x_1*(x_0 + 2) - 8) - 1.0L/128.0L*x_2*(-2*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 + 2) - 4*x_1*(x_0 + 2) - 8) + 5.0L/24.0L;
           return __pp_r141____d0___result;
        }
        static inline double __pp_r142____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r142____d0___result;
           __pp_r142____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 1.0L/192.0L*pow(x_2, 3)*(x_0 + 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 2*x_1*(x_0 + 2) - 8) - 1.0L/64.0L*x_2*(-pow(x_0, 2) - 4*x_0 + pow(x_1, 2)*(x_0 + 2) + 2*x_1*(x_0 + 2) - 4) + 5.0L/24.0L;
           return __pp_r142____d0___result;
        }
        static inline double __pp_r143____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r143____d0___result;
           __pp_r143____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3)*(x_0 + 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 4*x_1*(x_0 + 2) - 8) - 1.0L/128.0L*x_2*(-2*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 + 2) + 4*x_1*(x_0 + 2) - 8) + 5.0L/24.0L;
           return __pp_r143____d0___result;
        }
        static inline double __pp_r144____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r144____d0___result;
           __pp_r144____d0___result = (1.0L/768.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/128.0L*pow(x_1, 2)*x_2*(x_0 + 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + 1.0L/3.0L;
           return __pp_r144____d0___result;
        }
        static inline double __pp_r145____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r145____d0___result;
           __pp_r145____d0___result = (5.0L/768.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(5*pow(x_0, 2) + 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(5*pow(x_0, 2) + 8*x_0 + 5*pow(x_1, 2)) - 1.0L/128.0L*x_2*(8*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 + 8));
           return __pp_r145____d0___result;
        }
        static inline double __pp_r146____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r146____d0___result;
           __pp_r146____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) - 1.0L/6.0L*x_0 + (1.0L/128.0L)*pow(x_1, 2)*x_2*(5*x_0 + 8) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(5*x_0 + 8) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16);
           return __pp_r146____d0___result;
        }
        static inline double __pp_r147____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r147____d0___result;
           __pp_r147____d0___result = (5.0L/768.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(5*pow(x_0, 2) + 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(5*pow(x_0, 2) + 8*x_0 + 5*pow(x_1, 2)) + (1.0L/128.0L)*x_2*(8*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 + 8));
           return __pp_r147____d0___result;
        }
        static inline double __pp_r148____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r148____d0___result;
           __pp_r148____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) - 1.0L/6.0L*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(5*x_0 + 8) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(5*x_0 + 8) + 16);
           return __pp_r148____d0___result;
        }
        static inline double __pp_r149____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r149____d0___result;
           __pp_r149____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) - 1.0L/6.0L*x_0 - 1.0L/384.0L*pow(x_1, 3)*(5*x_0 + 8) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(5*x_0 + 8) + 16);
           return __pp_r149____d0___result;
        }
        static inline double __pp_r150____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r150____d0___result;
           __pp_r150____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) - 1.0L/6.0L*x_0 - 1.0L/128.0L*pow(x_1, 2)*x_2*(5*x_0 + 8) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(5*x_0 + 8) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16);
           return __pp_r150____d0___result;
        }
        static inline double __pp_r151____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r151____d0___result;
           __pp_r151____d0___result = -1.0L/256.0L*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 4) + (1.0L/256.0L)*pow(x_1, 2)*(3*pow(x_0, 2) + 8*x_0) - 1.0L/32.0L*x_1*(pow(x_0, 2) + 4*x_0 + 4) + (1.0L/256.0L)*pow(x_2, 2)*(3*pow(x_0, 2) + 2*x_0*x_1 + 8*x_0 + 3*pow(x_1, 2)) + 1.0L/12.0L;
           return __pp_r151____d0___result;
        }
        static inline double __pp_r152____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r152____d0___result;
           __pp_r152____d0___result = -1.0L/256.0L*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 4) + (1.0L/256.0L)*pow(x_1, 2)*(3*pow(x_0, 2) + 8*x_0) + (1.0L/32.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 4) + (1.0L/256.0L)*pow(x_2, 2)*(3*pow(x_0, 2) - 2*x_0*x_1 + 8*x_0 + 3*pow(x_1, 2)) + 1.0L/12.0L;
           return __pp_r152____d0___result;
        }
        static inline double __pp_r153____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r153____d0___result;
           __pp_r153____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/8.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3)*(x_0 + 1) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8) + (1.0L/16.0L)*x_1*(x_0 + 1) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 4*x_1*(x_0 + 1) - 8) + (1.0L/128.0L)*x_2*(-4*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 - 2) + 8*x_1*(x_0 + 1) + 8) + 1.0L/24.0L;
           return __pp_r153____d0___result;
        }
        static inline double __pp_r154____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r154____d0___result;
           __pp_r154____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 4*x_1 + 16) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 + 4) - 4*x_1*(x_0 + 4) + 32) + 1.0L/3.0L;
           return __pp_r154____d0___result;
        }
        static inline double __pp_r155____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r155____d0___result;
           __pp_r155____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r155____d0___result;
        }
        static inline double __pp_r156____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r156____d0___result;
           __pp_r156____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 4*x_1 + 16) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 + 4) - 4*x_1*(x_0 + 4) + 32) + 1.0L/3.0L;
           return __pp_r156____d0___result;
        }
        static inline double __pp_r157____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r157____d0___result;
           __pp_r157____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/8.0L*x_0 - 1.0L/192.0L*pow(x_1, 3)*(x_0 + 1) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8) - 1.0L/16.0L*x_1*(x_0 + 1) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 4*x_1*(x_0 + 1) - 8) + (1.0L/128.0L)*x_2*(-4*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 - 2) - 8*x_1*(x_0 + 1) + 8) + 1.0L/24.0L;
           return __pp_r157____d0___result;
        }
        static inline double __pp_r158____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r158____d0___result;
           __pp_r158____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 4*x_1 + 16) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 + 4) + 4*x_1*(x_0 + 4) + 32) + 1.0L/3.0L;
           return __pp_r158____d0___result;
        }
        static inline double __pp_r159____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r159____d0___result;
           __pp_r159____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r159____d0___result;
        }
        static inline double __pp_r160____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r160____d0___result;
           __pp_r160____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 4*x_1 + 16) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 + 4) + 4*x_1*(x_0 + 4) + 32) + 1.0L/3.0L;
           return __pp_r160____d0___result;
        }
        static inline double __pp_r161____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r161____d0___result;
           __pp_r161____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2)) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 + 4));
           return __pp_r161____d0___result;
        }
        static inline double __pp_r162____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r162____d0___result;
           __pp_r162____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2)) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 + 4));
           return __pp_r162____d0___result;
        }
        static inline double __pp_r163____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r163____d0___result;
           __pp_r163____d0___result = (1.0L/384.0L)*pow(x_0, 4) + (1.0L/96.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/8.0L*x_0 - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) + 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 2) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + x_1*(x_0 + 2) - 4) - 1.0L/128.0L*x_2*(-6*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 - 4) - 4*x_1*(x_0 + 2) + 8) + 1.0L/24.0L;
           return __pp_r163____d0___result;
        }
        static inline double __pp_r164____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r164____d0___result;
           __pp_r164____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2)) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 + 4));
           return __pp_r164____d0___result;
        }
        static inline double __pp_r165____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r165____d0___result;
           __pp_r165____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/8.0L*x_0 - 1.0L/192.0L*pow(x_1, 3)*(x_0 + 1) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8) - 1.0L/16.0L*x_1*(x_0 + 1) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 4*x_1*(x_0 + 1) - 8) - 1.0L/128.0L*x_2*(-4*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 - 2) - 8*x_1*(x_0 + 1) + 8) + 1.0L/24.0L;
           return __pp_r165____d0___result;
        }
        static inline double __pp_r166____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r166____d0___result;
           __pp_r166____d0___result = (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 + 2) + (1.0L/8.0L)*x_1*(x_0 + 2) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 2) + (1.0L/128.0L)*pow(x_2, 2)*(4*x_0 + x_1*(x_0 + 2) + 8) - 1.0L/128.0L*x_2*(16*x_0 + pow(x_1, 2)*(x_0 + 2) + 8*x_1*(x_0 + 2) + 32) + 1.0L/3.0L;
           return __pp_r166____d0___result;
        }
        static inline double __pp_r167____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r167____d0___result;
           __pp_r167____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 4*x_1 + 16) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 + 4) + 4*x_1*(x_0 + 4) + 32) + 1.0L/3.0L;
           return __pp_r167____d0___result;
        }
        static inline double __pp_r168____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r168____d0___result;
           __pp_r168____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 4*x_1 + 16) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 + 4) + 4*x_1*(x_0 + 4) + 32) + 1.0L/3.0L;
           return __pp_r168____d0___result;
        }
        static inline double __pp_r169____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r169____d0___result;
           __pp_r169____d0___result = -1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) - 1.0L/8.0L*x_0*x_1 + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(x_0*x_1 + 4*x_0) + (1.0L/128.0L)*x_2*(x_0*pow(x_1, 2) + 8*x_0*x_1 + 16*x_0);
           return __pp_r169____d0___result;
        }
        static inline double __pp_r170____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r170____d0___result;
           __pp_r170____d0___result = -1.0L/384.0L*x_0*pow(x_1, 3) - 1.0L/32.0L*x_0*pow(x_1, 2) - 1.0L/8.0L*x_0*x_1 + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/128.0L*pow(x_2, 2)*(x_0*x_1 + 4*x_0) + (1.0L/128.0L)*x_2*(x_0*pow(x_1, 2) + 8*x_0*x_1 + 16*x_0);
           return __pp_r170____d0___result;
        }
        static inline double __pp_r171____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r171____d0___result;
           __pp_r171____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/384.0L)*x_0*pow(x_2, 3) - 1.0L/6.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2)) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 + 4));
           return __pp_r171____d0___result;
        }
        static inline double __pp_r172____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r172____d0___result;
           __pp_r172____d0___result = -1.0L/256.0L*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) - 1.0L/8.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(3*pow(x_0, 2) + 8*x_0) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 4) + (1.0L/256.0L)*pow(x_2, 2)*(3*pow(x_0, 2) + 8*x_0 + 3*pow(x_1, 2)) + (1.0L/128.0L)*x_2*(-4*pow(x_0, 2) + x_0*pow(x_1, 2) - 16*x_0 - 16) + 1.0L/12.0L;
           return __pp_r172____d0___result;
        }
        static inline double __pp_r173____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r173____d0___result;
           __pp_r173____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3)*(x_0 + 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 4) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 4*x_1*(x_0 + 2) - 8) + (1.0L/128.0L)*x_2*(-2*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 + 2) + 4*x_1*(x_0 + 2) - 8) + 5.0L/24.0L;
           return __pp_r173____d0___result;
        }
        static inline double __pp_r174____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r174____d0___result;
           __pp_r174____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/8.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3)*(x_0 + 1) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8) + (1.0L/16.0L)*x_1*(x_0 + 1) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 4*x_1*(x_0 + 1) - 8) - 1.0L/128.0L*x_2*(-4*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 - 2) + 8*x_1*(x_0 + 1) + 8) + 1.0L/24.0L;
           return __pp_r174____d0___result;
        }
        static inline double __pp_r175____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r175____d0___result;
           __pp_r175____d0___result = (1.0L/768.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0) - 1.0L/384.0L*pow(x_2, 3)*(3*x_0 + 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 16) - 1.0L/128.0L*x_2*(-4*pow(x_0, 2) + 3*x_0*pow(x_1, 2) + 16) + 1.0L/12.0L;
           return __pp_r175____d0___result;
        }
        static inline double __pp_r176____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r176____d0___result;
           __pp_r176____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r176____d0___result;
        }
        static inline double __pp_r177____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r177____d0___result;
           __pp_r177____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r177____d0___result;
        }
        static inline double __pp_r178____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r178____d0___result;
           __pp_r178____d0___result = (1.0L/6.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 2) + (1.0L/32.0L)*pow(x_1, 2)*(x_0 + 2) + (1.0L/8.0L)*x_1*(x_0 + 2) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 2) + (1.0L/128.0L)*pow(x_2, 2)*(4*x_0 + x_1*(x_0 + 2) + 8) - 1.0L/128.0L*x_2*(16*x_0 + pow(x_1, 2)*(x_0 + 2) + 8*x_1*(x_0 + 2) + 32) + 1.0L/3.0L;
           return __pp_r178____d0___result;
        }
        static inline double __pp_r179____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r179____d0___result;
           __pp_r179____d0___result = (1.0L/768.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r179____d0___result;
        }
        static inline double __pp_r180____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r180____d0___result;
           __pp_r180____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 4) + (1.0L/192.0L)*pow(x_2, 3)*(x_0 + 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 2*x_1*(x_0 + 2) - 8) + (1.0L/64.0L)*x_2*(-pow(x_0, 2) - 4*x_0 + pow(x_1, 2)*(x_0 + 2) + 2*x_1*(x_0 + 2) - 4) + 5.0L/24.0L;
           return __pp_r180____d0___result;
        }
        static inline double __pp_r181____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r181____d0___result;
           __pp_r181____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 4*x_1 + 16) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 + 4) - 4*x_1*(x_0 + 4) + 32) + 1.0L/3.0L;
           return __pp_r181____d0___result;
        }
        static inline double __pp_r182____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r182____d0___result;
           __pp_r182____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3)*(x_0 + 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 4*x_0 + 4) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 4*x_1*(x_0 + 2) - 8) + (1.0L/128.0L)*x_2*(-2*pow(x_0, 2) - 8*x_0 + pow(x_1, 2)*(x_0 + 2) - 4*x_1*(x_0 + 2) - 8) + 5.0L/24.0L;
           return __pp_r182____d0___result;
        }
        static inline double __pp_r183____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r183____d0___result;
           __pp_r183____d0___result = (1.0L/768.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/128.0L)*pow(x_1, 2)*x_2*(x_0 + 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + 1.0L/3.0L;
           return __pp_r183____d0___result;
        }
        static inline double __pp_r184____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r184____d0___result;
           __pp_r184____d0___result = (1.0L/768.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/128.0L)*pow(x_1, 2)*x_2*(x_0 + 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_0 + 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + 1.0L/3.0L;
           return __pp_r184____d0___result;
        }
        static inline double __pp_r185____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r185____d0___result;
           __pp_r185____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 4*x_1 + 16) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 16*x_0 + pow(x_1, 2)*(x_0 + 4) - 4*x_1*(x_0 + 4) + 32) + 1.0L/3.0L;
           return __pp_r185____d0___result;
        }
        static inline double __pp_r186____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r186____d0___result;
           __pp_r186____d0___result = (1.0L/768.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r186____d0___result;
        }
        static inline double __pp_r187____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r187____d0___result;
           __pp_r187____d0___result = (1.0L/768.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r187____d0___result;
        }
        static inline double __pp_r188____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r188____d0___result;
           __pp_r188____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/6.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r188____d0___result;
        }
        static inline double __pp_r189____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r189____d0___result;
           __pp_r189____d0___result = -1.0L/768.0L*pow(x_0, 4) - 1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 3)*(x_0 + 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 4*x_0 + 4) + (1.0L/192.0L)*pow(x_2, 3)*(x_0 + 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 2*x_1*(x_0 + 2) - 8) + (1.0L/64.0L)*x_2*(-pow(x_0, 2) - 4*x_0 + pow(x_1, 2)*(x_0 + 2) - 2*x_1*(x_0 + 2) - 4) + 5.0L/24.0L;
           return __pp_r189____d0___result;
        }
        static inline double __pp_r190____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r190____d0___result;
           __pp_r190____d0___result = (1.0L/768.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/384.0L*pow(x_1, 3)*(x_0 + 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r190____d0___result;
        }
        static inline double __pp_r191____d0__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r191____d0___result;
           __pp_r191____d0___result = (1.0L/768.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) + (1.0L/8.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/128.0L*pow(x_1, 2)*x_2*(x_0 + 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_0 + 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + 1.0L/3.0L;
           return __pp_r191____d0___result;
        }
        static inline double __pp_r192____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r192____d1___result;
           __pp_r192____d1___result = (1.0L/384.0L)*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(x_0 - 4) + (1.0L/128.0L)*x_1*x_2*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64);
           return __pp_r192____d1___result;
        }
        static inline double __pp_r193____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r193____d1___result;
           __pp_r193____d1___result = (1.0L/384.0L)*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(x_0 - 4) + (1.0L/128.0L)*x_1*x_2*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64);
           return __pp_r193____d1___result;
        }
        static inline double __pp_r194____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r194____d1___result;
           __pp_r194____d1___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 2) - 1.0L/128.0L*pow(x_2, 2)*(-2*x_0 + x_1*(x_0 - 4) + 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) - 16*x_0 - x_1*(pow(x_0, 2) - 8*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r194____d1___result;
        }
        static inline double __pp_r195____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r195____d1___result;
           __pp_r195____d1___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/384.0L*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) - 6*x_0 + 8) + (1.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 24*x_0 + 48) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) - x_0*x_1 - 4*x_0 + pow(x_1, 2) + 4) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) - 8*x_0 + 2*pow(x_1, 2) - x_1*(pow(x_0, 2) - 4*x_0 + 8) + 8) - 1.0L/24.0L;
           return __pp_r195____d1___result;
        }
        static inline double __pp_r196____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r196____d1___result;
           __pp_r196____d1___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 2) - 1.0L/128.0L*pow(x_2, 2)*(2*x_0 + x_1*(x_0 - 4) - 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) - 16*x_0 + x_1*(pow(x_0, 2) - 8*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r196____d1___result;
        }
        static inline double __pp_r197____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r197____d1___result;
           __pp_r197____d1___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) - 6*x_0 + 8) + (1.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 24*x_0 + 48) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + x_0*x_1 - 4*x_0 + pow(x_1, 2) + 4) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) - 8*x_0 + 2*pow(x_1, 2) + x_1*(pow(x_0, 2) - 4*x_0 + 8) + 8) + 1.0L/24.0L;
           return __pp_r197____d1___result;
        }
        static inline double __pp_r198____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r198____d1___result;
           __pp_r198____d1___result = (1.0L/48.0L)*pow(x_1, 3) + (5.0L/384.0L)*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(x_0 - 4) + (1.0L/128.0L)*x_1*x_2*(5*pow(x_0, 2) - 16*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64);
           return __pp_r198____d1___result;
        }
        static inline double __pp_r199____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r199____d1___result;
           __pp_r199____d1___result = (1.0L/128.0L)*pow(x_0, 2)*x_1*x_2 + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(3*x_0 - 4) - 1.0L/384.0L*x_1*(3*pow(x_0, 3) - 12*pow(x_0, 2) + 32);
           return __pp_r199____d1___result;
        }
        static inline double __pp_r200____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r200____d1___result;
           __pp_r200____d1___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 24*x_0 + 48) - 1.0L/192.0L*pow(x_2, 3)*(x_1 - 1) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 2*x_0*x_1 - 4*x_0 + pow(x_1, 2) + 8) + (1.0L/64.0L)*x_2*(pow(x_0, 2) - 4*x_0 - x_1*(pow(x_0, 2) - 4*x_0 + 4) + 4) - 1.0L/24.0L;
           return __pp_r200____d1___result;
        }
        static inline double __pp_r201____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r201____d1___result;
           __pp_r201____d1___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r201____d1___result;
        }
        static inline double __pp_r202____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r202____d1___result;
           __pp_r202____d1___result = (1.0L/96.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/8.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*x_1*(3*pow(x_0, 3) - 12*pow(x_0, 2) + 32) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 2*x_1*(3*x_0 - 4)) - 1.0L/12.0L;
           return __pp_r202____d1___result;
        }
        static inline double __pp_r203____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r203____d1___result;
           __pp_r203____d1___result = -5.0L/768.0L*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(5*pow(x_0, 2) - 16*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/256.0L)*pow(x_2, 2)*(5*pow(x_0, 2) - 16*x_0 + 5*pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16);
           return __pp_r203____d1___result;
        }
        static inline double __pp_r204____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r204____d1___result;
           __pp_r204____d1___result = -1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16);
           return __pp_r204____d1___result;
        }
        static inline double __pp_r205____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r205____d1___result;
           __pp_r205____d1___result = -1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16);
           return __pp_r205____d1___result;
        }
        static inline double __pp_r206____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r206____d1___result;
           __pp_r206____d1___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r206____d1___result;
        }
        static inline double __pp_r207____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r207____d1___result;
           __pp_r207____d1___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 24*x_0 + 48) + (1.0L/192.0L)*pow(x_2, 3)*(x_1 - 1) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 2*x_0*x_1 - 4*x_0 + pow(x_1, 2) + 8) - 1.0L/64.0L*x_2*(pow(x_0, 2) - 4*x_0 - x_1*(pow(x_0, 2) - 4*x_0 + 4) + 4) - 1.0L/24.0L;
           return __pp_r207____d1___result;
        }
        static inline double __pp_r208____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r208____d1___result;
           __pp_r208____d1___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 24*x_0 + 48) - 1.0L/192.0L*pow(x_2, 3)*(x_1 + 1) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 2*x_0*x_1 - 4*x_0 + pow(x_1, 2) + 8) - 1.0L/64.0L*x_2*(pow(x_0, 2) - 4*x_0 + x_1*(pow(x_0, 2) - 4*x_0 + 4) + 4) + 1.0L/24.0L;
           return __pp_r208____d1___result;
        }
        static inline double __pp_r209____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r209____d1___result;
           __pp_r209____d1___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) + 1.0L/3.0L;
           return __pp_r209____d1___result;
        }
        static inline double __pp_r210____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r210____d1___result;
           __pp_r210____d1___result = -1.0L/96.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/8.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*x_1*(3*pow(x_0, 3) - 12*pow(x_0, 2) + 32) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 2*x_1*(3*x_0 - 4)) + 1.0L/12.0L;
           return __pp_r210____d1___result;
        }
        static inline double __pp_r211____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r211____d1___result;
           __pp_r211____d1___result = (5.0L/768.0L)*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(5*pow(x_0, 2) - 16*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/256.0L*pow(x_2, 2)*(5*pow(x_0, 2) - 16*x_0 + 5*pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16);
           return __pp_r211____d1___result;
        }
        static inline double __pp_r212____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r212____d1___result;
           __pp_r212____d1___result = (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16);
           return __pp_r212____d1___result;
        }
        static inline double __pp_r213____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r213____d1___result;
           __pp_r213____d1___result = (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16);
           return __pp_r213____d1___result;
        }
        static inline double __pp_r214____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r214____d1___result;
           __pp_r214____d1___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) + 1.0L/3.0L;
           return __pp_r214____d1___result;
        }
        static inline double __pp_r215____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r215____d1___result;
           __pp_r215____d1___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 24*x_0 + 48) + (1.0L/192.0L)*pow(x_2, 3)*(x_1 + 1) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 2*x_0*x_1 - 4*x_0 + pow(x_1, 2) + 8) + (1.0L/64.0L)*x_2*(pow(x_0, 2) - 4*x_0 + x_1*(pow(x_0, 2) - 4*x_0 + 4) + 4) + 1.0L/24.0L;
           return __pp_r215____d1___result;
        }
        static inline double __pp_r216____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r216____d1___result;
           __pp_r216____d1___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 2) - 1.0L/128.0L*pow(x_2, 2)*(-2*x_0 + x_1*(x_0 - 4) + 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) - 16*x_0 - x_1*(pow(x_0, 2) - 8*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r216____d1___result;
        }
        static inline double __pp_r217____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r217____d1___result;
           __pp_r217____d1___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 2) - 1.0L/128.0L*pow(x_2, 2)*(2*x_0 + x_1*(x_0 - 4) - 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) - 16*x_0 + x_1*(pow(x_0, 2) - 8*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r217____d1___result;
        }
        static inline double __pp_r218____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r218____d1___result;
           __pp_r218____d1___result = (3.0L/128.0L)*pow(x_0, 2)*x_1*x_2 + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/128.0L)*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(x_0 + 4) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) - 32);
           return __pp_r218____d1___result;
        }
        static inline double __pp_r219____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r219____d1___result;
           __pp_r219____d1___result = (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/384.0L*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) - 2*x_0 + 8) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 24*x_0 - 48) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + x_0*x_1 - 2*x_0 + pow(x_1, 2) - 4) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) - 8*x_0 + 6*pow(x_1, 2) + x_1*(pow(x_0, 2) + 4*x_0 - 8) - 8) - 1.0L/24.0L;
           return __pp_r219____d1___result;
        }
        static inline double __pp_r220____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r220____d1___result;
           __pp_r220____d1___result = -1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) - 2*x_0 + 8) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 24*x_0 - 48) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 2) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) - x_0*x_1 - 2*x_0 + pow(x_1, 2) - 4) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) - 8*x_0 + 6*pow(x_1, 2) - x_1*(pow(x_0, 2) + 4*x_0 - 8) - 8) + 1.0L/24.0L;
           return __pp_r220____d1___result;
        }
        static inline double __pp_r221____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r221____d1___result;
           __pp_r221____d1___result = -1.0L/384.0L*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(x_0 - 4) - 1.0L/128.0L*x_1*x_2*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64);
           return __pp_r221____d1___result;
        }
        static inline double __pp_r222____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r222____d1___result;
           __pp_r222____d1___result = -1.0L/384.0L*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(x_0 - 4) - 1.0L/128.0L*x_1*x_2*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64);
           return __pp_r222____d1___result;
        }
        static inline double __pp_r223____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r223____d1___result;
           __pp_r223____d1___result = (1.0L/48.0L)*pow(x_1, 3) - 1.0L/384.0L*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(5*x_0 - 4) - 1.0L/128.0L*x_1*x_2*(pow(x_0, 2) - 16*x_0 + 16) + (1.0L/384.0L)*x_1*(5*pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64);
           return __pp_r223____d1___result;
        }
        static inline double __pp_r224____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r224____d1___result;
           __pp_r224____d1___result = -1.0L/384.0L*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(x_0 - 4) - 1.0L/128.0L*x_1*x_2*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64);
           return __pp_r224____d1___result;
        }
        static inline double __pp_r225____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r225____d1___result;
           __pp_r225____d1___result = -1.0L/384.0L*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(x_0 - 4) - 1.0L/128.0L*x_1*x_2*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64);
           return __pp_r225____d1___result;
        }
        static inline double __pp_r226____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r226____d1___result;
           __pp_r226____d1___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/384.0L*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) - 6*x_0 + 8) - 1.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 24*x_0 + 48) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) - x_0*x_1 - 4*x_0 + pow(x_1, 2) + 4) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) - 8*x_0 + 2*pow(x_1, 2) - x_1*(pow(x_0, 2) - 4*x_0 + 8) + 8) - 1.0L/24.0L;
           return __pp_r226____d1___result;
        }
        static inline double __pp_r227____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r227____d1___result;
           __pp_r227____d1___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 2) - 1.0L/128.0L*pow(x_2, 2)*(-2*x_0 + x_1*(x_0 - 4) + 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) - 16*x_0 - x_1*(pow(x_0, 2) - 8*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r227____d1___result;
        }
        static inline double __pp_r228____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r228____d1___result;
           __pp_r228____d1___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) - 6*x_0 + 8) - 1.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 24*x_0 + 48) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + x_0*x_1 - 4*x_0 + pow(x_1, 2) + 4) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) - 8*x_0 + 2*pow(x_1, 2) + x_1*(pow(x_0, 2) - 4*x_0 + 8) + 8) + 1.0L/24.0L;
           return __pp_r228____d1___result;
        }
        static inline double __pp_r229____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r229____d1___result;
           __pp_r229____d1___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 2) - 1.0L/128.0L*pow(x_2, 2)*(2*x_0 + x_1*(x_0 - 4) - 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) - 16*x_0 + x_1*(pow(x_0, 2) - 8*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r229____d1___result;
        }
        static inline double __pp_r230____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r230____d1___result;
           __pp_r230____d1___result = -1.0L/128.0L*pow(x_0, 2)*x_1*x_2 + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(3*x_0 - 4) - 1.0L/384.0L*x_1*(3*pow(x_0, 3) - 12*pow(x_0, 2) + 32);
           return __pp_r230____d1___result;
        }
        static inline double __pp_r231____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r231____d1___result;
           __pp_r231____d1___result = (1.0L/48.0L)*pow(x_1, 3) - 5.0L/384.0L*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(x_0 - 4) - 1.0L/128.0L*x_1*x_2*(5*pow(x_0, 2) - 16*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64);
           return __pp_r231____d1___result;
        }
        static inline double __pp_r232____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r232____d1___result;
           __pp_r232____d1___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) - 16*x_0 + 2*pow(x_1, 2) - x_1*(pow(x_0, 2) - 4*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r232____d1___result;
        }
        static inline double __pp_r233____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r233____d1___result;
           __pp_r233____d1___result = -1.0L/64.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 12*x_0 + 24) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0*x_1 + 8*x_0 + pow(x_1, 2) - 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) - 8*x_0 - 2*pow(x_1, 2) - x_1*(pow(x_0, 2) - 4*x_0 - 8) - 8) - 5.0L/24.0L;
           return __pp_r233____d1___result;
        }
        static inline double __pp_r234____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r234____d1___result;
           __pp_r234____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 32) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) - 32) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/128.0L*x_2*(pow(x_0, 2)*x_1 - 4*pow(x_0, 2)) - 1.0L/3.0L;
           return __pp_r234____d1___result;
        }
        static inline double __pp_r235____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r235____d1___result;
           __pp_r235____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 32) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) - 32) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/128.0L*x_2*(pow(x_0, 2)*x_1 - 4*pow(x_0, 2)) - 1.0L/3.0L;
           return __pp_r235____d1___result;
        }
        static inline double __pp_r236____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r236____d1___result;
           __pp_r236____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) - 1.0L/48.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 32) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) - 1.0L/384.0L*pow(x_2, 3)*(5*x_1 - 8) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/128.0L*x_2*(5*pow(x_0, 2)*x_1 - 8*pow(x_0, 2));
           return __pp_r236____d1___result;
        }
        static inline double __pp_r237____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r237____d1___result;
           __pp_r237____d1___result = (1.0L/256.0L)*pow(x_1, 4) - 1.0L/24.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 32) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 8) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 4) - 1.0L/256.0L*pow(x_2, 2)*(3*pow(x_0, 2) + 3*pow(x_1, 2) - 8*x_1) - 1.0L/128.0L*x_2*(4*pow(x_1, 2) + x_1*(pow(x_0, 2) - 16) + 16) - 1.0L/12.0L;
           return __pp_r237____d1___result;
        }
        static inline double __pp_r238____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r238____d1___result;
           __pp_r238____d1___result = -1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) + 16*x_0 + 2*pow(x_1, 2) - x_1*(pow(x_0, 2) + 4*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r238____d1___result;
        }
        static inline double __pp_r239____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r239____d1___result;
           __pp_r239____d1___result = (1.0L/64.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 12*x_0 - 24) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0*x_1 - 8*x_0 + pow(x_1, 2) - 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 8*x_0 - 2*pow(x_1, 2) - x_1*(pow(x_0, 2) + 4*x_0 - 8) - 8) - 5.0L/24.0L;
           return __pp_r239____d1___result;
        }
        static inline double __pp_r240____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r240____d1___result;
           __pp_r240____d1___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r240____d1___result;
        }
        static inline double __pp_r241____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r241____d1___result;
           __pp_r241____d1___result = -1.0L/96.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 24*x_0 + 48) + (1.0L/192.0L)*pow(x_2, 3)*(x_1 - 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 2*x_0*x_1 + 4*x_0 + pow(x_1, 2) - 8) - 1.0L/64.0L*x_2*(2*pow(x_0, 2) - 4*x_0 - pow(x_1, 2) - x_1*(pow(x_0, 2) - 2*x_0 - 4) - 4) - 5.0L/24.0L;
           return __pp_r241____d1___result;
        }
        static inline double __pp_r242____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r242____d1___result;
           __pp_r242____d1___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r242____d1___result;
        }
        static inline double __pp_r243____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r243____d1___result;
           __pp_r243____d1___result = -1.0L/96.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 32) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 128) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r243____d1___result;
        }
        static inline double __pp_r244____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r244____d1___result;
           __pp_r244____d1___result = -1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 4) - 1.0L/24.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 8*x_0 - 32) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) - 48*x_0 - 32) - 1.0L/256.0L*pow(x_2, 2)*(3*pow(x_0, 2) + 3*pow(x_1, 2) - 2*x_1*(x_0 + 4)) - 1.0L/12.0L;
           return __pp_r244____d1___result;
        }
        static inline double __pp_r245____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r245____d1___result;
           __pp_r245____d1___result = -1.0L/96.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 24*x_0 + 48) - 1.0L/192.0L*pow(x_2, 3)*(x_1 - 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 2*x_0*x_1 + 4*x_0 + pow(x_1, 2) - 8) + (1.0L/64.0L)*x_2*(2*pow(x_0, 2) - 4*x_0 - pow(x_1, 2) - x_1*(pow(x_0, 2) - 2*x_0 - 4) - 4) - 5.0L/24.0L;
           return __pp_r245____d1___result;
        }
        static inline double __pp_r246____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r246____d1___result;
           __pp_r246____d1___result = -1.0L/96.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 32) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 128) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 - 4) + 16) - 1.0L/3.0L;
           return __pp_r246____d1___result;
        }
        static inline double __pp_r247____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r247____d1___result;
           __pp_r247____d1___result = -1.0L/48.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) - 1.0L/48.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 32) + (1.0L/384.0L)*x_1*(5*pow(x_0, 3) - 12*pow(x_0, 2) - 64) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 16*x_0 + pow(x_1, 2) + 2*x_1*(5*x_0 - 4) + 16);
           return __pp_r247____d1___result;
        }
        static inline double __pp_r248____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r248____d1___result;
           __pp_r248____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) - 1.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) + 4*pow(x_1, 2) - x_1*(pow(x_0, 2) + 16));
           return __pp_r248____d1___result;
        }
        static inline double __pp_r249____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r249____d1___result;
           __pp_r249____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) - 1.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) + 4*pow(x_1, 2) - x_1*(pow(x_0, 2) + 16));
           return __pp_r249____d1___result;
        }
        static inline double __pp_r250____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r250____d1___result;
           __pp_r250____d1___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 12*x_0 + 24) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0*x_1 + 4*x_0 + pow(x_1, 2) - 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 8*x_0 + 4*pow(x_1, 2) + x_1*(pow(x_0, 2) - 8*x_0 - 8) - 8) - 1.0L/24.0L;
           return __pp_r250____d1___result;
        }
        static inline double __pp_r251____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r251____d1___result;
           __pp_r251____d1___result = -1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) + 16*x_0 + 2*pow(x_1, 2) - x_1*(pow(x_0, 2) + 4*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r251____d1___result;
        }
        static inline double __pp_r252____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r252____d1___result;
           __pp_r252____d1___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) - 16*x_0 + 2*pow(x_1, 2) - x_1*(pow(x_0, 2) - 4*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r252____d1___result;
        }
        static inline double __pp_r253____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r253____d1___result;
           __pp_r253____d1___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 12*x_0 - 24) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0*x_1 - 4*x_0 + pow(x_1, 2) - 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) - 8*x_0 + 4*pow(x_1, 2) + x_1*(pow(x_0, 2) + 8*x_0 - 8) - 8) - 1.0L/24.0L;
           return __pp_r253____d1___result;
        }
        static inline double __pp_r254____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r254____d1___result;
           __pp_r254____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 5.0L/768.0L*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(5*pow(x_0, 2) + 16) - 1.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) + (1.0L/256.0L)*pow(x_2, 2)*(5*pow(x_0, 2) + 5*pow(x_1, 2) - 8*x_1) + (1.0L/128.0L)*x_2*(8*pow(x_0, 2) + 8*pow(x_1, 2) - x_1*(pow(x_0, 2) + 16));
           return __pp_r254____d1___result;
        }
        static inline double __pp_r255____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r255____d1___result;
           __pp_r255____d1___result = -1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 8) + (1.0L/384.0L)*pow(x_2, 3)*(3*x_1 - 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 - 16) + (1.0L/128.0L)*x_2*(3*pow(x_0, 2)*x_1 + 4*pow(x_1, 2) - 16) - 1.0L/12.0L;
           return __pp_r255____d1___result;
        }
        static inline double __pp_r256____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r256____d1___result;
           __pp_r256____d1___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 2) - 1.0L/128.0L*pow(x_2, 2)*(-2*x_0 + x_1*(x_0 - 4) + 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) - 16*x_0 - x_1*(pow(x_0, 2) - 8*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r256____d1___result;
        }
        static inline double __pp_r257____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r257____d1___result;
           __pp_r257____d1___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) - 16*x_0 + 2*pow(x_1, 2) - x_1*(pow(x_0, 2) - 4*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r257____d1___result;
        }
        static inline double __pp_r258____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r258____d1___result;
           __pp_r258____d1___result = (1.0L/384.0L)*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(x_0 - 4) + (1.0L/128.0L)*x_1*x_2*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64);
           return __pp_r258____d1___result;
        }
        static inline double __pp_r259____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r259____d1___result;
           __pp_r259____d1___result = (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/384.0L*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) - 2*x_0 + 8) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 24*x_0 - 48) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + x_0*x_1 - 2*x_0 + pow(x_1, 2) - 4) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) - 8*x_0 + 6*pow(x_1, 2) + x_1*(pow(x_0, 2) + 4*x_0 - 8) - 8) - 1.0L/24.0L;
           return __pp_r259____d1___result;
        }
        static inline double __pp_r260____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r260____d1___result;
           __pp_r260____d1___result = -1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 8) - 1.0L/384.0L*pow(x_2, 3)*(3*x_1 - 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 - 16) - 1.0L/128.0L*x_2*(3*pow(x_0, 2)*x_1 + 4*pow(x_1, 2) - 16) - 1.0L/12.0L;
           return __pp_r260____d1___result;
        }
        static inline double __pp_r261____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r261____d1___result;
           __pp_r261____d1___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 12*x_0 - 24) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0*x_1 - 4*x_0 + pow(x_1, 2) - 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) - 8*x_0 + 4*pow(x_1, 2) + x_1*(pow(x_0, 2) + 8*x_0 - 8) - 8) - 1.0L/24.0L;
           return __pp_r261____d1___result;
        }
        static inline double __pp_r262____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r262____d1___result;
           __pp_r262____d1___result = (1.0L/384.0L)*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(x_0 - 4) + (1.0L/128.0L)*x_1*x_2*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64);
           return __pp_r262____d1___result;
        }
        static inline double __pp_r263____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r263____d1___result;
           __pp_r263____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) + 4*pow(x_1, 2) - x_1*(pow(x_0, 2) + 16));
           return __pp_r263____d1___result;
        }
        static inline double __pp_r264____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r264____d1___result;
           __pp_r264____d1___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 12*x_0 + 24) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0*x_1 + 4*x_0 + pow(x_1, 2) - 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 8*x_0 + 4*pow(x_1, 2) + x_1*(pow(x_0, 2) - 8*x_0 - 8) - 8) - 1.0L/24.0L;
           return __pp_r264____d1___result;
        }
        static inline double __pp_r265____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r265____d1___result;
           __pp_r265____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) + 4*pow(x_1, 2) - x_1*(pow(x_0, 2) + 16));
           return __pp_r265____d1___result;
        }
        static inline double __pp_r266____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r266____d1___result;
           __pp_r266____d1___result = -1.0L/64.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 12*x_0 + 24) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0*x_1 + 8*x_0 + pow(x_1, 2) - 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) - 8*x_0 - 2*pow(x_1, 2) - x_1*(pow(x_0, 2) - 4*x_0 - 8) - 8) - 5.0L/24.0L;
           return __pp_r266____d1___result;
        }
        static inline double __pp_r267____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r267____d1___result;
           __pp_r267____d1___result = (1.0L/256.0L)*pow(x_1, 4) - 1.0L/24.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 32) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 8) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 4) - 1.0L/256.0L*pow(x_2, 2)*(3*pow(x_0, 2) + 3*pow(x_1, 2) - 8*x_1) + (1.0L/128.0L)*x_2*(4*pow(x_1, 2) + x_1*(pow(x_0, 2) - 16) + 16) - 1.0L/12.0L;
           return __pp_r267____d1___result;
        }
        static inline double __pp_r268____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r268____d1___result;
           __pp_r268____d1___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) - 16*x_0 + 2*pow(x_1, 2) - x_1*(pow(x_0, 2) - 4*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r268____d1___result;
        }
        static inline double __pp_r269____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r269____d1___result;
           __pp_r269____d1___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 2) - 1.0L/128.0L*pow(x_2, 2)*(2*x_0 + x_1*(x_0 - 4) - 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) - 16*x_0 + x_1*(pow(x_0, 2) - 8*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r269____d1___result;
        }
        static inline double __pp_r270____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r270____d1___result;
           __pp_r270____d1___result = -1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) - 2*x_0 + 8) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 24*x_0 - 48) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 2) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) - x_0*x_1 - 2*x_0 + pow(x_1, 2) - 4) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) - 8*x_0 + 6*pow(x_1, 2) - x_1*(pow(x_0, 2) + 4*x_0 - 8) - 8) + 1.0L/24.0L;
           return __pp_r270____d1___result;
        }
        static inline double __pp_r271____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r271____d1___result;
           __pp_r271____d1___result = (1.0L/48.0L)*pow(x_1, 3) + (1.0L/384.0L)*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(5*x_0 - 4) + (1.0L/128.0L)*x_1*x_2*(pow(x_0, 2) - 16*x_0 + 16) + (1.0L/384.0L)*x_1*(5*pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64);
           return __pp_r271____d1___result;
        }
        static inline double __pp_r272____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r272____d1___result;
           __pp_r272____d1___result = -3.0L/128.0L*pow(x_0, 2)*x_1*x_2 + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/128.0L*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(x_0 + 4) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) - 32);
           return __pp_r272____d1___result;
        }
        static inline double __pp_r273____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r273____d1___result;
           __pp_r273____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 5.0L/768.0L*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(5*pow(x_0, 2) + 16) + (1.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) + (1.0L/256.0L)*pow(x_2, 2)*(5*pow(x_0, 2) + 5*pow(x_1, 2) - 8*x_1) - 1.0L/128.0L*x_2*(8*pow(x_0, 2) + 8*pow(x_1, 2) - x_1*(pow(x_0, 2) + 16));
           return __pp_r273____d1___result;
        }
        static inline double __pp_r274____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r274____d1___result;
           __pp_r274____d1___result = (1.0L/48.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) - 1.0L/48.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 32) - 1.0L/384.0L*x_1*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 64) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 16*x_0 + pow(x_1, 2) - 2*x_1*(5*x_0 + 4) + 16);
           return __pp_r274____d1___result;
        }
        static inline double __pp_r275____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r275____d1___result;
           __pp_r275____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) - 1.0L/48.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 32) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) + (1.0L/384.0L)*pow(x_2, 3)*(5*x_1 - 8) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/128.0L)*x_2*(5*pow(x_0, 2)*x_1 - 8*pow(x_0, 2));
           return __pp_r275____d1___result;
        }
        static inline double __pp_r276____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r276____d1___result;
           __pp_r276____d1___result = (1.0L/96.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 24*x_0 - 48) + (1.0L/192.0L)*pow(x_2, 3)*(x_1 - 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 2*x_0*x_1 - 4*x_0 + pow(x_1, 2) - 8) - 1.0L/64.0L*x_2*(2*pow(x_0, 2) + 4*x_0 - pow(x_1, 2) - x_1*(pow(x_0, 2) + 2*x_0 - 4) - 4) - 5.0L/24.0L;
           return __pp_r276____d1___result;
        }
        static inline double __pp_r277____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r277____d1___result;
           __pp_r277____d1___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) - 1.0L/3.0L;
           return __pp_r277____d1___result;
        }
        static inline double __pp_r278____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r278____d1___result;
           __pp_r278____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 32) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) - 32) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/128.0L)*x_2*(pow(x_0, 2)*x_1 - 4*pow(x_0, 2)) - 1.0L/3.0L;
           return __pp_r278____d1___result;
        }
        static inline double __pp_r279____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r279____d1___result;
           __pp_r279____d1___result = (1.0L/64.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 12*x_0 - 24) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0*x_1 - 8*x_0 + pow(x_1, 2) - 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 8*x_0 - 2*pow(x_1, 2) - x_1*(pow(x_0, 2) + 4*x_0 - 8) - 8) - 5.0L/24.0L;
           return __pp_r279____d1___result;
        }
        static inline double __pp_r280____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r280____d1___result;
           __pp_r280____d1___result = -1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) + 16*x_0 + 2*pow(x_1, 2) - x_1*(pow(x_0, 2) + 4*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r280____d1___result;
        }
        static inline double __pp_r281____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r281____d1___result;
           __pp_r281____d1___result = -1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) + 16*x_0 + 2*pow(x_1, 2) - x_1*(pow(x_0, 2) + 4*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r281____d1___result;
        }
        static inline double __pp_r282____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r282____d1___result;
           __pp_r282____d1___result = (1.0L/96.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 32) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) - 128) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) - 1.0L/3.0L;
           return __pp_r282____d1___result;
        }
        static inline double __pp_r283____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r283____d1___result;
           __pp_r283____d1___result = (1.0L/96.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 32) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) - 128) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) - 1.0L/3.0L;
           return __pp_r283____d1___result;
        }
        static inline double __pp_r284____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r284____d1___result;
           __pp_r284____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 32) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) - 32) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/128.0L)*x_2*(pow(x_0, 2)*x_1 - 4*pow(x_0, 2)) - 1.0L/3.0L;
           return __pp_r284____d1___result;
        }
        static inline double __pp_r285____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r285____d1___result;
           __pp_r285____d1___result = (1.0L/96.0L)*pow(x_0, 3) - 1.0L/8.0L*x_0 + (1.0L/256.0L)*pow(x_1, 4) - 1.0L/24.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 8*x_0 - 32) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) - 48*x_0 + 32) - 1.0L/256.0L*pow(x_2, 2)*(3*pow(x_0, 2) + 3*pow(x_1, 2) + 2*x_1*(x_0 - 4)) - 1.0L/12.0L;
           return __pp_r285____d1___result;
        }
        static inline double __pp_r286____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r286____d1___result;
           __pp_r286____d1___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) - 1.0L/3.0L;
           return __pp_r286____d1___result;
        }
        static inline double __pp_r287____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r287____d1___result;
           __pp_r287____d1___result = (1.0L/96.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 24*x_0 - 48) - 1.0L/192.0L*pow(x_2, 3)*(x_1 - 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 2*x_0*x_1 - 4*x_0 + pow(x_1, 2) - 8) + (1.0L/64.0L)*x_2*(2*pow(x_0, 2) + 4*x_0 - pow(x_1, 2) - x_1*(pow(x_0, 2) + 2*x_0 - 4) - 4) - 5.0L/24.0L;
           return __pp_r287____d1___result;
        }
        static inline double __pp_r288____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r288____d1___result;
           __pp_r288____d1___result = (1.0L/96.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 24*x_0 + 48) + (1.0L/192.0L)*pow(x_2, 3)*(x_1 + 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 2*x_0*x_1 + 4*x_0 + pow(x_1, 2) - 8) + (1.0L/64.0L)*x_2*(2*pow(x_0, 2) - 4*x_0 - pow(x_1, 2) + x_1*(pow(x_0, 2) - 2*x_0 - 4) - 4) + 5.0L/24.0L;
           return __pp_r288____d1___result;
        }
        static inline double __pp_r289____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r289____d1___result;
           __pp_r289____d1___result = (1.0L/64.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 12*x_0 + 24) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0*x_1 + 8*x_0 + pow(x_1, 2) - 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) - 8*x_0 - 2*pow(x_1, 2) + x_1*(pow(x_0, 2) - 4*x_0 - 8) - 8) + 5.0L/24.0L;
           return __pp_r289____d1___result;
        }
        static inline double __pp_r290____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r290____d1___result;
           __pp_r290____d1___result = (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 8) - 1.0L/384.0L*pow(x_2, 3)*(3*x_1 + 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 - 16) - 1.0L/128.0L*x_2*(3*pow(x_0, 2)*x_1 - 4*pow(x_1, 2) + 16) + 1.0L/12.0L;
           return __pp_r290____d1___result;
        }
        static inline double __pp_r291____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r291____d1___result;
           __pp_r291____d1___result = -1.0L/256.0L*pow(x_1, 4) - 1.0L/24.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 32) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 8) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 4) + (1.0L/256.0L)*pow(x_2, 2)*(3*pow(x_0, 2) + 3*pow(x_1, 2) + 8*x_1) + (1.0L/128.0L)*x_2*(-4*pow(x_1, 2) + x_1*(pow(x_0, 2) - 16) - 16) + 1.0L/12.0L;
           return __pp_r291____d1___result;
        }
        static inline double __pp_r292____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r292____d1___result;
           __pp_r292____d1___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 32) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) - 32) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/128.0L)*x_2*(pow(x_0, 2)*x_1 + 4*pow(x_0, 2)) + 1.0L/3.0L;
           return __pp_r292____d1___result;
        }
        static inline double __pp_r293____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r293____d1___result;
           __pp_r293____d1___result = -1.0L/96.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 24*x_0 - 48) + (1.0L/192.0L)*pow(x_2, 3)*(x_1 + 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 2*x_0*x_1 - 4*x_0 + pow(x_1, 2) - 8) + (1.0L/64.0L)*x_2*(2*pow(x_0, 2) + 4*x_0 - pow(x_1, 2) + x_1*(pow(x_0, 2) + 2*x_0 - 4) - 4) + 5.0L/24.0L;
           return __pp_r293____d1___result;
        }
        static inline double __pp_r294____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r294____d1___result;
           __pp_r294____d1___result = -1.0L/64.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 12*x_0 - 24) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0*x_1 - 8*x_0 + pow(x_1, 2) - 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 8*x_0 - 2*pow(x_1, 2) + x_1*(pow(x_0, 2) + 4*x_0 - 8) - 8) + 5.0L/24.0L;
           return __pp_r294____d1___result;
        }
        static inline double __pp_r295____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r295____d1___result;
           __pp_r295____d1___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) + 1.0L/3.0L;
           return __pp_r295____d1___result;
        }
        static inline double __pp_r296____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r296____d1___result;
           __pp_r296____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) - 16*x_0 + 2*pow(x_1, 2) + x_1*(pow(x_0, 2) - 4*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r296____d1___result;
        }
        static inline double __pp_r297____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r297____d1___result;
           __pp_r297____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) - 16*x_0 + 2*pow(x_1, 2) + x_1*(pow(x_0, 2) - 4*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r297____d1___result;
        }
        static inline double __pp_r298____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r298____d1___result;
           __pp_r298____d1___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 12*x_0 - 24) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0*x_1 - 4*x_0 + pow(x_1, 2) - 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) - 8*x_0 + 4*pow(x_1, 2) - x_1*(pow(x_0, 2) + 8*x_0 - 8) - 8) + 1.0L/24.0L;
           return __pp_r298____d1___result;
        }
        static inline double __pp_r299____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r299____d1___result;
           __pp_r299____d1___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/48.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 32) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) - 1.0L/384.0L*pow(x_2, 3)*(5*x_1 + 8) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/128.0L*x_2*(5*pow(x_0, 2)*x_1 + 8*pow(x_0, 2));
           return __pp_r299____d1___result;
        }
        static inline double __pp_r300____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r300____d1___result;
           __pp_r300____d1___result = -1.0L/16.0L*pow(x_0, 2) + (5.0L/768.0L)*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(5*pow(x_0, 2) + 16) - 1.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) - 1.0L/256.0L*pow(x_2, 2)*(5*pow(x_0, 2) + 5*pow(x_1, 2) + 8*x_1) - 1.0L/128.0L*x_2*(8*pow(x_0, 2) + 8*pow(x_1, 2) + x_1*(pow(x_0, 2) + 16));
           return __pp_r300____d1___result;
        }
        static inline double __pp_r301____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r301____d1___result;
           __pp_r301____d1___result = -1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/48.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 32) - 1.0L/384.0L*x_1*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 64) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 16*x_0 + pow(x_1, 2) + 2*x_1*(5*x_0 + 4) + 16);
           return __pp_r301____d1___result;
        }
        static inline double __pp_r302____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r302____d1___result;
           __pp_r302____d1___result = -1.0L/96.0L*pow(x_0, 3) + (1.0L/8.0L)*x_0 - 1.0L/256.0L*pow(x_1, 4) - 1.0L/24.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(3*pow(x_0, 2) + 8*x_0 - 32) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) - 48*x_0 + 32) + (1.0L/256.0L)*pow(x_2, 2)*(3*pow(x_0, 2) + 3*pow(x_1, 2) - 2*x_1*(x_0 - 4)) + 1.0L/12.0L;
           return __pp_r302____d1___result;
        }
        static inline double __pp_r303____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r303____d1___result;
           __pp_r303____d1___result = (1.0L/96.0L)*pow(x_0, 3) - 1.0L/8.0L*x_0 - 1.0L/256.0L*pow(x_1, 4) - 1.0L/24.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 8*x_0 - 32) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) - 48*x_0 - 32) + (1.0L/256.0L)*pow(x_2, 2)*(3*pow(x_0, 2) + 3*pow(x_1, 2) + 2*x_1*(x_0 + 4)) + 1.0L/12.0L;
           return __pp_r303____d1___result;
        }
        static inline double __pp_r304____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r304____d1___result;
           __pp_r304____d1___result = (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/48.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 32) + (1.0L/384.0L)*x_1*(5*pow(x_0, 3) - 12*pow(x_0, 2) - 64) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 16*x_0 + pow(x_1, 2) - 2*x_1*(5*x_0 - 4) + 16);
           return __pp_r304____d1___result;
        }
        static inline double __pp_r305____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r305____d1___result;
           __pp_r305____d1___result = -1.0L/16.0L*pow(x_0, 2) + (5.0L/768.0L)*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(5*pow(x_0, 2) + 16) + (1.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) - 1.0L/256.0L*pow(x_2, 2)*(5*pow(x_0, 2) + 5*pow(x_1, 2) + 8*x_1) + (1.0L/128.0L)*x_2*(8*pow(x_0, 2) + 8*pow(x_1, 2) + x_1*(pow(x_0, 2) + 16));
           return __pp_r305____d1___result;
        }
        static inline double __pp_r306____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r306____d1___result;
           __pp_r306____d1___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/48.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 32) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) + (1.0L/384.0L)*pow(x_2, 3)*(5*x_1 + 8) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/128.0L)*x_2*(5*pow(x_0, 2)*x_1 + 8*pow(x_0, 2));
           return __pp_r306____d1___result;
        }
        static inline double __pp_r307____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r307____d1___result;
           __pp_r307____d1___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 32) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) - 32) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/128.0L*x_2*(pow(x_0, 2)*x_1 + 4*pow(x_0, 2)) + 1.0L/3.0L;
           return __pp_r307____d1___result;
        }
        static inline double __pp_r308____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r308____d1___result;
           __pp_r308____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) - 16*x_0 + 2*pow(x_1, 2) + x_1*(pow(x_0, 2) - 4*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r308____d1___result;
        }
        static inline double __pp_r309____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r309____d1___result;
           __pp_r309____d1___result = (1.0L/64.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 12*x_0 + 24) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0*x_1 + 8*x_0 + pow(x_1, 2) - 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) - 8*x_0 - 2*pow(x_1, 2) + x_1*(pow(x_0, 2) - 4*x_0 - 8) - 8) + 5.0L/24.0L;
           return __pp_r309____d1___result;
        }
        static inline double __pp_r310____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r310____d1___result;
           __pp_r310____d1___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 32) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) - 32) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/128.0L*x_2*(pow(x_0, 2)*x_1 + 4*pow(x_0, 2)) + 1.0L/3.0L;
           return __pp_r310____d1___result;
        }
        static inline double __pp_r311____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r311____d1___result;
           __pp_r311____d1___result = (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) + 16*x_0 + 2*pow(x_1, 2) + x_1*(pow(x_0, 2) + 4*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r311____d1___result;
        }
        static inline double __pp_r312____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r312____d1___result;
           __pp_r312____d1___result = -1.0L/256.0L*pow(x_1, 4) - 1.0L/24.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 32) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 8) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 4) + (1.0L/256.0L)*pow(x_2, 2)*(3*pow(x_0, 2) + 3*pow(x_1, 2) + 8*x_1) - 1.0L/128.0L*x_2*(-4*pow(x_1, 2) + x_1*(pow(x_0, 2) - 16) - 16) + 1.0L/12.0L;
           return __pp_r312____d1___result;
        }
        static inline double __pp_r313____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r313____d1___result;
           __pp_r313____d1___result = -1.0L/64.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 12*x_0 - 24) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0*x_1 - 8*x_0 + pow(x_1, 2) - 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 8*x_0 - 2*pow(x_1, 2) + x_1*(pow(x_0, 2) + 4*x_0 - 8) - 8) + 5.0L/24.0L;
           return __pp_r313____d1___result;
        }
        static inline double __pp_r314____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r314____d1___result;
           __pp_r314____d1___result = -1.0L/96.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 32) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) - 128) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r314____d1___result;
        }
        static inline double __pp_r315____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r315____d1___result;
           __pp_r315____d1___result = -1.0L/96.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 32) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) - 128) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r315____d1___result;
        }
        static inline double __pp_r316____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r316____d1___result;
           __pp_r316____d1___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r316____d1___result;
        }
        static inline double __pp_r317____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r317____d1___result;
           __pp_r317____d1___result = -1.0L/96.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 24*x_0 - 48) - 1.0L/192.0L*pow(x_2, 3)*(x_1 + 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 2*x_0*x_1 - 4*x_0 + pow(x_1, 2) - 8) - 1.0L/64.0L*x_2*(2*pow(x_0, 2) + 4*x_0 - pow(x_1, 2) + x_1*(pow(x_0, 2) + 2*x_0 - 4) - 4) + 5.0L/24.0L;
           return __pp_r317____d1___result;
        }
        static inline double __pp_r318____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r318____d1___result;
           __pp_r318____d1___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) + 1.0L/3.0L;
           return __pp_r318____d1___result;
        }
        static inline double __pp_r319____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r319____d1___result;
           __pp_r319____d1___result = (1.0L/96.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 32) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 128) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) + 1.0L/3.0L;
           return __pp_r319____d1___result;
        }
        static inline double __pp_r320____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r320____d1___result;
           __pp_r320____d1___result = (1.0L/96.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 24*x_0 + 48) - 1.0L/192.0L*pow(x_2, 3)*(x_1 + 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 2*x_0*x_1 + 4*x_0 + pow(x_1, 2) - 8) - 1.0L/64.0L*x_2*(2*pow(x_0, 2) - 4*x_0 - pow(x_1, 2) + x_1*(pow(x_0, 2) - 2*x_0 - 4) - 4) + 5.0L/24.0L;
           return __pp_r320____d1___result;
        }
        static inline double __pp_r321____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r321____d1___result;
           __pp_r321____d1___result = (1.0L/96.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 32) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 128) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 - 4) + 16) + 1.0L/3.0L;
           return __pp_r321____d1___result;
        }
        static inline double __pp_r322____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r322____d1___result;
           __pp_r322____d1___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 32) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) - 32) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/128.0L)*x_2*(pow(x_0, 2)*x_1 + 4*pow(x_0, 2)) + 1.0L/3.0L;
           return __pp_r322____d1___result;
        }
        static inline double __pp_r323____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r323____d1___result;
           __pp_r323____d1___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) - 1.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) + 4*pow(x_1, 2) + x_1*(pow(x_0, 2) + 16));
           return __pp_r323____d1___result;
        }
        static inline double __pp_r324____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r324____d1___result;
           __pp_r324____d1___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) - 1.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) + 4*pow(x_1, 2) + x_1*(pow(x_0, 2) + 16));
           return __pp_r324____d1___result;
        }
        static inline double __pp_r325____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r325____d1___result;
           __pp_r325____d1___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 12*x_0 + 24) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0*x_1 + 4*x_0 + pow(x_1, 2) - 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 8*x_0 + 4*pow(x_1, 2) - x_1*(pow(x_0, 2) - 8*x_0 - 8) - 8) + 1.0L/24.0L;
           return __pp_r325____d1___result;
        }
        static inline double __pp_r326____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r326____d1___result;
           __pp_r326____d1___result = (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) + 16*x_0 + 2*pow(x_1, 2) + x_1*(pow(x_0, 2) + 4*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r326____d1___result;
        }
        static inline double __pp_r327____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r327____d1___result;
           __pp_r327____d1___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) - 16*x_0 + 2*pow(x_1, 2) + x_1*(pow(x_0, 2) - 4*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r327____d1___result;
        }
        static inline double __pp_r328____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r328____d1___result;
           __pp_r328____d1___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 12*x_0 - 24) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0*x_1 - 4*x_0 + pow(x_1, 2) - 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) - 8*x_0 + 4*pow(x_1, 2) - x_1*(pow(x_0, 2) + 8*x_0 - 8) - 8) + 1.0L/24.0L;
           return __pp_r328____d1___result;
        }
        static inline double __pp_r329____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r329____d1___result;
           __pp_r329____d1___result = (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 8) + (1.0L/384.0L)*pow(x_2, 3)*(3*x_1 + 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 - 16) + (1.0L/128.0L)*x_2*(3*pow(x_0, 2)*x_1 - 4*pow(x_1, 2) + 16) + 1.0L/12.0L;
           return __pp_r329____d1___result;
        }
        static inline double __pp_r330____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r330____d1___result;
           __pp_r330____d1___result = (3.0L/128.0L)*pow(x_0, 2)*x_1*x_2 + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/128.0L)*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(x_0 - 4) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 32);
           return __pp_r330____d1___result;
        }
        static inline double __pp_r331____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r331____d1___result;
           __pp_r331____d1___result = -1.0L/128.0L*pow(x_0, 2)*x_1*x_2 + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/384.0L*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(3*x_0 + 4) + (1.0L/384.0L)*x_1*(3*pow(x_0, 3) + 12*pow(x_0, 2) - 32);
           return __pp_r331____d1___result;
        }
        static inline double __pp_r332____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r332____d1___result;
           __pp_r332____d1___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 24*x_0 - 48) - 1.0L/192.0L*pow(x_2, 3)*(x_1 - 1) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 2*x_0*x_1 + 4*x_0 + pow(x_1, 2) + 8) + (1.0L/64.0L)*x_2*(pow(x_0, 2) + 4*x_0 - x_1*(pow(x_0, 2) + 4*x_0 + 4) + 4) - 1.0L/24.0L;
           return __pp_r332____d1___result;
        }
        static inline double __pp_r333____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r333____d1___result;
           __pp_r333____d1___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/384.0L*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) + 6*x_0 + 8) - 1.0L/384.0L*x_1*pow(x_2, 3) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 24*x_0 - 48) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + x_0*x_1 + 4*x_0 + pow(x_1, 2) + 4) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 8*x_0 + 2*pow(x_1, 2) - x_1*(pow(x_0, 2) + 4*x_0 + 8) + 8) - 1.0L/24.0L;
           return __pp_r333____d1___result;
        }
        static inline double __pp_r334____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r334____d1___result;
           __pp_r334____d1___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 24*x_0 - 48) - 1.0L/192.0L*pow(x_2, 3)*(x_1 + 1) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 2*x_0*x_1 + 4*x_0 + pow(x_1, 2) + 8) - 1.0L/64.0L*x_2*(pow(x_0, 2) + 4*x_0 + x_1*(pow(x_0, 2) + 4*x_0 + 4) + 4) + 1.0L/24.0L;
           return __pp_r334____d1___result;
        }
        static inline double __pp_r335____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r335____d1___result;
           __pp_r335____d1___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) + 6*x_0 + 8) - 1.0L/384.0L*x_1*pow(x_2, 3) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 24*x_0 - 48) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) - x_0*x_1 + 4*x_0 + pow(x_1, 2) + 4) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 8*x_0 + 2*pow(x_1, 2) + x_1*(pow(x_0, 2) + 4*x_0 + 8) + 8) + 1.0L/24.0L;
           return __pp_r335____d1___result;
        }
        static inline double __pp_r336____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r336____d1___result;
           __pp_r336____d1___result = -1.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(x_0 + 4) - 1.0L/128.0L*x_1*x_2*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64);
           return __pp_r336____d1___result;
        }
        static inline double __pp_r337____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r337____d1___result;
           __pp_r337____d1___result = (1.0L/48.0L)*pow(x_1, 3) - 1.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(5*x_0 + 4) - 1.0L/128.0L*x_1*x_2*(pow(x_0, 2) + 16*x_0 + 16) - 1.0L/384.0L*x_1*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64);
           return __pp_r337____d1___result;
        }
        static inline double __pp_r338____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r338____d1___result;
           __pp_r338____d1___result = (1.0L/48.0L)*pow(x_1, 3) + (5.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(x_0 + 4) + (1.0L/128.0L)*x_1*x_2*(5*pow(x_0, 2) + 16*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64);
           return __pp_r338____d1___result;
        }
        static inline double __pp_r339____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r339____d1___result;
           __pp_r339____d1___result = (1.0L/48.0L)*pow(x_1, 3) + (1.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(5*x_0 + 4) + (1.0L/128.0L)*x_1*x_2*(pow(x_0, 2) + 16*x_0 + 16) - 1.0L/384.0L*x_1*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64);
           return __pp_r339____d1___result;
        }
        static inline double __pp_r340____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r340____d1___result;
           __pp_r340____d1___result = -5.0L/768.0L*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(5*pow(x_0, 2) + 16*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/256.0L)*pow(x_2, 2)*(5*pow(x_0, 2) + 16*x_0 + 5*pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16);
           return __pp_r340____d1___result;
        }
        static inline double __pp_r341____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r341____d1___result;
           __pp_r341____d1___result = (5.0L/768.0L)*pow(x_1, 4) + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(5*pow(x_0, 2) + 16*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/256.0L*pow(x_2, 2)*(5*pow(x_0, 2) + 16*x_0 + 5*pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16);
           return __pp_r341____d1___result;
        }
        static inline double __pp_r342____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r342____d1___result;
           __pp_r342____d1___result = (1.0L/48.0L)*pow(x_1, 3) - 5.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(x_0 + 4) - 1.0L/128.0L*x_1*x_2*(5*pow(x_0, 2) + 16*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64);
           return __pp_r342____d1___result;
        }
        static inline double __pp_r343____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r343____d1___result;
           __pp_r343____d1___result = -1.0L/96.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/8.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*x_1*(3*pow(x_0, 3) + 12*pow(x_0, 2) - 32) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 2*x_1*(3*x_0 + 4)) - 1.0L/12.0L;
           return __pp_r343____d1___result;
        }
        static inline double __pp_r344____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r344____d1___result;
           __pp_r344____d1___result = (1.0L/96.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/8.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*x_1*(3*pow(x_0, 3) + 12*pow(x_0, 2) - 32) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 2*x_1*(3*x_0 + 4)) + 1.0L/12.0L;
           return __pp_r344____d1___result;
        }
        static inline double __pp_r345____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r345____d1___result;
           __pp_r345____d1___result = (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/384.0L*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) + 2*x_0 + 8) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 24*x_0 + 48) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) - x_0*x_1 + 2*x_0 + pow(x_1, 2) - 4) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) + 8*x_0 + 6*pow(x_1, 2) + x_1*(pow(x_0, 2) - 4*x_0 - 8) - 8) - 1.0L/24.0L;
           return __pp_r345____d1___result;
        }
        static inline double __pp_r346____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r346____d1___result;
           __pp_r346____d1___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(-2*x_0 + x_1*(x_0 + 4) - 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 16*x_0 - x_1*(pow(x_0, 2) + 8*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r346____d1___result;
        }
        static inline double __pp_r347____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r347____d1___result;
           __pp_r347____d1___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) - 1.0L/3.0L;
           return __pp_r347____d1___result;
        }
        static inline double __pp_r348____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r348____d1___result;
           __pp_r348____d1___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(-2*x_0 + x_1*(x_0 + 4) - 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 16*x_0 - x_1*(pow(x_0, 2) + 8*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r348____d1___result;
        }
        static inline double __pp_r349____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r349____d1___result;
           __pp_r349____d1___result = -1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) + 2*x_0 + 8) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 24*x_0 + 48) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 2) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + x_0*x_1 + 2*x_0 + pow(x_1, 2) - 4) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) + 8*x_0 + 6*pow(x_1, 2) - x_1*(pow(x_0, 2) - 4*x_0 - 8) - 8) + 1.0L/24.0L;
           return __pp_r349____d1___result;
        }
        static inline double __pp_r350____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r350____d1___result;
           __pp_r350____d1___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 2) + (1.0L/128.0L)*pow(x_2, 2)*(2*x_0 + x_1*(x_0 + 4) + 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 16*x_0 + x_1*(pow(x_0, 2) + 8*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r350____d1___result;
        }
        static inline double __pp_r351____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r351____d1___result;
           __pp_r351____d1___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r351____d1___result;
        }
        static inline double __pp_r352____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r352____d1___result;
           __pp_r352____d1___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/384.0L)*pow(x_2, 3)*(x_1 + 2) + (1.0L/128.0L)*pow(x_2, 2)*(2*x_0 + x_1*(x_0 + 4) + 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 16*x_0 + x_1*(pow(x_0, 2) + 8*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r352____d1___result;
        }
        static inline double __pp_r353____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r353____d1___result;
           __pp_r353____d1___result = -1.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(x_0 + 4) - 1.0L/128.0L*x_1*x_2*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64);
           return __pp_r353____d1___result;
        }
        static inline double __pp_r354____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r354____d1___result;
           __pp_r354____d1___result = -1.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(x_0 + 4) - 1.0L/128.0L*x_1*x_2*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64);
           return __pp_r354____d1___result;
        }
        static inline double __pp_r355____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r355____d1___result;
           __pp_r355____d1___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 12*x_0 + 24) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 2) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0*x_1 + 4*x_0 + pow(x_1, 2) - 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 8*x_0 + 4*pow(x_1, 2) - x_1*(pow(x_0, 2) - 8*x_0 - 8) - 8) + 1.0L/24.0L;
           return __pp_r355____d1___result;
        }
        static inline double __pp_r356____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r356____d1___result;
           __pp_r356____d1___result = (1.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(x_0 + 4) + (1.0L/128.0L)*x_1*x_2*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64);
           return __pp_r356____d1___result;
        }
        static inline double __pp_r357____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r357____d1___result;
           __pp_r357____d1___result = -1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) + 2*x_0 + 8) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 24*x_0 + 48) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 2) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + x_0*x_1 + 2*x_0 + pow(x_1, 2) - 4) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) + 8*x_0 + 6*pow(x_1, 2) - x_1*(pow(x_0, 2) - 4*x_0 - 8) - 8) + 1.0L/24.0L;
           return __pp_r357____d1___result;
        }
        static inline double __pp_r358____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r358____d1___result;
           __pp_r358____d1___result = (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) + 16*x_0 + 2*pow(x_1, 2) + x_1*(pow(x_0, 2) + 4*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r358____d1___result;
        }
        static inline double __pp_r359____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r359____d1___result;
           __pp_r359____d1___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 2) + (1.0L/128.0L)*pow(x_2, 2)*(2*x_0 + x_1*(x_0 + 4) + 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 16*x_0 + x_1*(pow(x_0, 2) + 8*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r359____d1___result;
        }
        static inline double __pp_r360____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r360____d1___result;
           __pp_r360____d1___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 2) + (1.0L/128.0L)*pow(x_2, 2)*(2*x_0 + x_1*(x_0 + 4) + 8) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 16*x_0 + x_1*(pow(x_0, 2) + 8*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r360____d1___result;
        }
        static inline double __pp_r361____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r361____d1___result;
           __pp_r361____d1___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) + 4*pow(x_1, 2) + x_1*(pow(x_0, 2) + 16));
           return __pp_r361____d1___result;
        }
        static inline double __pp_r362____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r362____d1___result;
           __pp_r362____d1___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 16) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1) + (1.0L/128.0L)*x_2*(4*pow(x_0, 2) + 4*pow(x_1, 2) + x_1*(pow(x_0, 2) + 16));
           return __pp_r362____d1___result;
        }
        static inline double __pp_r363____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r363____d1___result;
           __pp_r363____d1___result = (1.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(x_0 + 4) + (1.0L/128.0L)*x_1*x_2*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64);
           return __pp_r363____d1___result;
        }
        static inline double __pp_r364____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r364____d1___result;
           __pp_r364____d1___result = (1.0L/128.0L)*pow(x_0, 2)*x_1*x_2 + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/384.0L)*x_1*pow(x_2, 3) + (1.0L/128.0L)*x_1*pow(x_2, 2)*(3*x_0 + 4) + (1.0L/384.0L)*x_1*(3*pow(x_0, 3) + 12*pow(x_0, 2) - 32);
           return __pp_r364____d1___result;
        }
        static inline double __pp_r365____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r365____d1___result;
           __pp_r365____d1___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) + 6*x_0 + 8) + (1.0L/384.0L)*x_1*pow(x_2, 3) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 24*x_0 - 48) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) - x_0*x_1 + 4*x_0 + pow(x_1, 2) + 4) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 8*x_0 + 2*pow(x_1, 2) + x_1*(pow(x_0, 2) + 4*x_0 + 8) + 8) + 1.0L/24.0L;
           return __pp_r365____d1___result;
        }
        static inline double __pp_r366____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r366____d1___result;
           __pp_r366____d1___result = (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/384.0L*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) + 2*x_0 + 8) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 24*x_0 + 48) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) - x_0*x_1 + 2*x_0 + pow(x_1, 2) - 4) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) + 8*x_0 + 6*pow(x_1, 2) + x_1*(pow(x_0, 2) - 4*x_0 - 8) - 8) - 1.0L/24.0L;
           return __pp_r366____d1___result;
        }
        static inline double __pp_r367____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r367____d1___result;
           __pp_r367____d1___result = -3.0L/128.0L*pow(x_0, 2)*x_1*x_2 + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/128.0L*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(x_0 - 4) - 1.0L/384.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 32);
           return __pp_r367____d1___result;
        }
        static inline double __pp_r368____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r368____d1___result;
           __pp_r368____d1___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r368____d1___result;
        }
        static inline double __pp_r369____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r369____d1___result;
           __pp_r369____d1___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) - 1.0L/64.0L*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16) + 1.0L/3.0L;
           return __pp_r369____d1___result;
        }
        static inline double __pp_r370____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r370____d1___result;
           __pp_r370____d1___result = (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/768.0L*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) - 1.0L/384.0L*pow(x_2, 3)*(x_1 + 2) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/128.0L*x_2*(4*pow(x_0, 2) + 16*x_0 + 2*pow(x_1, 2) + x_1*(pow(x_0, 2) + 4*x_0 + 16) + 32) + 1.0L/3.0L;
           return __pp_r370____d1___result;
        }
        static inline double __pp_r371____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r371____d1___result;
           __pp_r371____d1___result = (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16);
           return __pp_r371____d1___result;
        }
        static inline double __pp_r372____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r372____d1___result;
           __pp_r372____d1___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 24*x_0 - 48) + (1.0L/192.0L)*pow(x_2, 3)*(x_1 + 1) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 2*x_0*x_1 + 4*x_0 + pow(x_1, 2) + 8) + (1.0L/64.0L)*x_2*(pow(x_0, 2) + 4*x_0 + x_1*(pow(x_0, 2) + 4*x_0 + 4) + 4) + 1.0L/24.0L;
           return __pp_r372____d1___result;
        }
        static inline double __pp_r373____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r373____d1___result;
           __pp_r373____d1___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(-2*x_0 + x_1*(x_0 + 4) - 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 16*x_0 - x_1*(pow(x_0, 2) + 8*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r373____d1___result;
        }
        static inline double __pp_r374____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r374____d1___result;
           __pp_r374____d1___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/384.0L*pow(x_1, 4) + (1.0L/96.0L)*pow(x_1, 3) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) + 6*x_0 + 8) + (1.0L/384.0L)*x_1*pow(x_2, 3) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 24*x_0 - 48) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + x_0*x_1 + 4*x_0 + pow(x_1, 2) + 4) - 1.0L/128.0L*x_2*(2*pow(x_0, 2) + 8*x_0 + 2*pow(x_1, 2) - x_1*(pow(x_0, 2) + 4*x_0 + 8) + 8) - 1.0L/24.0L;
           return __pp_r374____d1___result;
        }
        static inline double __pp_r375____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r375____d1___result;
           __pp_r375____d1___result = (1.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(x_0 + 4) + (1.0L/128.0L)*x_1*x_2*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64);
           return __pp_r375____d1___result;
        }
        static inline double __pp_r376____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r376____d1___result;
           __pp_r376____d1___result = (1.0L/384.0L)*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(x_0 + 4) + (1.0L/128.0L)*x_1*x_2*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64);
           return __pp_r376____d1___result;
        }
        static inline double __pp_r377____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r377____d1___result;
           __pp_r377____d1___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/384.0L*pow(x_2, 3)*(x_1 - 2) + (1.0L/128.0L)*pow(x_2, 2)*(-2*x_0 + x_1*(x_0 + 4) - 8) + (1.0L/128.0L)*x_2*(2*pow(x_0, 2) + 16*x_0 - x_1*(pow(x_0, 2) + 8*x_0 + 16) + 32) - 1.0L/3.0L;
           return __pp_r377____d1___result;
        }
        static inline double __pp_r378____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r378____d1___result;
           __pp_r378____d1___result = -1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16);
           return __pp_r378____d1___result;
        }
        static inline double __pp_r379____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r379____d1___result;
           __pp_r379____d1___result = -1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16);
           return __pp_r379____d1___result;
        }
        static inline double __pp_r380____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r380____d1___result;
           __pp_r380____d1___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/768.0L)*pow(x_1, 4) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0) + (1.0L/384.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) + (1.0L/64.0L)*x_2*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) - 2*x_1*(x_0 + 4) + 16) - 1.0L/3.0L;
           return __pp_r380____d1___result;
        }
        static inline double __pp_r381____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r381____d1___result;
           __pp_r381____d1___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/768.0L*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*x_1*(pow(x_0, 3) - 24*x_0 - 48) + (1.0L/192.0L)*pow(x_2, 3)*(x_1 - 1) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 2*x_0*x_1 + 4*x_0 + pow(x_1, 2) + 8) - 1.0L/64.0L*x_2*(pow(x_0, 2) + 4*x_0 - x_1*(pow(x_0, 2) + 4*x_0 + 4) + 4) - 1.0L/24.0L;
           return __pp_r381____d1___result;
        }
        static inline double __pp_r382____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r382____d1___result;
           __pp_r382____d1___result = (1.0L/768.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 2*x_1*(x_0 + 4) + 16);
           return __pp_r382____d1___result;
        }
        static inline double __pp_r383____d1__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r383____d1___result;
           __pp_r383____d1___result = -1.0L/384.0L*x_1*pow(x_2, 3) - 1.0L/128.0L*x_1*pow(x_2, 2)*(x_0 + 4) - 1.0L/128.0L*x_1*x_2*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/384.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64);
           return __pp_r383____d1___result;
        }
        static inline double __pp_r384____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r384____d2___result;
           __pp_r384____d2___result = (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 64);
           return __pp_r384____d2___result;
        }
        static inline double __pp_r385____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r385____d2___result;
           __pp_r385____d2___result = (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 64);
           return __pp_r385____d2___result;
        }
        static inline double __pp_r386____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r386____d2___result;
           __pp_r386____d2___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 12*x_1*(x_0 - 4) - 64) - 1.0L/3.0L;
           return __pp_r386____d2___result;
        }
        static inline double __pp_r387____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r387____d2___result;
           __pp_r387____d2___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) - 4*x_0 + 4) + 48) - 1.0L/24.0L;
           return __pp_r387____d2___result;
        }
        static inline double __pp_r388____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r388____d2___result;
           __pp_r388____d2___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) + 12*x_1*(x_0 - 4) - 64) - 1.0L/3.0L;
           return __pp_r388____d2___result;
        }
        static inline double __pp_r389____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r389____d2___result;
           __pp_r389____d2___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) - 4*x_0 + 4) + 48) - 1.0L/24.0L;
           return __pp_r389____d2___result;
        }
        static inline double __pp_r390____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r390____d2___result;
           __pp_r390____d2___result = (1.0L/256.0L)*pow(x_1, 2)*(5*pow(x_0, 2) - 16*x_0 + 16) - 5.0L/768.0L*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(5*pow(x_0, 2) - 16*x_0 + 5*pow(x_1, 2) + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 64);
           return __pp_r390____d2___result;
        }
        static inline double __pp_r391____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r391____d2___result;
           __pp_r391____d2___result = (1.0L/96.0L)*pow(x_0, 3) + (1.0L/256.0L)*pow(x_0, 2)*pow(x_1, 2) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/8.0L)*x_0 - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/384.0L*x_2*(3*pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(3*x_0 - 4) + 32) - 1.0L/12.0L;
           return __pp_r391____d2___result;
        }
        static inline double __pp_r392____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r392____d2___result;
           __pp_r392____d2___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 4) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) - 6*x_0 + pow(x_1, 2) - 2*x_1 + 8) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 48) + 1.0L/24.0L;
           return __pp_r392____d2___result;
        }
        static inline double __pp_r393____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r393____d2___result;
           __pp_r393____d2___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/192.0L*pow(x_1, 3) - 1.0L/64.0L*pow(x_1, 2)*(x_0 - 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 1.0L/3.0L;
           return __pp_r393____d2___result;
        }
        static inline double __pp_r394____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r394____d2___result;
           __pp_r394____d2___result = (1.0L/48.0L)*pow(x_2, 3) - 1.0L/384.0L*x_2*(3*pow(x_0, 3) - 3*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) - pow(x_1, 3) + 3*pow(x_1, 2)*(3*x_0 - 4) + 32);
           return __pp_r394____d2___result;
        }
        static inline double __pp_r395____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r395____d2___result;
           __pp_r395____d2___result = (1.0L/48.0L)*pow(x_2, 3) + (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 5*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(5*pow(x_0, 2) - 16*x_0 + 16) - 64);
           return __pp_r395____d2___result;
        }
        static inline double __pp_r396____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r396____d2___result;
           __pp_r396____d2___result = (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64);
           return __pp_r396____d2___result;
        }
        static inline double __pp_r397____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r397____d2___result;
           __pp_r397____d2___result = (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64);
           return __pp_r397____d2___result;
        }
        static inline double __pp_r398____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r398____d2___result;
           __pp_r398____d2___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3) + (1.0L/64.0L)*pow(x_1, 2)*(x_0 - 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) - 1.0L/3.0L;
           return __pp_r398____d2___result;
        }
        static inline double __pp_r399____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r399____d2___result;
           __pp_r399____d2___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) - 6*x_0 + pow(x_1, 2) - 2*x_1 + 8) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 48) - 1.0L/24.0L;
           return __pp_r399____d2___result;
        }
        static inline double __pp_r400____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r400____d2___result;
           __pp_r400____d2___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 4*x_0 + 4) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) - 6*x_0 + pow(x_1, 2) + 2*x_1 + 8) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 48) + 1.0L/24.0L;
           return __pp_r400____d2___result;
        }
        static inline double __pp_r401____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r401____d2___result;
           __pp_r401____d2___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3) - 1.0L/64.0L*pow(x_1, 2)*(x_0 - 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 1.0L/3.0L;
           return __pp_r401____d2___result;
        }
        static inline double __pp_r402____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r402____d2___result;
           __pp_r402____d2___result = (1.0L/48.0L)*pow(x_2, 3) - 1.0L/384.0L*x_2*(3*pow(x_0, 3) + 3*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + pow(x_1, 3) + 3*pow(x_1, 2)*(3*x_0 - 4) + 32);
           return __pp_r402____d2___result;
        }
        static inline double __pp_r403____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r403____d2___result;
           __pp_r403____d2___result = (1.0L/48.0L)*pow(x_2, 3) + (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 5*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(5*pow(x_0, 2) - 16*x_0 + 16) - 64);
           return __pp_r403____d2___result;
        }
        static inline double __pp_r404____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r404____d2___result;
           __pp_r404____d2___result = (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64);
           return __pp_r404____d2___result;
        }
        static inline double __pp_r405____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r405____d2___result;
           __pp_r405____d2___result = (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64);
           return __pp_r405____d2___result;
        }
        static inline double __pp_r406____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r406____d2___result;
           __pp_r406____d2___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3) + (1.0L/64.0L)*pow(x_1, 2)*(x_0 - 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) - 1.0L/3.0L;
           return __pp_r406____d2___result;
        }
        static inline double __pp_r407____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r407____d2___result;
           __pp_r407____d2___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) - 6*x_0 + pow(x_1, 2) + 2*x_1 + 8) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 48) - 1.0L/24.0L;
           return __pp_r407____d2___result;
        }
        static inline double __pp_r408____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r408____d2___result;
           __pp_r408____d2___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 12*x_1*(x_0 - 4) - 64) + 1.0L/3.0L;
           return __pp_r408____d2___result;
        }
        static inline double __pp_r409____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r409____d2___result;
           __pp_r409____d2___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) + 12*x_1*(x_0 - 4) - 64) + 1.0L/3.0L;
           return __pp_r409____d2___result;
        }
        static inline double __pp_r410____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r410____d2___result;
           __pp_r410____d2___result = (1.0L/96.0L)*pow(x_0, 3) + (3.0L/256.0L)*pow(x_0, 2)*pow(x_1, 2) - 1.0L/8.0L*x_0 - 1.0L/256.0L*pow(x_2, 4) - 1.0L/24.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(3*pow(x_0, 2) - 8*x_0 + 3*pow(x_1, 2) - 32) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) - 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) - 32) + 1.0L/12.0L;
           return __pp_r410____d2___result;
        }
        static inline double __pp_r411____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r411____d2___result;
           __pp_r411____d2___result = (1.0L/96.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/64.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 2*x_0 - 2) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) - 2*x_0 - 4) + 48) + 5.0L/24.0L;
           return __pp_r411____d2___result;
        }
        static inline double __pp_r412____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r412____d2___result;
           __pp_r412____d2___result = (1.0L/96.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/64.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 2*x_0 - 2) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) - 2*x_0 - 4) + 48) + 5.0L/24.0L;
           return __pp_r412____d2___result;
        }
        static inline double __pp_r413____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r413____d2___result;
           __pp_r413____d2___result = (1.0L/96.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 - 4) + 128) + 1.0L/3.0L;
           return __pp_r413____d2___result;
        }
        static inline double __pp_r414____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r414____d2___result;
           __pp_r414____d2___result = (1.0L/96.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 - 4) + 128) + 1.0L/3.0L;
           return __pp_r414____d2___result;
        }
        static inline double __pp_r415____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r415____d2___result;
           __pp_r415____d2___result = (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 16*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/48.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 32) + (1.0L/384.0L)*x_2*(5*pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(5*x_0 - 4) - 64);
           return __pp_r415____d2___result;
        }
        static inline double __pp_r416____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r416____d2___result;
           __pp_r416____d2___result = -1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 64);
           return __pp_r416____d2___result;
        }
        static inline double __pp_r417____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r417____d2___result;
           __pp_r417____d2___result = -1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 64);
           return __pp_r417____d2___result;
        }
        static inline double __pp_r418____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r418____d2___result;
           __pp_r418____d2___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 4) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) - 4*x_0 + 4) + 48) + 1.0L/24.0L;
           return __pp_r418____d2___result;
        }
        static inline double __pp_r419____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r419____d2___result;
           __pp_r419____d2___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 12*x_1*(x_0 - 4) - 64) + 1.0L/3.0L;
           return __pp_r419____d2___result;
        }
        static inline double __pp_r420____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r420____d2___result;
           __pp_r420____d2___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/192.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 4*x_0 + 4) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) - 4*x_0 + 4) + 48) + 1.0L/24.0L;
           return __pp_r420____d2___result;
        }
        static inline double __pp_r421____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r421____d2___result;
           __pp_r421____d2___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) + 12*x_1*(x_0 - 4) - 64) + 1.0L/3.0L;
           return __pp_r421____d2___result;
        }
        static inline double __pp_r422____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r422____d2___result;
           __pp_r422____d2___result = -1.0L/96.0L*pow(x_0, 3) - 1.0L/256.0L*pow(x_0, 2)*pow(x_1, 2) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/8.0L*x_0 + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/384.0L*x_2*(3*pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(3*x_0 - 4) + 32) + 1.0L/12.0L;
           return __pp_r422____d2___result;
        }
        static inline double __pp_r423____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r423____d2___result;
           __pp_r423____d2___result = -1.0L/256.0L*pow(x_1, 2)*(5*pow(x_0, 2) - 16*x_0 + 16) + (5.0L/768.0L)*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(5*pow(x_0, 2) - 16*x_0 + 5*pow(x_1, 2) + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 64);
           return __pp_r423____d2___result;
        }
        static inline double __pp_r424____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r424____d2___result;
           __pp_r424____d2___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/192.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 4*x_0 + 8) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(-12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) - 64) + 1.0L/3.0L;
           return __pp_r424____d2___result;
        }
        static inline double __pp_r425____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r425____d2___result;
           __pp_r425____d2___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 4*x_0 - 4) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/384.0L)*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 8*x_0 - 8) - 48) + 1.0L/24.0L;
           return __pp_r425____d2___result;
        }
        static inline double __pp_r426____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r426____d2___result;
           __pp_r426____d2___result = -1.0L/256.0L*pow(x_0, 2)*pow(x_1, 2) + (1.0L/32.0L)*pow(x_0, 2)*x_1 - 1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/384.0L)*x_2*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) - 64);
           return __pp_r426____d2___result;
        }
        static inline double __pp_r427____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r427____d2___result;
           __pp_r427____d2___result = -1.0L/256.0L*pow(x_0, 2)*pow(x_1, 2) + (1.0L/32.0L)*pow(x_0, 2)*x_1 - 1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/384.0L)*x_2*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) - 64);
           return __pp_r427____d2___result;
        }
        static inline double __pp_r428____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r428____d2___result;
           __pp_r428____d2___result = -5.0L/256.0L*pow(x_0, 2)*pow(x_1, 2) + (1.0L/16.0L)*pow(x_0, 2)*x_1 - 1.0L/16.0L*pow(x_0, 2) + (5.0L/768.0L)*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(5*pow(x_0, 2) + 5*pow(x_1, 2) - 16*x_1 + 16) + (1.0L/384.0L)*x_2*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) - 64);
           return __pp_r428____d2___result;
        }
        static inline double __pp_r429____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r429____d2___result;
           __pp_r429____d2___result = -1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 16) - 1.0L/8.0L*x_1 + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/384.0L*x_2*(9*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + 3*pow(x_1, 3) - 12*pow(x_1, 2) + 32) + 1.0L/12.0L;
           return __pp_r429____d2___result;
        }
        static inline double __pp_r430____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r430____d2___result;
           __pp_r430____d2___result = (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) - 1.0L/32.0L*x_1*(pow(x_0, 2) + 4*x_0 + 8) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(-12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) - 64) + 1.0L/3.0L;
           return __pp_r430____d2___result;
        }
        static inline double __pp_r431____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r431____d2___result;
           __pp_r431____d2___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/192.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 4*x_0 - 4) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/384.0L*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 8*x_0 - 8) + 48) + 1.0L/24.0L;
           return __pp_r431____d2___result;
        }
        static inline double __pp_r432____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r432____d2___result;
           __pp_r432____d2___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/192.0L*pow(x_1, 3) - 1.0L/64.0L*pow(x_1, 2)*(x_0 - 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 1.0L/3.0L;
           return __pp_r432____d2___result;
        }
        static inline double __pp_r433____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r433____d2___result;
           __pp_r433____d2___result = (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) - 2*x_0 - 4) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 2*x_0 - 2) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) - 2*x_0 + pow(x_1, 2) - 6*x_1 + 8) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) - 1.0L/24.0L;
           return __pp_r433____d2___result;
        }
        static inline double __pp_r434____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r434____d2___result;
           __pp_r434____d2___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3) + (1.0L/64.0L)*pow(x_1, 2)*(x_0 - 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) - 1.0L/3.0L;
           return __pp_r434____d2___result;
        }
        static inline double __pp_r435____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r435____d2___result;
           __pp_r435____d2___result = (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64);
           return __pp_r435____d2___result;
        }
        static inline double __pp_r436____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r436____d2___result;
           __pp_r436____d2___result = (1.0L/48.0L)*pow(x_2, 3) + (1.0L/384.0L)*x_2*(pow(x_0, 3) - 9*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) - 3*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 32);
           return __pp_r436____d2___result;
        }
        static inline double __pp_r437____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r437____d2___result;
           __pp_r437____d2___result = -1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) - 2*x_0 - 4) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 2*x_0 - 2) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) - 2*x_0 + pow(x_1, 2) - 6*x_1 + 8) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) + 1.0L/24.0L;
           return __pp_r437____d2___result;
        }
        static inline double __pp_r438____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r438____d2___result;
           __pp_r438____d2___result = (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64);
           return __pp_r438____d2___result;
        }
        static inline double __pp_r439____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r439____d2___result;
           __pp_r439____d2___result = (1.0L/48.0L)*pow(x_2, 3) + (1.0L/384.0L)*x_2*(5*pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(5*x_0 - 4) + 3*x_1*(pow(x_0, 2) - 16*x_0 + 16) - 64);
           return __pp_r439____d2___result;
        }
        static inline double __pp_r440____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r440____d2___result;
           __pp_r440____d2___result = (1.0L/32.0L)*pow(x_0, 2)*x_1 - 1.0L/16.0L*pow(x_0, 2) + (1.0L/96.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/768.0L)*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/384.0L)*x_2*(3*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 128) + 1.0L/3.0L;
           return __pp_r440____d2___result;
        }
        static inline double __pp_r441____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r441____d2___result;
           __pp_r441____d2___result = (1.0L/32.0L)*pow(x_0, 2)*x_1 - 1.0L/16.0L*pow(x_0, 2) + (1.0L/96.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/768.0L)*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/384.0L)*x_2*(3*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 128) + 1.0L/3.0L;
           return __pp_r441____d2___result;
        }
        static inline double __pp_r442____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r442____d2___result;
           __pp_r442____d2___result = -1.0L/64.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/96.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 4*x_0 - 4) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) + 5.0L/24.0L;
           return __pp_r442____d2___result;
        }
        static inline double __pp_r443____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r443____d2___result;
           __pp_r443____d2___result = (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) - 1.0L/32.0L*x_1*(pow(x_0, 2) + 4*x_0 + 8) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(-12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) - 64) + 1.0L/3.0L;
           return __pp_r443____d2___result;
        }
        static inline double __pp_r444____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r444____d2___result;
           __pp_r444____d2___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/192.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 4*x_0 + 8) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(-12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) - 64) + 1.0L/3.0L;
           return __pp_r444____d2___result;
        }
        static inline double __pp_r445____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r445____d2___result;
           __pp_r445____d2___result = (1.0L/64.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/96.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 4*x_0 - 4) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/384.0L)*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) + 5.0L/24.0L;
           return __pp_r445____d2___result;
        }
        static inline double __pp_r446____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r446____d2___result;
           __pp_r446____d2___result = (1.0L/16.0L)*pow(x_0, 2)*x_1 - 1.0L/16.0L*pow(x_0, 2) + (1.0L/48.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/48.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 32) + (1.0L/384.0L)*x_2*(15*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + 5*pow(x_1, 3) - 12*pow(x_1, 2) - 64);
           return __pp_r446____d2___result;
        }
        static inline double __pp_r447____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r447____d2___result;
           __pp_r447____d2___result = (3.0L/256.0L)*pow(x_0, 2)*pow(x_1, 2) + (1.0L/96.0L)*pow(x_1, 3) - 1.0L/8.0L*x_1 - 1.0L/256.0L*pow(x_2, 4) - 1.0L/24.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(3*pow(x_0, 2) + 3*pow(x_1, 2) - 8*x_1 - 32) + (1.0L/384.0L)*x_2*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 16) - 32) + 1.0L/12.0L;
           return __pp_r447____d2___result;
        }
        static inline double __pp_r448____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r448____d2___result;
           __pp_r448____d2___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 12*x_1*(x_0 - 4) - 64) - 1.0L/3.0L;
           return __pp_r448____d2___result;
        }
        static inline double __pp_r449____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r449____d2___result;
           __pp_r449____d2___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 8) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(-12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) - 64) - 1.0L/3.0L;
           return __pp_r449____d2___result;
        }
        static inline double __pp_r450____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r450____d2___result;
           __pp_r450____d2___result = -1.0L/96.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 - 4) + 128) - 1.0L/3.0L;
           return __pp_r450____d2___result;
        }
        static inline double __pp_r451____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r451____d2___result;
           __pp_r451____d2___result = -1.0L/96.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/64.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 2*x_0 - 2) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) - 2*x_0 - 4) + 48) - 5.0L/24.0L;
           return __pp_r451____d2___result;
        }
        static inline double __pp_r452____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r452____d2___result;
           __pp_r452____d2___result = -3.0L/256.0L*pow(x_0, 2)*pow(x_1, 2) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/8.0L)*x_1 + (1.0L/256.0L)*pow(x_2, 4) - 1.0L/24.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(3*pow(x_0, 2) + 3*pow(x_1, 2) - 8*x_1 - 32) + (1.0L/384.0L)*x_2*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 16) - 32) - 1.0L/12.0L;
           return __pp_r452____d2___result;
        }
        static inline double __pp_r453____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r453____d2___result;
           __pp_r453____d2___result = -1.0L/64.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 4*x_0 - 4) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/384.0L)*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) - 5.0L/24.0L;
           return __pp_r453____d2___result;
        }
        static inline double __pp_r454____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r454____d2___result;
           __pp_r454____d2___result = -1.0L/96.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 - 4) + 128) - 1.0L/3.0L;
           return __pp_r454____d2___result;
        }
        static inline double __pp_r455____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r455____d2___result;
           __pp_r455____d2___result = -1.0L/32.0L*pow(x_0, 2)*x_1 + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/384.0L)*x_2*(3*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 128) - 1.0L/3.0L;
           return __pp_r455____d2___result;
        }
        static inline double __pp_r456____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r456____d2___result;
           __pp_r456____d2___result = (1.0L/64.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 4*x_0 - 4) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) - 5.0L/24.0L;
           return __pp_r456____d2___result;
        }
        static inline double __pp_r457____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r457____d2___result;
           __pp_r457____d2___result = -1.0L/32.0L*pow(x_0, 2)*x_1 + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/384.0L)*x_2*(3*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 128) - 1.0L/3.0L;
           return __pp_r457____d2___result;
        }
        static inline double __pp_r458____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r458____d2___result;
           __pp_r458____d2___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 4*x_0 - 4) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/384.0L)*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 8*x_0 - 8) - 48) - 1.0L/24.0L;
           return __pp_r458____d2___result;
        }
        static inline double __pp_r459____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r459____d2___result;
           __pp_r459____d2___result = (1.0L/96.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 16) + (1.0L/8.0L)*x_1 - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/384.0L*x_2*(9*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + 3*pow(x_1, 3) - 12*pow(x_1, 2) + 32) - 1.0L/12.0L;
           return __pp_r459____d2___result;
        }
        static inline double __pp_r460____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r460____d2___result;
           __pp_r460____d2___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 8) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(-12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) - 64) - 1.0L/3.0L;
           return __pp_r460____d2___result;
        }
        static inline double __pp_r461____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r461____d2___result;
           __pp_r461____d2___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) + 12*x_1*(x_0 - 4) - 64) - 1.0L/3.0L;
           return __pp_r461____d2___result;
        }
        static inline double __pp_r462____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r462____d2___result;
           __pp_r462____d2___result = -1.0L/96.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/64.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 2*x_0 - 2) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) - 2*x_0 - 4) + 48) - 5.0L/24.0L;
           return __pp_r462____d2___result;
        }
        static inline double __pp_r463____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r463____d2___result;
           __pp_r463____d2___result = -1.0L/48.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 16*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/48.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 32) + (1.0L/384.0L)*x_2*(5*pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(5*x_0 - 4) - 64);
           return __pp_r463____d2___result;
        }
        static inline double __pp_r464____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r464____d2___result;
           __pp_r464____d2___result = -1.0L/96.0L*pow(x_0, 3) - 3.0L/256.0L*pow(x_0, 2)*pow(x_1, 2) + (1.0L/8.0L)*x_0 + (1.0L/256.0L)*pow(x_2, 4) - 1.0L/24.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(3*pow(x_0, 2) - 8*x_0 + 3*pow(x_1, 2) - 32) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) - 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) - 32) - 1.0L/12.0L;
           return __pp_r464____d2___result;
        }
        static inline double __pp_r465____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r465____d2___result;
           __pp_r465____d2___result = -1.0L/16.0L*pow(x_0, 2)*x_1 + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/48.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/48.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 32) + (1.0L/384.0L)*x_2*(15*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + 5*pow(x_1, 3) - 12*pow(x_1, 2) - 64);
           return __pp_r465____d2___result;
        }
        static inline double __pp_r466____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r466____d2___result;
           __pp_r466____d2___result = (1.0L/48.0L)*pow(x_2, 3) - 1.0L/384.0L*x_2*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(5*x_0 + 4) - 3*x_1*(pow(x_0, 2) + 16*x_0 + 16) + 64);
           return __pp_r466____d2___result;
        }
        static inline double __pp_r467____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r467____d2___result;
           __pp_r467____d2___result = (5.0L/256.0L)*pow(x_0, 2)*pow(x_1, 2) - 1.0L/16.0L*pow(x_0, 2)*x_1 + (1.0L/16.0L)*pow(x_0, 2) - 5.0L/768.0L*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(5*pow(x_0, 2) + 5*pow(x_1, 2) - 16*x_1 + 16) + (1.0L/384.0L)*x_2*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) - 64);
           return __pp_r467____d2___result;
        }
        static inline double __pp_r468____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r468____d2___result;
           __pp_r468____d2___result = (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) + 2*x_0 - 4) - 1.0L/32.0L*x_1*(pow(x_0, 2) + 2*x_0 - 2) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + 2*x_0 + pow(x_1, 2) - 6*x_1 + 8) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) - 1.0L/24.0L;
           return __pp_r468____d2___result;
        }
        static inline double __pp_r469____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r469____d2___result;
           __pp_r469____d2___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3) - 1.0L/64.0L*pow(x_1, 2)*(x_0 + 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) - 1.0L/3.0L;
           return __pp_r469____d2___result;
        }
        static inline double __pp_r470____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r470____d2___result;
           __pp_r470____d2___result = (1.0L/256.0L)*pow(x_0, 2)*pow(x_1, 2) - 1.0L/32.0L*pow(x_0, 2)*x_1 + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/384.0L)*x_2*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) - 64);
           return __pp_r470____d2___result;
        }
        static inline double __pp_r471____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r471____d2___result;
           __pp_r471____d2___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 4*x_0 - 4) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/384.0L*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 8*x_0 - 8) + 48) - 1.0L/24.0L;
           return __pp_r471____d2___result;
        }
        static inline double __pp_r472____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r472____d2___result;
           __pp_r472____d2___result = -1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) + (1.0L/32.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 8) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(-12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) - 64) - 1.0L/3.0L;
           return __pp_r472____d2___result;
        }
        static inline double __pp_r473____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r473____d2___result;
           __pp_r473____d2___result = -1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) + (1.0L/32.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 8) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(-12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) - 64) - 1.0L/3.0L;
           return __pp_r473____d2___result;
        }
        static inline double __pp_r474____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r474____d2___result;
           __pp_r474____d2___result = -1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64);
           return __pp_r474____d2___result;
        }
        static inline double __pp_r475____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r475____d2___result;
           __pp_r475____d2___result = -1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64);
           return __pp_r475____d2___result;
        }
        static inline double __pp_r476____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r476____d2___result;
           __pp_r476____d2___result = (1.0L/256.0L)*pow(x_0, 2)*pow(x_1, 2) - 1.0L/32.0L*pow(x_0, 2)*x_1 + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/384.0L)*x_2*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) - 64);
           return __pp_r476____d2___result;
        }
        static inline double __pp_r477____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r477____d2___result;
           __pp_r477____d2___result = (1.0L/48.0L)*pow(x_2, 3) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 9*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + 3*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 32);
           return __pp_r477____d2___result;
        }
        static inline double __pp_r478____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r478____d2___result;
           __pp_r478____d2___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3) + (1.0L/64.0L)*pow(x_1, 2)*(x_0 + 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 1.0L/3.0L;
           return __pp_r478____d2___result;
        }
        static inline double __pp_r479____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r479____d2___result;
           __pp_r479____d2___result = -1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/192.0L*pow(x_1, 3) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) + 2*x_0 - 4) + (1.0L/32.0L)*x_1*(pow(x_0, 2) + 2*x_0 - 2) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + 2*x_0 + pow(x_1, 2) - 6*x_1 + 8) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) + 1.0L/24.0L;
           return __pp_r479____d2___result;
        }
        static inline double __pp_r480____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r480____d2___result;
           __pp_r480____d2___result = (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/192.0L*pow(x_1, 3) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) - 2*x_0 - 4) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 2*x_0 - 2) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) - 2*x_0 + pow(x_1, 2) + 6*x_1 + 8) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) - 1.0L/24.0L;
           return __pp_r480____d2___result;
        }
        static inline double __pp_r481____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r481____d2___result;
           __pp_r481____d2___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/192.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 4*x_0 - 4) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/384.0L)*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 8*x_0 - 8) - 48) - 1.0L/24.0L;
           return __pp_r481____d2___result;
        }
        static inline double __pp_r482____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r482____d2___result;
           __pp_r482____d2___result = -3.0L/256.0L*pow(x_0, 2)*pow(x_1, 2) + (1.0L/96.0L)*pow(x_1, 3) - 1.0L/8.0L*x_1 + (1.0L/256.0L)*pow(x_2, 4) - 1.0L/24.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(3*pow(x_0, 2) + 3*pow(x_1, 2) + 8*x_1 - 32) - 1.0L/384.0L*x_2*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 16) + 32) - 1.0L/12.0L;
           return __pp_r482____d2___result;
        }
        static inline double __pp_r483____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r483____d2___result;
           __pp_r483____d2___result = -1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 16) - 1.0L/8.0L*x_1 - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/384.0L)*x_2*(9*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + 3*pow(x_1, 3) + 12*pow(x_1, 2) - 32) - 1.0L/12.0L;
           return __pp_r483____d2___result;
        }
        static inline double __pp_r484____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r484____d2___result;
           __pp_r484____d2___result = (1.0L/256.0L)*pow(x_0, 2)*pow(x_1, 2) + (1.0L/32.0L)*pow(x_0, 2)*x_1 + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/384.0L*x_2*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) + 64);
           return __pp_r484____d2___result;
        }
        static inline double __pp_r485____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r485____d2___result;
           __pp_r485____d2___result = (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3) + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) + 2*x_0 - 4) + (1.0L/32.0L)*x_1*(pow(x_0, 2) + 2*x_0 - 2) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + 2*x_0 + pow(x_1, 2) + 6*x_1 + 8) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) - 1.0L/24.0L;
           return __pp_r485____d2___result;
        }
        static inline double __pp_r486____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r486____d2___result;
           __pp_r486____d2___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 4*x_0 - 4) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/384.0L*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 8*x_0 - 8) + 48) - 1.0L/24.0L;
           return __pp_r486____d2___result;
        }
        static inline double __pp_r487____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r487____d2___result;
           __pp_r487____d2___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3) + (1.0L/64.0L)*pow(x_1, 2)*(x_0 - 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) - 1.0L/3.0L;
           return __pp_r487____d2___result;
        }
        static inline double __pp_r488____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r488____d2___result;
           __pp_r488____d2___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 4*x_0 + 8) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) + 64) - 1.0L/3.0L;
           return __pp_r488____d2___result;
        }
        static inline double __pp_r489____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r489____d2___result;
           __pp_r489____d2___result = -1.0L/16.0L*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 4*x_0 + 8) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) + 64) - 1.0L/3.0L;
           return __pp_r489____d2___result;
        }
        static inline double __pp_r490____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r490____d2___result;
           __pp_r490____d2___result = -1.0L/64.0L*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/96.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 4*x_0 - 4) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) - 5.0L/24.0L;
           return __pp_r490____d2___result;
        }
        static inline double __pp_r491____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r491____d2___result;
           __pp_r491____d2___result = -5.0L/256.0L*pow(x_0, 2)*pow(x_1, 2) - 1.0L/16.0L*pow(x_0, 2)*x_1 - 1.0L/16.0L*pow(x_0, 2) + (5.0L/768.0L)*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(5*pow(x_0, 2) + 5*pow(x_1, 2) + 16*x_1 + 16) - 1.0L/384.0L*x_2*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) + 64);
           return __pp_r491____d2___result;
        }
        static inline double __pp_r492____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r492____d2___result;
           __pp_r492____d2___result = -1.0L/16.0L*pow(x_0, 2)*x_1 - 1.0L/16.0L*pow(x_0, 2) - 1.0L/48.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/48.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 32) - 1.0L/384.0L*x_2*(15*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + 5*pow(x_1, 3) + 12*pow(x_1, 2) + 64);
           return __pp_r492____d2___result;
        }
        static inline double __pp_r493____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r493____d2___result;
           __pp_r493____d2___result = (1.0L/48.0L)*pow(x_2, 3) - 1.0L/384.0L*x_2*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(5*x_0 + 4) + 3*x_1*(pow(x_0, 2) + 16*x_0 + 16) + 64);
           return __pp_r493____d2___result;
        }
        static inline double __pp_r494____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r494____d2___result;
           __pp_r494____d2___result = (1.0L/48.0L)*pow(x_2, 3) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 9*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) - 3*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 32);
           return __pp_r494____d2___result;
        }
        static inline double __pp_r495____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r495____d2___result;
           __pp_r495____d2___result = (1.0L/48.0L)*pow(x_2, 3) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 9*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + 3*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 32);
           return __pp_r495____d2___result;
        }
        static inline double __pp_r496____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r496____d2___result;
           __pp_r496____d2___result = (1.0L/48.0L)*pow(x_2, 3) + (1.0L/384.0L)*x_2*(5*pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(5*x_0 - 4) - 3*x_1*(pow(x_0, 2) - 16*x_0 + 16) - 64);
           return __pp_r496____d2___result;
        }
        static inline double __pp_r497____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r497____d2___result;
           __pp_r497____d2___result = (1.0L/16.0L)*pow(x_0, 2)*x_1 + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/48.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/48.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 32) - 1.0L/384.0L*x_2*(15*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + 5*pow(x_1, 3) + 12*pow(x_1, 2) + 64);
           return __pp_r497____d2___result;
        }
        static inline double __pp_r498____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r498____d2___result;
           __pp_r498____d2___result = (5.0L/256.0L)*pow(x_0, 2)*pow(x_1, 2) + (1.0L/16.0L)*pow(x_0, 2)*x_1 + (1.0L/16.0L)*pow(x_0, 2) - 5.0L/768.0L*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(5*pow(x_0, 2) + 5*pow(x_1, 2) + 16*x_1 + 16) - 1.0L/384.0L*x_2*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) + 64);
           return __pp_r498____d2___result;
        }
        static inline double __pp_r499____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r499____d2___result;
           __pp_r499____d2___result = -1.0L/256.0L*pow(x_0, 2)*pow(x_1, 2) - 1.0L/32.0L*pow(x_0, 2)*x_1 - 1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/384.0L*x_2*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) + 64);
           return __pp_r499____d2___result;
        }
        static inline double __pp_r500____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r500____d2___result;
           __pp_r500____d2___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 8) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) + 64) + 1.0L/3.0L;
           return __pp_r500____d2___result;
        }
        static inline double __pp_r501____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r501____d2___result;
           __pp_r501____d2___result = (1.0L/192.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 4*x_0 - 4) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/384.0L)*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 8*x_0 - 8) - 48) + 1.0L/24.0L;
           return __pp_r501____d2___result;
        }
        static inline double __pp_r502____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r502____d2___result;
           __pp_r502____d2___result = -1.0L/256.0L*pow(x_0, 2)*pow(x_1, 2) - 1.0L/32.0L*pow(x_0, 2)*x_1 - 1.0L/16.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/384.0L*x_2*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) + 64);
           return __pp_r502____d2___result;
        }
        static inline double __pp_r503____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r503____d2___result;
           __pp_r503____d2___result = (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) + (1.0L/32.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 8) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) + 64) + 1.0L/3.0L;
           return __pp_r503____d2___result;
        }
        static inline double __pp_r504____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r504____d2___result;
           __pp_r504____d2___result = (1.0L/96.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 16) + (1.0L/8.0L)*x_1 + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/384.0L)*x_2*(9*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + 3*pow(x_1, 3) + 12*pow(x_1, 2) - 32) + 1.0L/12.0L;
           return __pp_r504____d2___result;
        }
        static inline double __pp_r505____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r505____d2___result;
           __pp_r505____d2___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 4*x_0 - 4) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/384.0L*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 8*x_0 - 8) + 48) + 1.0L/24.0L;
           return __pp_r505____d2___result;
        }
        static inline double __pp_r506____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r506____d2___result;
           __pp_r506____d2___result = -1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64);
           return __pp_r506____d2___result;
        }
        static inline double __pp_r507____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r507____d2___result;
           __pp_r507____d2___result = -1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64);
           return __pp_r507____d2___result;
        }
        static inline double __pp_r508____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r508____d2___result;
           __pp_r508____d2___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3) + (1.0L/64.0L)*pow(x_1, 2)*(x_0 + 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 1.0L/3.0L;
           return __pp_r508____d2___result;
        }
        static inline double __pp_r509____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r509____d2___result;
           __pp_r509____d2___result = -1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) + 2*x_0 - 4) - 1.0L/32.0L*x_1*(pow(x_0, 2) + 2*x_0 - 2) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + 2*x_0 + pow(x_1, 2) + 6*x_1 + 8) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) + 1.0L/24.0L;
           return __pp_r509____d2___result;
        }
        static inline double __pp_r510____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r510____d2___result;
           __pp_r510____d2___result = -1.0L/192.0L*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3) - 1.0L/64.0L*pow(x_1, 2)*(x_0 - 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 1.0L/3.0L;
           return __pp_r510____d2___result;
        }
        static inline double __pp_r511____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r511____d2___result;
           __pp_r511____d2___result = (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64);
           return __pp_r511____d2___result;
        }
        static inline double __pp_r512____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r512____d2___result;
           __pp_r512____d2___result = -1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3) - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) - 2*x_0 - 4) - 1.0L/32.0L*x_1*(pow(x_0, 2) - 2*x_0 - 2) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) - 2*x_0 + pow(x_1, 2) + 6*x_1 + 8) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) + 1.0L/24.0L;
           return __pp_r512____d2___result;
        }
        static inline double __pp_r513____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r513____d2___result;
           __pp_r513____d2___result = (1.0L/384.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64);
           return __pp_r513____d2___result;
        }
        static inline double __pp_r514____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r514____d2___result;
           __pp_r514____d2___result = (1.0L/256.0L)*pow(x_0, 2)*pow(x_1, 2) + (1.0L/32.0L)*pow(x_0, 2)*x_1 + (1.0L/16.0L)*pow(x_0, 2) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/384.0L*x_2*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) + 64);
           return __pp_r514____d2___result;
        }
        static inline double __pp_r515____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r515____d2___result;
           __pp_r515____d2___result = -1.0L/32.0L*pow(x_0, 2)*x_1 - 1.0L/16.0L*pow(x_0, 2) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/768.0L)*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/384.0L*x_2*(3*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) - 128) + 1.0L/3.0L;
           return __pp_r515____d2___result;
        }
        static inline double __pp_r516____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r516____d2___result;
           __pp_r516____d2___result = -1.0L/32.0L*pow(x_0, 2)*x_1 - 1.0L/16.0L*pow(x_0, 2) - 1.0L/96.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16) + (1.0L/768.0L)*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/384.0L*x_2*(3*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) - 128) + 1.0L/3.0L;
           return __pp_r516____d2___result;
        }
        static inline double __pp_r517____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r517____d2___result;
           __pp_r517____d2___result = -1.0L/64.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 4*x_0 - 4) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/384.0L*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) + 5.0L/24.0L;
           return __pp_r517____d2___result;
        }
        static inline double __pp_r518____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r518____d2___result;
           __pp_r518____d2___result = (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) + (1.0L/32.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 8) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) + 64) + 1.0L/3.0L;
           return __pp_r518____d2___result;
        }
        static inline double __pp_r519____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r519____d2___result;
           __pp_r519____d2___result = (1.0L/16.0L)*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) + (1.0L/32.0L)*x_1*(pow(x_0, 2) - 4*x_0 + 8) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) + 64) + 1.0L/3.0L;
           return __pp_r519____d2___result;
        }
        static inline double __pp_r520____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r520____d2___result;
           __pp_r520____d2___result = (1.0L/64.0L)*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/96.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 - 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) - 4*x_0 - 4) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) + 5.0L/24.0L;
           return __pp_r520____d2___result;
        }
        static inline double __pp_r521____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r521____d2___result;
           __pp_r521____d2___result = (3.0L/256.0L)*pow(x_0, 2)*pow(x_1, 2) - 1.0L/96.0L*pow(x_1, 3) + (1.0L/8.0L)*x_1 - 1.0L/256.0L*pow(x_2, 4) - 1.0L/24.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(3*pow(x_0, 2) + 3*pow(x_1, 2) + 8*x_1 - 32) - 1.0L/384.0L*x_2*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 16) + 32) + 1.0L/12.0L;
           return __pp_r521____d2___result;
        }
        static inline double __pp_r522____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r522____d2___result;
           __pp_r522____d2___result = -1.0L/96.0L*pow(x_0, 3) + (3.0L/256.0L)*pow(x_0, 2)*pow(x_1, 2) + (1.0L/8.0L)*x_0 - 1.0L/256.0L*pow(x_2, 4) - 1.0L/24.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(3*pow(x_0, 2) + 8*x_0 + 3*pow(x_1, 2) - 32) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) - 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) + 32) + 1.0L/12.0L;
           return __pp_r522____d2___result;
        }
        static inline double __pp_r523____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r523____d2___result;
           __pp_r523____d2___result = (1.0L/96.0L)*pow(x_0, 3) - 1.0L/256.0L*pow(x_0, 2)*pow(x_1, 2) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/8.0L)*x_0 + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + (1.0L/384.0L)*x_2*(3*pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(3*x_0 + 4) - 32) + 1.0L/12.0L;
           return __pp_r523____d2___result;
        }
        static inline double __pp_r524____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r524____d2___result;
           __pp_r524____d2___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 4) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + 6*x_0 + pow(x_1, 2) - 2*x_1 + 8) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 8) - 48) + 1.0L/24.0L;
           return __pp_r524____d2___result;
        }
        static inline double __pp_r525____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r525____d2___result;
           __pp_r525____d2___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 4) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 48) + 1.0L/24.0L;
           return __pp_r525____d2___result;
        }
        static inline double __pp_r526____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r526____d2___result;
           __pp_r526____d2___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/128.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 4*x_0 + 4) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) - 1.0L/128.0L*pow(x_2, 2)*(pow(x_0, 2) + 6*x_0 + pow(x_1, 2) + 2*x_1 + 8) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 4*x_0 + 8) - 48) + 1.0L/24.0L;
           return __pp_r526____d2___result;
        }
        static inline double __pp_r527____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r527____d2___result;
           __pp_r527____d2___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 4*x_0 + 4) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 48) + 1.0L/24.0L;
           return __pp_r527____d2___result;
        }
        static inline double __pp_r528____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r528____d2___result;
           __pp_r528____d2___result = -1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 64);
           return __pp_r528____d2___result;
        }
        static inline double __pp_r529____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r529____d2___result;
           __pp_r529____d2___result = -1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 16*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/48.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 32) - 1.0L/384.0L*x_2*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(5*x_0 + 4) + 64);
           return __pp_r529____d2___result;
        }
        static inline double __pp_r530____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r530____d2___result;
           __pp_r530____d2___result = (1.0L/256.0L)*pow(x_1, 2)*(5*pow(x_0, 2) + 16*x_0 + 16) - 5.0L/768.0L*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(5*pow(x_0, 2) + 16*x_0 + 5*pow(x_1, 2) + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 64);
           return __pp_r530____d2___result;
        }
        static inline double __pp_r531____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r531____d2___result;
           __pp_r531____d2___result = (1.0L/48.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/48.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) + 32) - 1.0L/384.0L*x_2*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(5*x_0 + 4) + 64);
           return __pp_r531____d2___result;
        }
        static inline double __pp_r532____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r532____d2___result;
           __pp_r532____d2___result = (1.0L/48.0L)*pow(x_2, 3) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - 5*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(5*pow(x_0, 2) + 16*x_0 + 16) + 64);
           return __pp_r532____d2___result;
        }
        static inline double __pp_r533____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r533____d2___result;
           __pp_r533____d2___result = (1.0L/48.0L)*pow(x_2, 3) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 5*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(5*pow(x_0, 2) + 16*x_0 + 16) + 64);
           return __pp_r533____d2___result;
        }
        static inline double __pp_r534____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r534____d2___result;
           __pp_r534____d2___result = -1.0L/256.0L*pow(x_1, 2)*(5*pow(x_0, 2) + 16*x_0 + 16) + (5.0L/768.0L)*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(5*pow(x_0, 2) + 16*x_0 + 5*pow(x_1, 2) + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 64);
           return __pp_r534____d2___result;
        }
        static inline double __pp_r535____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r535____d2___result;
           __pp_r535____d2___result = (1.0L/48.0L)*pow(x_2, 3) + (1.0L/384.0L)*x_2*(3*pow(x_0, 3) + 3*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + pow(x_1, 3) + 3*pow(x_1, 2)*(3*x_0 + 4) - 32);
           return __pp_r535____d2___result;
        }
        static inline double __pp_r536____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r536____d2___result;
           __pp_r536____d2___result = (1.0L/48.0L)*pow(x_2, 3) + (1.0L/384.0L)*x_2*(3*pow(x_0, 3) - 3*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) - pow(x_1, 3) + 3*pow(x_1, 2)*(3*x_0 + 4) - 32);
           return __pp_r536____d2___result;
        }
        static inline double __pp_r537____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r537____d2___result;
           __pp_r537____d2___result = -1.0L/96.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 + (1.0L/64.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) + (1.0L/32.0L)*x_1*(pow(x_0, 2) + 2*x_0 - 2) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) + 2*x_0 - 4) - 48) + 5.0L/24.0L;
           return __pp_r537____d2___result;
        }
        static inline double __pp_r538____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r538____d2___result;
           __pp_r538____d2___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) - 12*x_1*(x_0 + 4) + 64) + 1.0L/3.0L;
           return __pp_r538____d2___result;
        }
        static inline double __pp_r539____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r539____d2___result;
           __pp_r539____d2___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 - 1.0L/192.0L*pow(x_1, 3) + (1.0L/64.0L)*pow(x_1, 2)*(x_0 + 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 1.0L/3.0L;
           return __pp_r539____d2___result;
        }
        static inline double __pp_r540____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r540____d2___result;
           __pp_r540____d2___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) - 12*x_1*(x_0 + 4) + 64) + 1.0L/3.0L;
           return __pp_r540____d2___result;
        }
        static inline double __pp_r541____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r541____d2___result;
           __pp_r541____d2___result = -1.0L/96.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) + (1.0L/16.0L)*x_0 - 1.0L/64.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) - 1.0L/32.0L*x_1*(pow(x_0, 2) + 2*x_0 - 2) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) + 2*x_0 - 4) - 48) + 5.0L/24.0L;
           return __pp_r541____d2___result;
        }
        static inline double __pp_r542____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r542____d2___result;
           __pp_r542____d2___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 12*x_1*(x_0 + 4) + 64) + 1.0L/3.0L;
           return __pp_r542____d2___result;
        }
        static inline double __pp_r543____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r543____d2___result;
           __pp_r543____d2___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 3) + (1.0L/64.0L)*pow(x_1, 2)*(x_0 + 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 1.0L/3.0L;
           return __pp_r543____d2___result;
        }
        static inline double __pp_r544____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r544____d2___result;
           __pp_r544____d2___result = (1.0L/192.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/4.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 12*x_1*(x_0 + 4) + 64) + 1.0L/3.0L;
           return __pp_r544____d2___result;
        }
        static inline double __pp_r545____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r545____d2___result;
           __pp_r545____d2___result = -1.0L/96.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 + 4) - 128) + 1.0L/3.0L;
           return __pp_r545____d2___result;
        }
        static inline double __pp_r546____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r546____d2___result;
           __pp_r546____d2___result = -1.0L/96.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 + 4) - 128) + 1.0L/3.0L;
           return __pp_r546____d2___result;
        }
        static inline double __pp_r547____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r547____d2___result;
           __pp_r547____d2___result = (1.0L/64.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/96.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 - 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 4*x_0 - 4) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/384.0L*x_2*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) - 5.0L/24.0L;
           return __pp_r547____d2___result;
        }
        static inline double __pp_r548____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r548____d2___result;
           __pp_r548____d2___result = (1.0L/96.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 + 4) - 128) - 1.0L/3.0L;
           return __pp_r548____d2___result;
        }
        static inline double __pp_r549____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r549____d2___result;
           __pp_r549____d2___result = (1.0L/96.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/64.0L)*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) + (1.0L/32.0L)*x_1*(pow(x_0, 2) + 2*x_0 - 2) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) + 2*x_0 - 4) - 48) - 5.0L/24.0L;
           return __pp_r549____d2___result;
        }
        static inline double __pp_r550____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r550____d2___result;
           __pp_r550____d2___result = -1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/192.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) - 1.0L/32.0L*x_1*(pow(x_0, 2) + 4*x_0 + 8) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) + 64) - 1.0L/3.0L;
           return __pp_r550____d2___result;
        }
        static inline double __pp_r551____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r551____d2___result;
           __pp_r551____d2___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 12*x_1*(x_0 + 4) + 64) - 1.0L/3.0L;
           return __pp_r551____d2___result;
        }
        static inline double __pp_r552____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r552____d2___result;
           __pp_r552____d2___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 12*x_1*(x_0 + 4) + 64) - 1.0L/3.0L;
           return __pp_r552____d2___result;
        }
        static inline double __pp_r553____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r553____d2___result;
           __pp_r553____d2___result = (1.0L/32.0L)*pow(x_0, 2)*x_1 + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/96.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/384.0L*x_2*(3*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) - 128) - 1.0L/3.0L;
           return __pp_r553____d2___result;
        }
        static inline double __pp_r554____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r554____d2___result;
           __pp_r554____d2___result = (1.0L/32.0L)*pow(x_0, 2)*x_1 + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/96.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 16) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/384.0L*x_2*(3*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) - 128) - 1.0L/3.0L;
           return __pp_r554____d2___result;
        }
        static inline double __pp_r555____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r555____d2___result;
           __pp_r555____d2___result = (1.0L/96.0L)*pow(x_0, 3) + (1.0L/16.0L)*pow(x_0, 2) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/48.0L)*pow(x_2, 3) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 + 4) - 128) - 1.0L/3.0L;
           return __pp_r555____d2___result;
        }
        static inline double __pp_r556____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r556____d2___result;
           __pp_r556____d2___result = -1.0L/96.0L*pow(x_0, 3) + (1.0L/256.0L)*pow(x_0, 2)*pow(x_1, 2) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/8.0L*x_0 - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + (1.0L/384.0L)*x_2*(3*pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(3*x_0 + 4) - 32) - 1.0L/12.0L;
           return __pp_r556____d2___result;
        }
        static inline double __pp_r557____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r557____d2___result;
           __pp_r557____d2___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 8) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 48) - 1.0L/24.0L;
           return __pp_r557____d2___result;
        }
        static inline double __pp_r558____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r558____d2___result;
           __pp_r558____d2___result = (1.0L/96.0L)*pow(x_0, 3) + (1.0L/32.0L)*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/64.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) - 1.0L/32.0L*x_1*(pow(x_0, 2) + 2*x_0 - 2) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) + 2*x_0 - 4) - 48) - 5.0L/24.0L;
           return __pp_r558____d2___result;
        }
        static inline double __pp_r559____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r559____d2___result;
           __pp_r559____d2___result = (1.0L/96.0L)*pow(x_0, 3) - 3.0L/256.0L*pow(x_0, 2)*pow(x_1, 2) - 1.0L/8.0L*x_0 + (1.0L/256.0L)*pow(x_2, 4) - 1.0L/24.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(3*pow(x_0, 2) + 8*x_0 + 3*pow(x_1, 2) - 32) - 1.0L/384.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) - 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) + 32) - 1.0L/12.0L;
           return __pp_r559____d2___result;
        }
        static inline double __pp_r560____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r560____d2___result;
           __pp_r560____d2___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/192.0L*pow(x_1, 3) - 1.0L/64.0L*pow(x_1, 2)*(x_0 + 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) - 1.0L/3.0L;
           return __pp_r560____d2___result;
        }
        static inline double __pp_r561____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r561____d2___result;
           __pp_r561____d2___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/192.0L*pow(x_1, 3) - 1.0L/64.0L*pow(x_1, 2)*(x_0 + 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) - 1.0L/3.0L;
           return __pp_r561____d2___result;
        }
        static inline double __pp_r562____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r562____d2___result;
           __pp_r562____d2___result = -1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/192.0L*pow(x_1, 3) - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) - 1.0L/32.0L*x_1*(pow(x_0, 2) + 4*x_0 + 8) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/384.0L)*x_2*(12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) + 64) - 1.0L/3.0L;
           return __pp_r562____d2___result;
        }
        static inline double __pp_r563____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r563____d2___result;
           __pp_r563____d2___result = -1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64);
           return __pp_r563____d2___result;
        }
        static inline double __pp_r564____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r564____d2___result;
           __pp_r564____d2___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + 6*x_0 + pow(x_1, 2) + 2*x_1 + 8) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 4*x_0 + 8) - 48) - 1.0L/24.0L;
           return __pp_r564____d2___result;
        }
        static inline double __pp_r565____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r565____d2___result;
           __pp_r565____d2___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) - 12*x_1*(x_0 + 4) + 64) - 1.0L/3.0L;
           return __pp_r565____d2___result;
        }
        static inline double __pp_r566____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r566____d2___result;
           __pp_r566____d2___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 - 1.0L/192.0L*pow(x_1, 3) + (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 8) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 48) - 1.0L/24.0L;
           return __pp_r566____d2___result;
        }
        static inline double __pp_r567____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r567____d2___result;
           __pp_r567____d2___result = (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 64);
           return __pp_r567____d2___result;
        }
        static inline double __pp_r568____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r568____d2___result;
           __pp_r568____d2___result = (1.0L/256.0L)*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_2, 4) + (1.0L/256.0L)*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 64);
           return __pp_r568____d2___result;
        }
        static inline double __pp_r569____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r569____d2___result;
           __pp_r569____d2___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/96.0L*pow(x_2, 3) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) - 12*x_1*(x_0 + 4) + 64) - 1.0L/3.0L;
           return __pp_r569____d2___result;
        }
        static inline double __pp_r570____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r570____d2___result;
           __pp_r570____d2___result = -1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64);
           return __pp_r570____d2___result;
        }
        static inline double __pp_r571____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r571____d2___result;
           __pp_r571____d2___result = -1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64);
           return __pp_r571____d2___result;
        }
        static inline double __pp_r572____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r572____d2___result;
           __pp_r572____d2___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/4.0L*x_0 + (1.0L/192.0L)*pow(x_1, 3) - 1.0L/64.0L*pow(x_1, 2)*(x_0 + 4) + (1.0L/64.0L)*x_1*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) - 1.0L/3.0L;
           return __pp_r572____d2___result;
        }
        static inline double __pp_r573____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r573____d2___result;
           __pp_r573____d2___result = -1.0L/192.0L*pow(x_0, 3) - 1.0L/32.0L*pow(x_0, 2) - 1.0L/16.0L*x_0 + (1.0L/128.0L)*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 4) - 1.0L/64.0L*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/96.0L)*pow(x_2, 3) + (1.0L/128.0L)*pow(x_2, 2)*(pow(x_0, 2) + 6*x_0 + pow(x_1, 2) - 2*x_1 + 8) + (1.0L/384.0L)*x_2*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 8) - 48) - 1.0L/24.0L;
           return __pp_r573____d2___result;
        }
        static inline double __pp_r574____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r574____d2___result;
           __pp_r574____d2___result = -1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64);
           return __pp_r574____d2___result;
        }
        static inline double __pp_r575____d2__(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r575____d2___result;
           __pp_r575____d2___result = -1.0L/256.0L*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/768.0L)*pow(x_2, 4) - 1.0L/256.0L*pow(x_2, 2)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) - 1.0L/384.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 64);
           return __pp_r575____d2___result;
        }
        static inline double __pp_r576____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r576_____result;
           __pp_r576_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*x_2*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 64) + 4.0L/15.0L;
           return __pp_r576_____result;
        }
        static inline double __pp_r577____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r577_____result;
           __pp_r577_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 + (1.0L/256.0L)*pow(x_1, 2)*x_2*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 64) + 4.0L/15.0L;
           return __pp_r577_____result;
        }
        static inline double __pp_r578____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r578_____result;
           __pp_r578_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 12*x_1*(x_0 - 4) - 64) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) - 48*pow(x_0, 2) + 192*x_0 - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + 12*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 256) + 2.0L/5.0L;
           return __pp_r578_____result;
        }
        static inline double __pp_r579____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r579_____result;
           __pp_r579_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 5.0L/24.0L*x_0 - 1.0L/1920.0L*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/384.0L)*pow(x_1, 3)*(pow(x_0, 2) - 6*x_0 + 8) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 + 48) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 12*x_0 - 8) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) - 4*x_0 + 4) + 48) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) - 24*pow(x_0, 2) + 48*x_0 - 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 8) - 12*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 32) + 5.0L/24.0L;
           return __pp_r579_____result;
        }
        static inline double __pp_r580____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r580_____result;
           __pp_r580_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) + 12*x_1*(x_0 - 4) - 64) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) - 48*pow(x_0, 2) + 192*x_0 - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 12*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 256) + 2.0L/5.0L;
           return __pp_r580_____result;
        }
        static inline double __pp_r581____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r581_____result;
           __pp_r581_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 5.0L/24.0L*x_0 + (1.0L/1920.0L)*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) - 1.0L/384.0L*pow(x_1, 3)*(pow(x_0, 2) - 6*x_0 + 8) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 + 48) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 12*x_0 - 8) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) - 4*x_0 + 4) + 48) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) - 24*pow(x_0, 2) + 48*x_0 + 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 8) + 12*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 32) + 5.0L/24.0L;
           return __pp_r581_____result;
        }
        static inline double __pp_r582____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r582_____result;
           __pp_r582_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/192.0L*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*x_2*(5*pow(x_0, 2) - 16*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/768.0L*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(5*pow(x_0, 2) - 16*x_0 + 5*pow(x_1, 2) + 16) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 64) + 1.0L/10.0L;
           return __pp_r582_____result;
        }
        static inline double __pp_r583____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r583_____result;
           __pp_r583_____result = (1.0L/1280.0L)*pow(x_0, 5) - 1.0L/96.0L*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 2)*(3*pow(x_0, 3) - 12*pow(x_0, 2) + 32) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/768.0L*pow(x_2, 2)*(3*pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(3*x_0 - 4) + 32) + (1.0L/768.0L)*x_2*(8*pow(x_0, 3) + 3*pow(x_0, 2)*pow(x_1, 2) - 48*pow(x_0, 2) + 96*x_0 - 64) + 3.0L/20.0L;
           return __pp_r583_____result;
        }
        static inline double __pp_r584____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r584_____result;
           __pp_r584_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 5.0L/24.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 + 48) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 12*x_0 - 8) + (1.0L/1920.0L)*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) - 1.0L/384.0L*pow(x_2, 3)*(pow(x_0, 2) - 6*x_0 + pow(x_1, 2) - 2*x_1 + 8) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 48) - 1.0L/384.0L*x_2*(2*pow(x_0, 3) - 12*pow(x_0, 2) + 24*x_0 + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 4) - 6*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 16) + 5.0L/24.0L;
           return __pp_r584_____result;
        }
        static inline double __pp_r585____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r585_____result;
           __pp_r585_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) - 1.0L/192.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 2.0L/5.0L;
           return __pp_r585_____result;
        }
        static inline double __pp_r586____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r586_____result;
           __pp_r586_____result = (1.0L/1280.0L)*pow(x_0, 5) - 1.0L/96.0L*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(3*pow(x_0, 3) - 12*pow(x_0, 2) + 32) + (1.0L/96.0L)*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 12*x_0 - 8) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 2)*(3*pow(x_0, 3) - 3*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) - pow(x_1, 3) + 3*pow(x_1, 2)*(3*x_0 - 4) + 32) + 3.0L/20.0L;
           return __pp_r586_____result;
        }
        static inline double __pp_r587____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r587_____result;
           __pp_r587_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/192.0L*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(5*pow(x_0, 2) - 16*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 5*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(5*pow(x_0, 2) - 16*x_0 + 16) - 64) + 1.0L/10.0L;
           return __pp_r587_____result;
        }
        static inline double __pp_r588____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r588_____result;
           __pp_r588_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 4.0L/15.0L;
           return __pp_r588_____result;
        }
        static inline double __pp_r589____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r589_____result;
           __pp_r589_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 4.0L/15.0L;
           return __pp_r589_____result;
        }
        static inline double __pp_r590____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r590_____result;
           __pp_r590_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + (1.0L/192.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 2.0L/5.0L;
           return __pp_r590_____result;
        }
        static inline double __pp_r591____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r591_____result;
           __pp_r591_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 5.0L/24.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 + 48) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 12*x_0 - 8) - 1.0L/1920.0L*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/384.0L)*pow(x_2, 3)*(pow(x_0, 2) - 6*x_0 + pow(x_1, 2) - 2*x_1 + 8) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 48) + (1.0L/384.0L)*x_2*(2*pow(x_0, 3) - 12*pow(x_0, 2) + 24*x_0 + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 4) - 6*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 16) + 5.0L/24.0L;
           return __pp_r591_____result;
        }
        static inline double __pp_r592____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r592_____result;
           __pp_r592_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 5.0L/24.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 + 48) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 12*x_0 - 8) + (1.0L/1920.0L)*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) - 1.0L/384.0L*pow(x_2, 3)*(pow(x_0, 2) - 6*x_0 + pow(x_1, 2) + 2*x_1 + 8) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 48) - 1.0L/384.0L*x_2*(2*pow(x_0, 3) - 12*pow(x_0, 2) + 24*x_0 + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 4) + 6*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 16) + 5.0L/24.0L;
           return __pp_r592_____result;
        }
        static inline double __pp_r593____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r593_____result;
           __pp_r593_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) - 1.0L/192.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 2.0L/5.0L;
           return __pp_r593_____result;
        }
        static inline double __pp_r594____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r594_____result;
           __pp_r594_____result = (1.0L/1280.0L)*pow(x_0, 5) - 1.0L/96.0L*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(3*pow(x_0, 3) - 12*pow(x_0, 2) + 32) - 1.0L/96.0L*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 12*x_0 - 8) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 2)*(3*pow(x_0, 3) + 3*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + pow(x_1, 3) + 3*pow(x_1, 2)*(3*x_0 - 4) + 32) + 3.0L/20.0L;
           return __pp_r594_____result;
        }
        static inline double __pp_r595____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r595_____result;
           __pp_r595_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/192.0L*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(5*pow(x_0, 2) - 16*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 5*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(5*pow(x_0, 2) - 16*x_0 + 16) - 64) + 1.0L/10.0L;
           return __pp_r595_____result;
        }
        static inline double __pp_r596____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r596_____result;
           __pp_r596_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 4.0L/15.0L;
           return __pp_r596_____result;
        }
        static inline double __pp_r597____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r597_____result;
           __pp_r597_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 4.0L/15.0L;
           return __pp_r597_____result;
        }
        static inline double __pp_r598____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r598_____result;
           __pp_r598_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + (1.0L/192.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 2.0L/5.0L;
           return __pp_r598_____result;
        }
        static inline double __pp_r599____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r599_____result;
           __pp_r599_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 5.0L/24.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 8*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 + 48) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 12*x_0 - 8) - 1.0L/1920.0L*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/384.0L)*pow(x_2, 3)*(pow(x_0, 2) - 6*x_0 + pow(x_1, 2) + 2*x_1 + 8) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 48) + (1.0L/384.0L)*x_2*(2*pow(x_0, 3) - 12*pow(x_0, 2) + 24*x_0 + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 4) + 6*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 16) + 5.0L/24.0L;
           return __pp_r599_____result;
        }
        static inline double __pp_r600____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r600_____result;
           __pp_r600_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 12*x_1*(x_0 - 4) - 64) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) - 48*pow(x_0, 2) + 192*x_0 - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + 12*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 256) + 2.0L/5.0L;
           return __pp_r600_____result;
        }
        static inline double __pp_r601____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r601_____result;
           __pp_r601_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) + 12*x_1*(x_0 - 4) - 64) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) - 48*pow(x_0, 2) + 192*x_0 - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 12*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 256) + 2.0L/5.0L;
           return __pp_r601_____result;
        }
        static inline double __pp_r602____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r602_____result;
           __pp_r602_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) - 32) - 1.0L/1280.0L*pow(x_2, 5) - 1.0L/96.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(3*pow(x_0, 2) - 8*x_0 + 3*pow(x_1, 2) - 32) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) - 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) - 32) + (1.0L/768.0L)*x_2*(8*pow(x_0, 3) + 9*pow(x_0, 2)*pow(x_1, 2) - 96*x_0 + 64) + 3.0L/20.0L;
           return __pp_r602_____result;
        }
        static inline double __pp_r603____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r603_____result;
           __pp_r603_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 - 1.0L/1920.0L*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/384.0L)*pow(x_1, 3)*(pow(x_0, 2) - 2*x_0 + 8) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 24*x_0 - 48) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 6*x_0 - 4) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) - 2*x_0 - 4) + 48) + (1.0L/768.0L)*x_2*(8*pow(x_0, 3) - 24*pow(x_0, 2) - 48*x_0 + 12*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) + 24*x_1*(pow(x_0, 2) - 2*x_0 - 2) + 160) + 5.0L/24.0L;
           return __pp_r603_____result;
        }
        static inline double __pp_r604____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r604_____result;
           __pp_r604_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 + (1.0L/1920.0L)*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) - 1.0L/384.0L*pow(x_1, 3)*(pow(x_0, 2) - 2*x_0 + 8) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 24*x_0 - 48) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) - 6*x_0 - 4) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) - 2*x_0 - 4) + 48) + (1.0L/768.0L)*x_2*(8*pow(x_0, 3) - 24*pow(x_0, 2) - 48*x_0 - 12*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) - 24*x_1*(pow(x_0, 2) - 2*x_0 - 2) + 160) + 5.0L/24.0L;
           return __pp_r604_____result;
        }
        static inline double __pp_r605____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r605_____result;
           __pp_r605_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/3840.0L)*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 - 4) + 128) + (1.0L/768.0L)*x_2*(8*pow(x_0, 3) - 48*pow(x_0, 2) - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + 256) + 4.0L/15.0L;
           return __pp_r605_____result;
        }
        static inline double __pp_r606____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r606_____result;
           __pp_r606_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/3840.0L)*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 - 4) + 128) + (1.0L/768.0L)*x_2*(8*pow(x_0, 3) - 48*pow(x_0, 2) - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + 256) + 4.0L/15.0L;
           return __pp_r606_____result;
        }
        static inline double __pp_r607____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r607_____result;
           __pp_r607_____result = -1.0L/768.0L*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 2)*(5*pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/192.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 32) + (1.0L/768.0L)*pow(x_2, 2)*(5*pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(5*x_0 - 4) - 64) + (1.0L/768.0L)*x_2*(16*pow(x_0, 3) - 48*pow(x_0, 2) - 3*pow(x_1, 2)*(pow(x_0, 2) - 16*x_0 + 16)) + 1.0L/10.0L;
           return __pp_r607_____result;
        }
        static inline double __pp_r608____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r608_____result;
           __pp_r608_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*x_2*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 64) + 4.0L/15.0L;
           return __pp_r608_____result;
        }
        static inline double __pp_r609____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r609_____result;
           __pp_r609_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/256.0L*pow(x_1, 2)*x_2*(pow(x_0, 2) - 8*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 64) + 4.0L/15.0L;
           return __pp_r609_____result;
        }
        static inline double __pp_r610____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r610_____result;
           __pp_r610_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 5.0L/24.0L*x_0 - 1.0L/1920.0L*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/384.0L)*pow(x_1, 3)*(pow(x_0, 2) - 6*x_0 + 8) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 + 48) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 12*x_0 - 8) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) - 4*x_0 + 4) + 48) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) - 24*pow(x_0, 2) + 48*x_0 - 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 8) - 12*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 32) + 5.0L/24.0L;
           return __pp_r610_____result;
        }
        static inline double __pp_r611____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r611_____result;
           __pp_r611_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 12*x_1*(x_0 - 4) - 64) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) - 48*pow(x_0, 2) + 192*x_0 - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + 12*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 256) + 2.0L/5.0L;
           return __pp_r611_____result;
        }
        static inline double __pp_r612____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r612_____result;
           __pp_r612_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) - 5.0L/24.0L*x_0 + (1.0L/1920.0L)*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) - 1.0L/384.0L*pow(x_1, 3)*(pow(x_0, 2) - 6*x_0 + 8) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 + 48) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 12*x_0 - 8) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) - 4*x_0 + 4) + 48) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) - 24*pow(x_0, 2) + 48*x_0 + 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 8) + 12*x_1*(pow(x_0, 2) - 4*x_0 + 4) - 32) + 5.0L/24.0L;
           return __pp_r612_____result;
        }
        static inline double __pp_r613____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r613_____result;
           __pp_r613_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) + 12*x_1*(x_0 - 4) - 64) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) - 48*pow(x_0, 2) + 192*x_0 - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 12*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 256) + 2.0L/5.0L;
           return __pp_r613_____result;
        }
        static inline double __pp_r614____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r614_____result;
           __pp_r614_____result = (1.0L/1280.0L)*pow(x_0, 5) - 1.0L/96.0L*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 2)*(3*pow(x_0, 3) - 12*pow(x_0, 2) + 32) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 8*x_0 + pow(x_1, 2) + 16) - 1.0L/768.0L*pow(x_2, 2)*(3*pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(3*x_0 - 4) + 32) - 1.0L/768.0L*x_2*(8*pow(x_0, 3) + 3*pow(x_0, 2)*pow(x_1, 2) - 48*pow(x_0, 2) + 96*x_0 - 64) + 3.0L/20.0L;
           return __pp_r614_____result;
        }
        static inline double __pp_r615____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r615_____result;
           __pp_r615_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/192.0L*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*x_2*(5*pow(x_0, 2) - 16*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/768.0L)*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(5*pow(x_0, 2) - 16*x_0 + 5*pow(x_1, 2) + 16) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 64) + 1.0L/10.0L;
           return __pp_r615_____result;
        }
        static inline double __pp_r616____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r616_____result;
           __pp_r616_____result = (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 12*x_0 + 16) - 1.0L/48.0L*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(-12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) - 64) + (1.0L/768.0L)*x_2*(48*pow(x_0, 2) - 192*x_0 - 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) - 24*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r616_____result;
        }
        static inline double __pp_r617____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r617_____result;
           __pp_r617_____result = -1.0L/1920.0L*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/384.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*x_0 + 24) - 1.0L/192.0L*x_1*(3*pow(x_0, 3) - 6*pow(x_0, 2) - 12*x_0 + 40) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/768.0L)*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 8*x_0 - 8) - 48) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) - 24*pow(x_0, 2) + 48*x_0 - 4*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) + 12*x_1*(pow(x_0, 2) - 4*x_0 - 4) + 32) + 5.0L/24.0L;
           return __pp_r617_____result;
        }
        static inline double __pp_r618____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r618_____result;
           __pp_r618_____result = -1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 32) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 32) + (1.0L/48.0L)*x_1*(3*pow(x_0, 2) - 16) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/768.0L)*pow(x_2, 2)*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) - 64) - 1.0L/256.0L*x_2*(pow(x_0, 2)*pow(x_1, 2) - 8*pow(x_0, 2)*x_1 + 16*pow(x_0, 2)) + 4.0L/15.0L;
           return __pp_r618_____result;
        }
        static inline double __pp_r619____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r619_____result;
           __pp_r619_____result = -1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 32) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 32) + (1.0L/48.0L)*x_1*(3*pow(x_0, 2) - 16) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/768.0L)*pow(x_2, 2)*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) - 64) - 1.0L/256.0L*x_2*(pow(x_0, 2)*pow(x_1, 2) - 8*pow(x_0, 2)*x_1 + 16*pow(x_0, 2)) + 4.0L/15.0L;
           return __pp_r619_____result;
        }
        static inline double __pp_r620____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r620_____result;
           __pp_r620_____result = (1.0L/192.0L)*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/192.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 32) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) + (1.0L/768.0L)*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(5*pow(x_0, 2) + 5*pow(x_1, 2) - 16*x_1 + 16) + (1.0L/768.0L)*pow(x_2, 2)*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) - 64) - 1.0L/256.0L*x_2*(5*pow(x_0, 2)*pow(x_1, 2) - 16*pow(x_0, 2)*x_1 + 16*pow(x_0, 2)) + 1.0L/10.0L;
           return __pp_r620_____result;
        }
        static inline double __pp_r621____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r621_____result;
           __pp_r621_____result = (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 2) + (1.0L/1280.0L)*pow(x_1, 5) - 1.0L/96.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(3*pow(x_0, 2) - 32) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 8) - 1.0L/12.0L*x_1 + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/768.0L*pow(x_2, 2)*(9*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + 3*pow(x_1, 3) - 12*pow(x_1, 2) + 32) - 1.0L/768.0L*x_2*(8*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 16) + 96*x_1 - 64) + 3.0L/20.0L;
           return __pp_r621_____result;
        }
        static inline double __pp_r622____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r622_____result;
           __pp_r622_____result = (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) + 12*x_0 + 16) - 1.0L/48.0L*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(-12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) - 64) + (1.0L/768.0L)*x_2*(48*pow(x_0, 2) + 192*x_0 - 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) - 24*x_1*(pow(x_0, 2) + 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r622_____result;
        }
        static inline double __pp_r623____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r623_____result;
           __pp_r623_____result = (1.0L/1920.0L)*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) - 1.0L/384.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*x_0 - 24) + (1.0L/192.0L)*x_1*(3*pow(x_0, 3) + 6*pow(x_0, 2) - 12*x_0 - 40) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/768.0L*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 8*x_0 - 8) + 48) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) + 24*pow(x_0, 2) + 48*x_0 + 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) - 12*x_1*(pow(x_0, 2) + 4*x_0 - 4) - 32) + 5.0L/24.0L;
           return __pp_r623_____result;
        }
        static inline double __pp_r624____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r624_____result;
           __pp_r624_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) - 1.0L/192.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 2.0L/5.0L;
           return __pp_r624_____result;
        }
        static inline double __pp_r625____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r625_____result;
           __pp_r625_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 + 48) - 1.0L/96.0L*x_1*(pow(x_0, 3) - 3*pow(x_0, 2) - 6*x_0 + 20) - 1.0L/1920.0L*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/384.0L)*pow(x_2, 3)*(pow(x_0, 2) - 2*x_0 + pow(x_1, 2) - 6*x_1 + 8) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) + (1.0L/384.0L)*x_2*(12*pow(x_0, 2) - 24*x_0 + 2*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 2*x_0 - 4) - 12*x_1*(pow(x_0, 2) - 2*x_0 - 2) - 16) + 5.0L/24.0L;
           return __pp_r625_____result;
        }
        static inline double __pp_r626____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r626_____result;
           __pp_r626_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + (1.0L/192.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 2.0L/5.0L;
           return __pp_r626_____result;
        }
        static inline double __pp_r627____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r627_____result;
           __pp_r627_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 32) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 128) - 1.0L/96.0L*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 32) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 4.0L/15.0L;
           return __pp_r627_____result;
        }
        static inline double __pp_r628____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r628_____result;
           __pp_r628_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 + (1.0L/1280.0L)*pow(x_1, 5) - 1.0L/96.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(3*pow(x_0, 2) - 8*x_0 - 32) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) - 48*x_0 - 32) - 1.0L/96.0L*x_1*(pow(x_0, 3) - 12*x_0 + 8) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 9*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) - 3*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 32) + 3.0L/20.0L;
           return __pp_r628_____result;
        }
        static inline double __pp_r629____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r629_____result;
           __pp_r629_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 + 48) - 1.0L/96.0L*x_1*(pow(x_0, 3) - 3*pow(x_0, 2) - 6*x_0 + 20) + (1.0L/1920.0L)*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) - 1.0L/384.0L*pow(x_2, 3)*(pow(x_0, 2) - 2*x_0 + pow(x_1, 2) - 6*x_1 + 8) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) - 1.0L/384.0L*x_2*(12*pow(x_0, 2) - 24*x_0 + 2*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 2*x_0 - 4) - 12*x_1*(pow(x_0, 2) - 2*x_0 - 2) - 16) + 5.0L/24.0L;
           return __pp_r629_____result;
        }
        static inline double __pp_r630____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r630_____result;
           __pp_r630_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 32) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 128) - 1.0L/96.0L*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 32) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 4.0L/15.0L;
           return __pp_r630_____result;
        }
        static inline double __pp_r631____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r631_____result;
           __pp_r631_____result = -1.0L/768.0L*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/192.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 32) + (1.0L/768.0L)*pow(x_1, 2)*(5*pow(x_0, 3) - 12*pow(x_0, 2) - 64) - 1.0L/48.0L*x_1*(pow(x_0, 3) - 3*pow(x_0, 2)) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 2)*(5*pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(5*x_0 - 4) + 3*x_1*(pow(x_0, 2) - 16*x_0 + 16) - 64) + 1.0L/10.0L;
           return __pp_r631_____result;
        }
        static inline double __pp_r632____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r632_____result;
           __pp_r632_____result = (1.0L/16.0L)*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 16) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) + (1.0L/3840.0L)*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/768.0L)*pow(x_2, 2)*(3*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 128) + (1.0L/768.0L)*x_2*(24*pow(x_0, 2)*x_1 - 48*pow(x_0, 2) + 8*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) + 16) + 256) + 4.0L/15.0L;
           return __pp_r632_____result;
        }
        static inline double __pp_r633____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r633_____result;
           __pp_r633_____result = (1.0L/16.0L)*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 16) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) + (1.0L/3840.0L)*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/768.0L)*pow(x_2, 2)*(3*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 128) + (1.0L/768.0L)*x_2*(24*pow(x_0, 2)*x_1 - 48*pow(x_0, 2) + 8*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) + 16) + 256) + 4.0L/15.0L;
           return __pp_r633_____result;
        }
        static inline double __pp_r634____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r634_____result;
           __pp_r634_____result = (1.0L/1920.0L)*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 16) - 1.0L/384.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*x_0 + 24) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) + 12*x_0 - 8) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) - 1.0L/768.0L*x_2*(12*pow(x_0, 3) + 24*pow(x_0, 2) - 48*x_0 - 8*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 - 8) - 12*x_1*(pow(x_0, 2) + 4*x_0 - 4) - 160) + 5.0L/24.0L;
           return __pp_r634_____result;
        }
        static inline double __pp_r635____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r635_____result;
           __pp_r635_____result = (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) + 12*x_0 + 16) - 1.0L/48.0L*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(-12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) - 64) + (1.0L/768.0L)*x_2*(48*pow(x_0, 2) + 192*x_0 - 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) - 24*x_1*(pow(x_0, 2) + 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r635_____result;
        }
        static inline double __pp_r636____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r636_____result;
           __pp_r636_____result = (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 12*x_0 + 16) - 1.0L/48.0L*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(-12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) - 64) + (1.0L/768.0L)*x_2*(48*pow(x_0, 2) - 192*x_0 - 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) - 24*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r636_____result;
        }
        static inline double __pp_r637____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r637_____result;
           __pp_r637_____result = -1.0L/1920.0L*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 16) + (1.0L/384.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*x_0 - 24) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 12*x_0 + 8) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) + (1.0L/768.0L)*x_2*(12*pow(x_0, 3) - 24*pow(x_0, 2) - 48*x_0 + 8*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 - 8) + 12*x_1*(pow(x_0, 2) - 4*x_0 - 4) + 160) + 5.0L/24.0L;
           return __pp_r637_____result;
        }
        static inline double __pp_r638____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r638_____result;
           __pp_r638_____result = (1.0L/192.0L)*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(5*pow(x_0, 2) + 16) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/192.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 32) + (1.0L/768.0L)*pow(x_2, 2)*(15*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + 5*pow(x_1, 3) - 12*pow(x_1, 2) - 64) + (1.0L/768.0L)*x_2*(48*pow(x_0, 2)*x_1 - 48*pow(x_0, 2) + 16*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) + 16)) + 1.0L/10.0L;
           return __pp_r638_____result;
        }
        static inline double __pp_r639____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r639_____result;
           __pp_r639_____result = (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 16) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 8) - 1.0L/12.0L*x_1 - 1.0L/1280.0L*pow(x_2, 5) - 1.0L/96.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(3*pow(x_0, 2) + 3*pow(x_1, 2) - 8*x_1 - 32) + (1.0L/768.0L)*pow(x_2, 2)*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 16) - 32) + (1.0L/768.0L)*x_2*(9*pow(x_0, 2)*pow(x_1, 2) + 8*pow(x_1, 3) - 96*x_1 + 64) + 3.0L/20.0L;
           return __pp_r639_____result;
        }
        static inline double __pp_r640____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r640_____result;
           __pp_r640_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) - 12*x_1*(x_0 - 4) - 64) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) - 48*pow(x_0, 2) + 192*x_0 - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + 12*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 256) + 2.0L/5.0L;
           return __pp_r640_____result;
        }
        static inline double __pp_r641____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r641_____result;
           __pp_r641_____result = (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 12*x_0 + 16) - 1.0L/48.0L*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(-12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) - 64) - 1.0L/768.0L*x_2*(48*pow(x_0, 2) - 192*x_0 - 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) - 24*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r641_____result;
        }
        static inline double __pp_r642____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r642_____result;
           __pp_r642_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 - 4) + 128) - 1.0L/768.0L*x_2*(8*pow(x_0, 3) - 48*pow(x_0, 2) - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + 256) + 4.0L/15.0L;
           return __pp_r642_____result;
        }
        static inline double __pp_r643____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r643_____result;
           __pp_r643_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 - 1.0L/1920.0L*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/384.0L)*pow(x_1, 3)*(pow(x_0, 2) - 2*x_0 + 8) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 24*x_0 - 48) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) - 6*x_0 - 4) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) - 2*x_0 - 4) + 48) - 1.0L/768.0L*x_2*(8*pow(x_0, 3) - 24*pow(x_0, 2) - 48*x_0 + 12*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) + 24*x_1*(pow(x_0, 2) - 2*x_0 - 2) + 160) + 5.0L/24.0L;
           return __pp_r643_____result;
        }
        static inline double __pp_r644____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r644_____result;
           __pp_r644_____result = (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 16) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 8) - 1.0L/12.0L*x_1 + (1.0L/1280.0L)*pow(x_2, 5) - 1.0L/96.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(3*pow(x_0, 2) + 3*pow(x_1, 2) - 8*x_1 - 32) + (1.0L/768.0L)*pow(x_2, 2)*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 16) - 32) - 1.0L/768.0L*x_2*(9*pow(x_0, 2)*pow(x_1, 2) + 8*pow(x_1, 3) - 96*x_1 + 64) + 3.0L/20.0L;
           return __pp_r644_____result;
        }
        static inline double __pp_r645____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r645_____result;
           __pp_r645_____result = -1.0L/1920.0L*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 16) + (1.0L/384.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*x_0 - 24) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 12*x_0 + 8) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) - 1.0L/768.0L*x_2*(12*pow(x_0, 3) - 24*pow(x_0, 2) - 48*x_0 + 8*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 - 8) + 12*x_1*(pow(x_0, 2) - 4*x_0 - 4) + 160) + 5.0L/24.0L;
           return __pp_r645_____result;
        }
        static inline double __pp_r646____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r646_____result;
           __pp_r646_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 - 4) + 128) - 1.0L/768.0L*x_2*(8*pow(x_0, 3) - 48*pow(x_0, 2) - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) + 256) + 4.0L/15.0L;
           return __pp_r646_____result;
        }
        static inline double __pp_r647____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r647_____result;
           __pp_r647_____result = (1.0L/16.0L)*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 16) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/768.0L)*pow(x_2, 2)*(3*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 128) - 1.0L/768.0L*x_2*(24*pow(x_0, 2)*x_1 - 48*pow(x_0, 2) + 8*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) + 16) + 256) + 4.0L/15.0L;
           return __pp_r647_____result;
        }
        static inline double __pp_r648____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r648_____result;
           __pp_r648_____result = (1.0L/1920.0L)*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 16) - 1.0L/384.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*x_0 + 24) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) + 12*x_0 - 8) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) + (1.0L/768.0L)*x_2*(12*pow(x_0, 3) + 24*pow(x_0, 2) - 48*x_0 - 8*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 - 8) - 12*x_1*(pow(x_0, 2) + 4*x_0 - 4) - 160) + 5.0L/24.0L;
           return __pp_r648_____result;
        }
        static inline double __pp_r649____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r649_____result;
           __pp_r649_____result = (1.0L/16.0L)*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 16) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) + (1.0L/768.0L)*pow(x_2, 2)*(3*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 128) - 1.0L/768.0L*x_2*(24*pow(x_0, 2)*x_1 - 48*pow(x_0, 2) + 8*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) + 16) + 256) + 4.0L/15.0L;
           return __pp_r649_____result;
        }
        static inline double __pp_r650____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r650_____result;
           __pp_r650_____result = -1.0L/1920.0L*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/384.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*x_0 + 24) - 1.0L/192.0L*x_1*(3*pow(x_0, 3) - 6*pow(x_0, 2) - 12*x_0 + 40) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/768.0L)*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 8*x_0 - 8) - 48) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) - 24*pow(x_0, 2) + 48*x_0 - 4*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) + 12*x_1*(pow(x_0, 2) - 4*x_0 - 4) + 32) + 5.0L/24.0L;
           return __pp_r650_____result;
        }
        static inline double __pp_r651____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r651_____result;
           __pp_r651_____result = (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 2) + (1.0L/1280.0L)*pow(x_1, 5) - 1.0L/96.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(3*pow(x_0, 2) - 32) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 8) - 1.0L/12.0L*x_1 - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/768.0L*pow(x_2, 2)*(9*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + 3*pow(x_1, 3) - 12*pow(x_1, 2) + 32) + (1.0L/768.0L)*x_2*(8*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 16) + 96*x_1 - 64) + 3.0L/20.0L;
           return __pp_r651_____result;
        }
        static inline double __pp_r652____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r652_____result;
           __pp_r652_____result = (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 12*x_0 + 16) - 1.0L/48.0L*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(-12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) - 64) - 1.0L/768.0L*x_2*(48*pow(x_0, 2) - 192*x_0 - 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) - 24*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r652_____result;
        }
        static inline double __pp_r653____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r653_____result;
           __pp_r653_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) + 12*x_1*(x_0 - 4) - 64) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) - 48*pow(x_0, 2) + 192*x_0 - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 + 16) - 12*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 256) + 2.0L/5.0L;
           return __pp_r653_____result;
        }
        static inline double __pp_r654____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r654_____result;
           __pp_r654_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 + (1.0L/1920.0L)*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) - 1.0L/384.0L*pow(x_1, 3)*(pow(x_0, 2) - 2*x_0 + 8) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 24*x_0 - 48) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) - 6*x_0 - 4) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) - 2*x_0 - 4) + 48) - 1.0L/768.0L*x_2*(8*pow(x_0, 3) - 24*pow(x_0, 2) - 48*x_0 - 12*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) - 24*x_1*(pow(x_0, 2) - 2*x_0 - 2) + 160) + 5.0L/24.0L;
           return __pp_r654_____result;
        }
        static inline double __pp_r655____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r655_____result;
           __pp_r655_____result = -1.0L/768.0L*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 2)*(5*pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/192.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 32) + (1.0L/768.0L)*pow(x_2, 2)*(5*pow(x_0, 3) - 12*pow(x_0, 2) + 3*pow(x_1, 2)*(5*x_0 - 4) - 64) - 1.0L/768.0L*x_2*(16*pow(x_0, 3) - 48*pow(x_0, 2) - 3*pow(x_1, 2)*(pow(x_0, 2) - 16*x_0 + 16)) + 1.0L/10.0L;
           return __pp_r655_____result;
        }
        static inline double __pp_r656____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r656_____result;
           __pp_r656_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) - 32) + (1.0L/1280.0L)*pow(x_2, 5) - 1.0L/96.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(3*pow(x_0, 2) - 8*x_0 + 3*pow(x_1, 2) - 32) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) - 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) - 32) - 1.0L/768.0L*x_2*(8*pow(x_0, 3) + 9*pow(x_0, 2)*pow(x_1, 2) - 96*x_0 + 64) + 3.0L/20.0L;
           return __pp_r656_____result;
        }
        static inline double __pp_r657____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r657_____result;
           __pp_r657_____result = (1.0L/192.0L)*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(5*pow(x_0, 2) + 16) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/192.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 32) + (1.0L/768.0L)*pow(x_2, 2)*(15*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + 5*pow(x_1, 3) - 12*pow(x_1, 2) - 64) - 1.0L/768.0L*x_2*(48*pow(x_0, 2)*x_1 - 48*pow(x_0, 2) + 16*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) + 16)) + 1.0L/10.0L;
           return __pp_r657_____result;
        }
        static inline double __pp_r658____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r658_____result;
           __pp_r658_____result = (1.0L/768.0L)*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/192.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 32) - 1.0L/768.0L*pow(x_1, 2)*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 64) + (1.0L/48.0L)*x_1*(pow(x_0, 3) + 3*pow(x_0, 2)) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 2)*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(5*x_0 + 4) - 3*x_1*(pow(x_0, 2) + 16*x_0 + 16) + 64) + 1.0L/10.0L;
           return __pp_r658_____result;
        }
        static inline double __pp_r659____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r659_____result;
           __pp_r659_____result = (1.0L/192.0L)*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/192.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 32) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) - 1.0L/768.0L*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(5*pow(x_0, 2) + 5*pow(x_1, 2) - 16*x_1 + 16) + (1.0L/768.0L)*pow(x_2, 2)*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) - 64) + (1.0L/256.0L)*x_2*(5*pow(x_0, 2)*pow(x_1, 2) - 16*pow(x_0, 2)*x_1 + 16*pow(x_0, 2)) + 1.0L/10.0L;
           return __pp_r659_____result;
        }
        static inline double __pp_r660____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r660_____result;
           __pp_r660_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 - 48) + (1.0L/96.0L)*x_1*(pow(x_0, 3) + 3*pow(x_0, 2) - 6*x_0 - 20) - 1.0L/1920.0L*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/384.0L)*pow(x_2, 3)*(pow(x_0, 2) + 2*x_0 + pow(x_1, 2) - 6*x_1 + 8) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) + (1.0L/384.0L)*x_2*(12*pow(x_0, 2) + 24*x_0 + 2*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 2*x_0 - 4) - 12*x_1*(pow(x_0, 2) + 2*x_0 - 2) - 16) + 5.0L/24.0L;
           return __pp_r660_____result;
        }
        static inline double __pp_r661____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r661_____result;
           __pp_r661_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) - 1.0L/192.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 2.0L/5.0L;
           return __pp_r661_____result;
        }
        static inline double __pp_r662____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r662_____result;
           __pp_r662_____result = -1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 32) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 32) + (1.0L/48.0L)*x_1*(3*pow(x_0, 2) - 16) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/768.0L)*pow(x_2, 2)*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) - 64) + (1.0L/256.0L)*x_2*(pow(x_0, 2)*pow(x_1, 2) - 8*pow(x_0, 2)*x_1 + 16*pow(x_0, 2)) + 4.0L/15.0L;
           return __pp_r662_____result;
        }
        static inline double __pp_r663____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r663_____result;
           __pp_r663_____result = (1.0L/1920.0L)*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) - 1.0L/384.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*x_0 - 24) + (1.0L/192.0L)*x_1*(3*pow(x_0, 3) + 6*pow(x_0, 2) - 12*x_0 - 40) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) - 1.0L/768.0L*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 8*x_0 - 8) + 48) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) + 24*pow(x_0, 2) + 48*x_0 + 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) - 12*x_1*(pow(x_0, 2) + 4*x_0 - 4) - 32) + 5.0L/24.0L;
           return __pp_r663_____result;
        }
        static inline double __pp_r664____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r664_____result;
           __pp_r664_____result = (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) + 12*x_0 + 16) - 1.0L/48.0L*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(-12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) - 64) - 1.0L/768.0L*x_2*(48*pow(x_0, 2) + 192*x_0 - 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) - 24*x_1*(pow(x_0, 2) + 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r664_____result;
        }
        static inline double __pp_r665____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r665_____result;
           __pp_r665_____result = (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) + 12*x_0 + 16) - 1.0L/48.0L*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(-12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) - 64) - 1.0L/768.0L*x_2*(48*pow(x_0, 2) + 192*x_0 - 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) - 24*x_1*(pow(x_0, 2) + 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r665_____result;
        }
        static inline double __pp_r666____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r666_____result;
           __pp_r666_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 32) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) - 128) + (1.0L/96.0L)*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) - 32) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 4.0L/15.0L;
           return __pp_r666_____result;
        }
        static inline double __pp_r667____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r667_____result;
           __pp_r667_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 32) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) - 128) + (1.0L/96.0L)*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) - 32) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 4.0L/15.0L;
           return __pp_r667_____result;
        }
        static inline double __pp_r668____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r668_____result;
           __pp_r668_____result = -1.0L/12.0L*pow(x_0, 2) - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 32) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 32) + (1.0L/48.0L)*x_1*(3*pow(x_0, 2) - 16) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 8*x_1 + 16) + (1.0L/768.0L)*pow(x_2, 2)*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) - 64) + (1.0L/256.0L)*x_2*(pow(x_0, 2)*pow(x_1, 2) - 8*pow(x_0, 2)*x_1 + 16*pow(x_0, 2)) + 4.0L/15.0L;
           return __pp_r668_____result;
        }
        static inline double __pp_r669____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r669_____result;
           __pp_r669_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) + (1.0L/12.0L)*x_0 + (1.0L/1280.0L)*pow(x_1, 5) - 1.0L/96.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(3*pow(x_0, 2) + 8*x_0 - 32) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) - 48*x_0 + 32) + (1.0L/96.0L)*x_1*(pow(x_0, 3) - 12*x_0 - 8) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 9*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) + 3*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 32) + 3.0L/20.0L;
           return __pp_r669_____result;
        }
        static inline double __pp_r670____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r670_____result;
           __pp_r670_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + (1.0L/192.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 2.0L/5.0L;
           return __pp_r670_____result;
        }
        static inline double __pp_r671____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r671_____result;
           __pp_r671_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 - 48) + (1.0L/96.0L)*x_1*(pow(x_0, 3) + 3*pow(x_0, 2) - 6*x_0 - 20) + (1.0L/1920.0L)*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) - 1.0L/384.0L*pow(x_2, 3)*(pow(x_0, 2) + 2*x_0 + pow(x_1, 2) - 6*x_1 + 8) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) - 1.0L/384.0L*x_2*(12*pow(x_0, 2) + 24*x_0 + 2*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 2*x_0 - 4) - 12*x_1*(pow(x_0, 2) + 2*x_0 - 2) - 16) + 5.0L/24.0L;
           return __pp_r671_____result;
        }
        static inline double __pp_r672____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r672_____result;
           __pp_r672_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 + 48) + (1.0L/96.0L)*x_1*(pow(x_0, 3) - 3*pow(x_0, 2) - 6*x_0 + 20) - 1.0L/1920.0L*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/384.0L)*pow(x_2, 3)*(pow(x_0, 2) - 2*x_0 + pow(x_1, 2) + 6*x_1 + 8) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) + (1.0L/384.0L)*x_2*(12*pow(x_0, 2) - 24*x_0 - 2*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 2*x_0 - 4) + 12*x_1*(pow(x_0, 2) - 2*x_0 - 2) - 16) + 5.0L/24.0L;
           return __pp_r672_____result;
        }
        static inline double __pp_r673____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r673_____result;
           __pp_r673_____result = -1.0L/1920.0L*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/384.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*x_0 + 24) + (1.0L/192.0L)*x_1*(3*pow(x_0, 3) - 6*pow(x_0, 2) - 12*x_0 + 40) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/768.0L)*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 8*x_0 - 8) - 48) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) - 24*pow(x_0, 2) + 48*x_0 + 4*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) - 12*x_1*(pow(x_0, 2) - 4*x_0 - 4) + 32) + 5.0L/24.0L;
           return __pp_r673_____result;
        }
        static inline double __pp_r674____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r674_____result;
           __pp_r674_____result = (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 16) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 8) + (1.0L/12.0L)*x_1 + (1.0L/1280.0L)*pow(x_2, 5) - 1.0L/96.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(3*pow(x_0, 2) + 3*pow(x_1, 2) + 8*x_1 - 32) - 1.0L/768.0L*pow(x_2, 2)*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 16) + 32) - 1.0L/768.0L*x_2*(9*pow(x_0, 2)*pow(x_1, 2) - 8*pow(x_1, 3) + 96*x_1 + 64) + 3.0L/20.0L;
           return __pp_r674_____result;
        }
        static inline double __pp_r675____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r675_____result;
           __pp_r675_____result = (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 2) - 1.0L/1280.0L*pow(x_1, 5) - 1.0L/96.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(3*pow(x_0, 2) - 32) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 8) + (1.0L/12.0L)*x_1 - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/768.0L)*pow(x_2, 2)*(9*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + 3*pow(x_1, 3) + 12*pow(x_1, 2) - 32) + (1.0L/768.0L)*x_2*(-8*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 16) - 96*x_1 - 64) + 3.0L/20.0L;
           return __pp_r675_____result;
        }
        static inline double __pp_r676____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r676_____result;
           __pp_r676_____result = -1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 32) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 32) - 1.0L/48.0L*x_1*(3*pow(x_0, 2) - 16) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/768.0L*pow(x_2, 2)*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) + 64) + (1.0L/256.0L)*x_2*(pow(x_0, 2)*pow(x_1, 2) + 8*pow(x_0, 2)*x_1 + 16*pow(x_0, 2)) + 4.0L/15.0L;
           return __pp_r676_____result;
        }
        static inline double __pp_r677____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r677_____result;
           __pp_r677_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 - 48) - 1.0L/96.0L*x_1*(pow(x_0, 3) + 3*pow(x_0, 2) - 6*x_0 - 20) - 1.0L/1920.0L*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/384.0L)*pow(x_2, 3)*(pow(x_0, 2) + 2*x_0 + pow(x_1, 2) + 6*x_1 + 8) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) + (1.0L/384.0L)*x_2*(12*pow(x_0, 2) + 24*x_0 - 2*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 2*x_0 - 4) + 12*x_1*(pow(x_0, 2) + 2*x_0 - 2) - 16) + 5.0L/24.0L;
           return __pp_r677_____result;
        }
        static inline double __pp_r678____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r678_____result;
           __pp_r678_____result = (1.0L/1920.0L)*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) - 1.0L/384.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*x_0 - 24) - 1.0L/192.0L*x_1*(3*pow(x_0, 3) + 6*pow(x_0, 2) - 12*x_0 - 40) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/768.0L*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 8*x_0 - 8) + 48) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) + 24*pow(x_0, 2) + 48*x_0 - 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) + 12*x_1*(pow(x_0, 2) + 4*x_0 - 4) - 32) + 5.0L/24.0L;
           return __pp_r678_____result;
        }
        static inline double __pp_r679____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r679_____result;
           __pp_r679_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + (1.0L/192.0L)*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 2.0L/5.0L;
           return __pp_r679_____result;
        }
        static inline double __pp_r680____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r680_____result;
           __pp_r680_____result = (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 12*x_0 + 16) + (1.0L/48.0L)*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) + 64) - 1.0L/768.0L*x_2*(48*pow(x_0, 2) - 192*x_0 + 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) + 24*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r680_____result;
        }
        static inline double __pp_r681____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r681_____result;
           __pp_r681_____result = (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 12*x_0 + 16) + (1.0L/48.0L)*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) + 64) - 1.0L/768.0L*x_2*(48*pow(x_0, 2) - 192*x_0 + 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) + 24*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r681_____result;
        }
        static inline double __pp_r682____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r682_____result;
           __pp_r682_____result = -1.0L/1920.0L*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 16) + (1.0L/384.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*x_0 - 24) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 12*x_0 + 8) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) - 1.0L/768.0L*x_2*(12*pow(x_0, 3) - 24*pow(x_0, 2) - 48*x_0 - 8*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 - 8) - 12*x_1*(pow(x_0, 2) - 4*x_0 - 4) + 160) + 5.0L/24.0L;
           return __pp_r682_____result;
        }
        static inline double __pp_r683____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r683_____result;
           __pp_r683_____result = (1.0L/192.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/192.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 32) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) + (1.0L/768.0L)*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(5*pow(x_0, 2) + 5*pow(x_1, 2) + 16*x_1 + 16) - 1.0L/768.0L*pow(x_2, 2)*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) + 64) - 1.0L/256.0L*x_2*(5*pow(x_0, 2)*pow(x_1, 2) + 16*pow(x_0, 2)*x_1 + 16*pow(x_0, 2)) + 1.0L/10.0L;
           return __pp_r683_____result;
        }
        static inline double __pp_r684____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r684_____result;
           __pp_r684_____result = (1.0L/192.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(5*pow(x_0, 2) + 16) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/192.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 32) - 1.0L/768.0L*pow(x_2, 2)*(15*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + 5*pow(x_1, 3) + 12*pow(x_1, 2) + 64) - 1.0L/768.0L*x_2*(48*pow(x_0, 2)*x_1 + 48*pow(x_0, 2) + 16*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 16)) + 1.0L/10.0L;
           return __pp_r684_____result;
        }
        static inline double __pp_r685____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r685_____result;
           __pp_r685_____result = (1.0L/768.0L)*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/192.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 32) - 1.0L/768.0L*pow(x_1, 2)*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 64) - 1.0L/48.0L*x_1*(pow(x_0, 3) + 3*pow(x_0, 2)) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 2)*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(5*x_0 + 4) + 3*x_1*(pow(x_0, 2) + 16*x_0 + 16) + 64) + 1.0L/10.0L;
           return __pp_r685_____result;
        }
        static inline double __pp_r686____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r686_____result;
           __pp_r686_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) + (1.0L/12.0L)*x_0 - 1.0L/1280.0L*pow(x_1, 5) - 1.0L/96.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(3*pow(x_0, 2) + 8*x_0 - 32) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) - 48*x_0 + 32) - 1.0L/96.0L*x_1*(pow(x_0, 3) - 12*x_0 - 8) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 9*pow(x_0, 2)*x_1 - 12*pow(x_0, 2) - 3*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) + 32) + 3.0L/20.0L;
           return __pp_r686_____result;
        }
        static inline double __pp_r687____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r687_____result;
           __pp_r687_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) - 1.0L/12.0L*x_0 - 1.0L/1280.0L*pow(x_1, 5) - 1.0L/96.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(3*pow(x_0, 2) - 8*x_0 - 32) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) - 48*x_0 - 32) + (1.0L/96.0L)*x_1*(pow(x_0, 3) - 12*x_0 + 8) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 9*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + 3*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 32) + 3.0L/20.0L;
           return __pp_r687_____result;
        }
        static inline double __pp_r688____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r688_____result;
           __pp_r688_____result = -1.0L/768.0L*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/192.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 32) + (1.0L/768.0L)*pow(x_1, 2)*(5*pow(x_0, 3) - 12*pow(x_0, 2) - 64) + (1.0L/48.0L)*x_1*(pow(x_0, 3) - 3*pow(x_0, 2)) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 2)*(5*pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(5*x_0 - 4) - 3*x_1*(pow(x_0, 2) - 16*x_0 + 16) - 64) + 1.0L/10.0L;
           return __pp_r688_____result;
        }
        static inline double __pp_r689____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r689_____result;
           __pp_r689_____result = (1.0L/192.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(5*pow(x_0, 2) + 16) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/192.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 32) - 1.0L/768.0L*pow(x_2, 2)*(15*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + 5*pow(x_1, 3) + 12*pow(x_1, 2) + 64) + (1.0L/768.0L)*x_2*(48*pow(x_0, 2)*x_1 + 48*pow(x_0, 2) + 16*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 16)) + 1.0L/10.0L;
           return __pp_r689_____result;
        }
        static inline double __pp_r690____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r690_____result;
           __pp_r690_____result = (1.0L/192.0L)*pow(x_0, 4) - 1.0L/16.0L*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/192.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 32) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) - 1.0L/768.0L*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(5*pow(x_0, 2) + 5*pow(x_1, 2) + 16*x_1 + 16) - 1.0L/768.0L*pow(x_2, 2)*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) + 64) + (1.0L/256.0L)*x_2*(5*pow(x_0, 2)*pow(x_1, 2) + 16*pow(x_0, 2)*x_1 + 16*pow(x_0, 2)) + 1.0L/10.0L;
           return __pp_r690_____result;
        }
        static inline double __pp_r691____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r691_____result;
           __pp_r691_____result = -1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 32) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 32) - 1.0L/48.0L*x_1*(3*pow(x_0, 2) - 16) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/768.0L*pow(x_2, 2)*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) + 64) - 1.0L/256.0L*x_2*(pow(x_0, 2)*pow(x_1, 2) + 8*pow(x_0, 2)*x_1 + 16*pow(x_0, 2)) + 4.0L/15.0L;
           return __pp_r691_____result;
        }
        static inline double __pp_r692____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r692_____result;
           __pp_r692_____result = (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 12*x_0 + 16) + (1.0L/48.0L)*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) + 64) + (1.0L/768.0L)*x_2*(48*pow(x_0, 2) - 192*x_0 + 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) + 24*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r692_____result;
        }
        static inline double __pp_r693____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r693_____result;
           __pp_r693_____result = -1.0L/1920.0L*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/384.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*x_0 + 24) + (1.0L/192.0L)*x_1*(3*pow(x_0, 3) - 6*pow(x_0, 2) - 12*x_0 + 40) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/768.0L)*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 8*x_0 - 8) - 48) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) - 24*pow(x_0, 2) + 48*x_0 + 4*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) - 12*x_1*(pow(x_0, 2) - 4*x_0 - 4) + 32) + 5.0L/24.0L;
           return __pp_r693_____result;
        }
        static inline double __pp_r694____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r694_____result;
           __pp_r694_____result = -1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 32) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 32) - 1.0L/48.0L*x_1*(3*pow(x_0, 2) - 16) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/768.0L*pow(x_2, 2)*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) + 64) - 1.0L/256.0L*x_2*(pow(x_0, 2)*pow(x_1, 2) + 8*pow(x_0, 2)*x_1 + 16*pow(x_0, 2)) + 4.0L/15.0L;
           return __pp_r694_____result;
        }
        static inline double __pp_r695____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r695_____result;
           __pp_r695_____result = (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) + 12*x_0 + 16) + (1.0L/48.0L)*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) + 64) + (1.0L/768.0L)*x_2*(48*pow(x_0, 2) + 192*x_0 + 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) + 24*x_1*(pow(x_0, 2) + 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r695_____result;
        }
        static inline double __pp_r696____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r696_____result;
           __pp_r696_____result = (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 2) - 1.0L/1280.0L*pow(x_1, 5) - 1.0L/96.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(3*pow(x_0, 2) - 32) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 8) + (1.0L/12.0L)*x_1 + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) + (1.0L/768.0L)*pow(x_2, 2)*(9*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + 3*pow(x_1, 3) + 12*pow(x_1, 2) - 32) - 1.0L/768.0L*x_2*(-8*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 16) - 96*x_1 - 64) + 3.0L/20.0L;
           return __pp_r696_____result;
        }
        static inline double __pp_r697____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r697_____result;
           __pp_r697_____result = (1.0L/1920.0L)*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) - 1.0L/384.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*x_0 - 24) - 1.0L/192.0L*x_1*(3*pow(x_0, 3) + 6*pow(x_0, 2) - 12*x_0 - 40) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/768.0L*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 8*x_0 - 8) + 48) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) + 24*pow(x_0, 2) + 48*x_0 - 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 - 8) + 12*x_1*(pow(x_0, 2) + 4*x_0 - 4) - 32) + 5.0L/24.0L;
           return __pp_r697_____result;
        }
        static inline double __pp_r698____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r698_____result;
           __pp_r698_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 32) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) - 128) - 1.0L/96.0L*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) - 32) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 4.0L/15.0L;
           return __pp_r698_____result;
        }
        static inline double __pp_r699____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r699_____result;
           __pp_r699_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 32) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) - 128) - 1.0L/96.0L*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) - 32) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 4.0L/15.0L;
           return __pp_r699_____result;
        }
        static inline double __pp_r700____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r700_____result;
           __pp_r700_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + (1.0L/192.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 2.0L/5.0L;
           return __pp_r700_____result;
        }
        static inline double __pp_r701____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r701_____result;
           __pp_r701_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 - 48) - 1.0L/96.0L*x_1*(pow(x_0, 3) + 3*pow(x_0, 2) - 6*x_0 - 20) + (1.0L/1920.0L)*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) - 1.0L/384.0L*pow(x_2, 3)*(pow(x_0, 2) + 2*x_0 + pow(x_1, 2) + 6*x_1 + 8) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) - 1.0L/384.0L*x_2*(12*pow(x_0, 2) + 24*x_0 - 2*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 2*x_0 - 4) + 12*x_1*(pow(x_0, 2) + 2*x_0 - 2) - 16) + 5.0L/24.0L;
           return __pp_r701_____result;
        }
        static inline double __pp_r702____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r702_____result;
           __pp_r702_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - 64) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) - 1.0L/192.0L*x_2*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 2.0L/5.0L;
           return __pp_r702_____result;
        }
        static inline double __pp_r703____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r703_____result;
           __pp_r703_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 32) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 128) + (1.0L/96.0L)*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 32) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 4.0L/15.0L;
           return __pp_r703_____result;
        }
        static inline double __pp_r704____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r704_____result;
           __pp_r704_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 + 48) + (1.0L/96.0L)*x_1*(pow(x_0, 3) - 3*pow(x_0, 2) - 6*x_0 + 20) + (1.0L/1920.0L)*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) - 1.0L/384.0L*pow(x_2, 3)*(pow(x_0, 2) - 2*x_0 + pow(x_1, 2) + 6*x_1 + 8) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) + 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) - 1.0L/384.0L*x_2*(12*pow(x_0, 2) - 24*x_0 - 2*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 2*x_0 - 4) + 12*x_1*(pow(x_0, 2) - 2*x_0 - 2) - 16) + 5.0L/24.0L;
           return __pp_r704_____result;
        }
        static inline double __pp_r705____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r705_____result;
           __pp_r705_____result = -1.0L/3840.0L*pow(x_0, 5) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 32) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 128) + (1.0L/96.0L)*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 32) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 - 4) - 3*x_1*(pow(x_0, 2) - 8*x_0 + 16) - 64) + 4.0L/15.0L;
           return __pp_r705_____result;
        }
        static inline double __pp_r706____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r706_____result;
           __pp_r706_____result = -1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) - 32) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) - 32) - 1.0L/48.0L*x_1*(3*pow(x_0, 2) - 16) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 8*x_1 + 16) - 1.0L/768.0L*pow(x_2, 2)*(12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 16) + 64) + (1.0L/256.0L)*x_2*(pow(x_0, 2)*pow(x_1, 2) + 8*pow(x_0, 2)*x_1 + 16*pow(x_0, 2)) + 4.0L/15.0L;
           return __pp_r706_____result;
        }
        static inline double __pp_r707____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r707_____result;
           __pp_r707_____result = -1.0L/16.0L*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 16) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) + (1.0L/3840.0L)*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/768.0L*pow(x_2, 2)*(3*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) - 128) - 1.0L/768.0L*x_2*(24*pow(x_0, 2)*x_1 + 48*pow(x_0, 2) + 8*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 16) - 256) + 4.0L/15.0L;
           return __pp_r707_____result;
        }
        static inline double __pp_r708____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r708_____result;
           __pp_r708_____result = -1.0L/16.0L*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 16) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) + (1.0L/3840.0L)*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/768.0L*pow(x_2, 2)*(3*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) - 128) - 1.0L/768.0L*x_2*(24*pow(x_0, 2)*x_1 + 48*pow(x_0, 2) + 8*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 16) - 256) + 4.0L/15.0L;
           return __pp_r708_____result;
        }
        static inline double __pp_r709____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r709_____result;
           __pp_r709_____result = (1.0L/1920.0L)*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 16) - 1.0L/384.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*x_0 + 24) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) + 12*x_0 - 8) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) - 1.0L/768.0L*x_2*(12*pow(x_0, 3) + 24*pow(x_0, 2) - 48*x_0 + 8*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 - 8) + 12*x_1*(pow(x_0, 2) + 4*x_0 - 4) - 160) + 5.0L/24.0L;
           return __pp_r709_____result;
        }
        static inline double __pp_r710____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r710_____result;
           __pp_r710_____result = (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) + 12*x_0 + 16) + (1.0L/48.0L)*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) + 64) + (1.0L/768.0L)*x_2*(48*pow(x_0, 2) + 192*x_0 + 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) + 24*x_1*(pow(x_0, 2) + 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r710_____result;
        }
        static inline double __pp_r711____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r711_____result;
           __pp_r711_____result = (1.0L/12.0L)*pow(x_0, 2) - 1.0L/3.0L*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) - 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 12*x_0 + 16) + (1.0L/48.0L)*x_1*(3*pow(x_0, 2) - 12*x_0 + 16) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(12*pow(x_0, 2) - 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 4*x_0 + 16) + 64) + (1.0L/768.0L)*x_2*(48*pow(x_0, 2) - 192*x_0 + 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 + 16) + 24*x_1*(pow(x_0, 2) - 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r711_____result;
        }
        static inline double __pp_r712____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r712_____result;
           __pp_r712_____result = -1.0L/1920.0L*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) + (1.0L/48.0L)*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) - 1.0L/24.0L*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 16) + (1.0L/384.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*x_0 - 24) + (1.0L/192.0L)*x_1*(pow(x_0, 3) - 6*pow(x_0, 2) + 12*x_0 + 8) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) - 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) - 4*x_0 - 8) + 48) + (1.0L/768.0L)*x_2*(12*pow(x_0, 3) - 24*pow(x_0, 2) - 48*x_0 - 8*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 - 8) - 12*x_1*(pow(x_0, 2) - 4*x_0 - 4) + 160) + 5.0L/24.0L;
           return __pp_r712_____result;
        }
        static inline double __pp_r713____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r713_____result;
           __pp_r713_____result = (1.0L/192.0L)*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 16) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) - 8) + (1.0L/12.0L)*x_1 - 1.0L/1280.0L*pow(x_2, 5) - 1.0L/96.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(3*pow(x_0, 2) + 3*pow(x_1, 2) + 8*x_1 - 32) - 1.0L/768.0L*pow(x_2, 2)*(-12*pow(x_0, 2) + pow(x_1, 3) - 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) - 16) + 32) + (1.0L/768.0L)*x_2*(9*pow(x_0, 2)*pow(x_1, 2) - 8*pow(x_1, 3) + 96*x_1 + 64) + 3.0L/20.0L;
           return __pp_r713_____result;
        }
        static inline double __pp_r714____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r714_____result;
           __pp_r714_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) + (1.0L/12.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 32) - 1.0L/1280.0L*pow(x_2, 5) - 1.0L/96.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(3*pow(x_0, 2) + 8*x_0 + 3*pow(x_1, 2) - 32) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) - 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) + 32) + (1.0L/768.0L)*x_2*(-8*pow(x_0, 3) + 9*pow(x_0, 2)*pow(x_1, 2) + 96*x_0 + 64) + 3.0L/20.0L;
           return __pp_r714_____result;
        }
        static inline double __pp_r715____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r715_____result;
           __pp_r715_____result = -1.0L/1280.0L*pow(x_0, 5) - 1.0L/96.0L*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) + (1.0L/12.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 2)*(3*pow(x_0, 3) + 12*pow(x_0, 2) - 32) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + (1.0L/768.0L)*pow(x_2, 2)*(3*pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(3*x_0 + 4) - 32) - 1.0L/768.0L*x_2*(-8*pow(x_0, 3) + 3*pow(x_0, 2)*pow(x_1, 2) - 48*pow(x_0, 2) - 96*x_0 - 64) + 3.0L/20.0L;
           return __pp_r715_____result;
        }
        static inline double __pp_r716____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r716_____result;
           __pp_r716_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) + (5.0L/24.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 - 48) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) + 12*x_0 + 8) + (1.0L/1920.0L)*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) - 1.0L/384.0L*pow(x_2, 3)*(pow(x_0, 2) + 6*x_0 + pow(x_1, 2) - 2*x_1 + 8) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 8) - 48) + (1.0L/384.0L)*x_2*(2*pow(x_0, 3) + 12*pow(x_0, 2) + 24*x_0 - 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 4) + 6*x_1*(pow(x_0, 2) + 4*x_0 + 4) + 16) + 5.0L/24.0L;
           return __pp_r716_____result;
        }
        static inline double __pp_r717____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r717_____result;
           __pp_r717_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) + (5.0L/24.0L)*x_0 - 1.0L/1920.0L*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/384.0L)*pow(x_1, 3)*(pow(x_0, 2) + 6*x_0 + 8) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 - 48) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) + 12*x_0 + 8) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 48) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) + 24*pow(x_0, 2) + 48*x_0 + 4*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 8) + 12*x_1*(pow(x_0, 2) + 4*x_0 + 4) + 32) + 5.0L/24.0L;
           return __pp_r717_____result;
        }
        static inline double __pp_r718____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r718_____result;
           __pp_r718_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) + (5.0L/24.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 - 48) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) + 12*x_0 + 8) + (1.0L/1920.0L)*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) - 1.0L/384.0L*pow(x_2, 3)*(pow(x_0, 2) + 6*x_0 + pow(x_1, 2) + 2*x_1 + 8) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 4*x_0 + 8) - 48) + (1.0L/384.0L)*x_2*(2*pow(x_0, 3) + 12*pow(x_0, 2) + 24*x_0 - 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 4) - 6*x_1*(pow(x_0, 2) + 4*x_0 + 4) + 16) + 5.0L/24.0L;
           return __pp_r718_____result;
        }
        static inline double __pp_r719____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r719_____result;
           __pp_r719_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) + (5.0L/24.0L)*x_0 + (1.0L/1920.0L)*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) - 1.0L/384.0L*pow(x_1, 3)*(pow(x_0, 2) + 6*x_0 + 8) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 - 48) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) + 12*x_0 + 8) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 48) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) + 24*pow(x_0, 2) + 48*x_0 - 4*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 8) - 12*x_1*(pow(x_0, 2) + 4*x_0 + 4) + 32) + 5.0L/24.0L;
           return __pp_r719_____result;
        }
        static inline double __pp_r720____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r720_____result;
           __pp_r720_____result = (1.0L/3840.0L)*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/256.0L*pow(x_1, 2)*x_2*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 64) + 4.0L/15.0L;
           return __pp_r720_____result;
        }
        static inline double __pp_r721____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r721_____result;
           __pp_r721_____result = (1.0L/768.0L)*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 2)*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/192.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 32) - 1.0L/768.0L*pow(x_2, 2)*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(5*x_0 + 4) + 64) - 1.0L/768.0L*x_2*(16*pow(x_0, 3) + 48*pow(x_0, 2) + 3*pow(x_1, 2)*(pow(x_0, 2) + 16*x_0 + 16)) + 1.0L/10.0L;
           return __pp_r721_____result;
        }
        static inline double __pp_r722____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r722_____result;
           __pp_r722_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/192.0L*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/256.0L)*pow(x_1, 2)*x_2*(5*pow(x_0, 2) + 16*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/768.0L*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(5*pow(x_0, 2) + 16*x_0 + 5*pow(x_1, 2) + 16) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 64) + 1.0L/10.0L;
           return __pp_r722_____result;
        }
        static inline double __pp_r723____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r723_____result;
           __pp_r723_____result = (1.0L/768.0L)*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 2)*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/192.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) + 32) - 1.0L/768.0L*pow(x_2, 2)*(5*pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(5*x_0 + 4) + 64) + (1.0L/768.0L)*x_2*(16*pow(x_0, 3) + 48*pow(x_0, 2) + 3*pow(x_1, 2)*(pow(x_0, 2) + 16*x_0 + 16)) + 1.0L/10.0L;
           return __pp_r723_____result;
        }
        static inline double __pp_r724____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r724_____result;
           __pp_r724_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/192.0L*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(5*pow(x_0, 2) + 16*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - 5*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(5*pow(x_0, 2) + 16*x_0 + 16) + 64) + 1.0L/10.0L;
           return __pp_r724_____result;
        }
        static inline double __pp_r725____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r725_____result;
           __pp_r725_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/192.0L*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/768.0L)*pow(x_1, 5) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(5*pow(x_0, 2) + 16*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 5*pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(5*pow(x_0, 2) + 16*x_0 + 16) + 64) + 1.0L/10.0L;
           return __pp_r725_____result;
        }
        static inline double __pp_r726____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r726_____result;
           __pp_r726_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/192.0L*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/256.0L*pow(x_1, 2)*x_2*(5*pow(x_0, 2) + 16*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/768.0L)*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(5*pow(x_0, 2) + 16*x_0 + 5*pow(x_1, 2) + 16) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 64) + 1.0L/10.0L;
           return __pp_r726_____result;
        }
        static inline double __pp_r727____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r727_____result;
           __pp_r727_____result = -1.0L/1280.0L*pow(x_0, 5) - 1.0L/96.0L*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) + (1.0L/12.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(3*pow(x_0, 3) + 12*pow(x_0, 2) - 32) - 1.0L/96.0L*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) + 12*x_0 + 8) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 2)*(3*pow(x_0, 3) + 3*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + pow(x_1, 3) + 3*pow(x_1, 2)*(3*x_0 + 4) - 32) + 3.0L/20.0L;
           return __pp_r727_____result;
        }
        static inline double __pp_r728____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r728_____result;
           __pp_r728_____result = -1.0L/1280.0L*pow(x_0, 5) - 1.0L/96.0L*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) + (1.0L/12.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(3*pow(x_0, 3) + 12*pow(x_0, 2) - 32) + (1.0L/96.0L)*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) + 12*x_0 + 8) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 2)*(3*pow(x_0, 3) - 3*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) - pow(x_1, 3) + 3*pow(x_1, 2)*(3*x_0 + 4) - 32) + 3.0L/20.0L;
           return __pp_r728_____result;
        }
        static inline double __pp_r729____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r729_____result;
           __pp_r729_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 - 1.0L/1920.0L*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/384.0L)*pow(x_1, 3)*(pow(x_0, 2) + 2*x_0 + 8) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 24*x_0 + 48) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) + 6*x_0 - 4) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) + 2*x_0 - 4) - 48) - 1.0L/768.0L*x_2*(8*pow(x_0, 3) + 24*pow(x_0, 2) - 48*x_0 - 12*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) - 24*x_1*(pow(x_0, 2) + 2*x_0 - 2) - 160) + 5.0L/24.0L;
           return __pp_r729_____result;
        }
        static inline double __pp_r730____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r730_____result;
           __pp_r730_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) - 12*x_1*(x_0 + 4) + 64) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) + 48*pow(x_0, 2) + 192*x_0 + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 12*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 256) + 2.0L/5.0L;
           return __pp_r730_____result;
        }
        static inline double __pp_r731____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r731_____result;
           __pp_r731_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + (1.0L/192.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 2.0L/5.0L;
           return __pp_r731_____result;
        }
        static inline double __pp_r732____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r732_____result;
           __pp_r732_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) - 12*x_1*(x_0 + 4) + 64) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) + 48*pow(x_0, 2) + 192*x_0 + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 12*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 256) + 2.0L/5.0L;
           return __pp_r732_____result;
        }
        static inline double __pp_r733____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r733_____result;
           __pp_r733_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 + (1.0L/1920.0L)*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) - 1.0L/384.0L*pow(x_1, 3)*(pow(x_0, 2) + 2*x_0 + 8) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 24*x_0 + 48) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 6*x_0 - 4) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) + 2*x_0 - 4) - 48) - 1.0L/768.0L*x_2*(8*pow(x_0, 3) + 24*pow(x_0, 2) - 48*x_0 + 12*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) + 24*x_1*(pow(x_0, 2) + 2*x_0 - 2) - 160) + 5.0L/24.0L;
           return __pp_r733_____result;
        }
        static inline double __pp_r734____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r734_____result;
           __pp_r734_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 12*x_1*(x_0 + 4) + 64) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) + 48*pow(x_0, 2) + 192*x_0 + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + 12*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 256) + 2.0L/5.0L;
           return __pp_r734_____result;
        }
        static inline double __pp_r735____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r735_____result;
           __pp_r735_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + (1.0L/192.0L)*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 2.0L/5.0L;
           return __pp_r735_____result;
        }
        static inline double __pp_r736____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r736_____result;
           __pp_r736_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/3840.0L*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 12*x_1*(x_0 + 4) + 64) + (1.0L/768.0L)*x_2*(4*pow(x_0, 3) + 48*pow(x_0, 2) + 192*x_0 + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + 12*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 256) + 2.0L/5.0L;
           return __pp_r736_____result;
        }
        static inline double __pp_r737____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r737_____result;
           __pp_r737_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/3840.0L)*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 + 4) - 128) - 1.0L/768.0L*x_2*(8*pow(x_0, 3) + 48*pow(x_0, 2) + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 256) + 4.0L/15.0L;
           return __pp_r737_____result;
        }
        static inline double __pp_r738____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r738_____result;
           __pp_r738_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/3840.0L)*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 + 4) - 128) - 1.0L/768.0L*x_2*(8*pow(x_0, 3) + 48*pow(x_0, 2) + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 256) + 4.0L/15.0L;
           return __pp_r738_____result;
        }
        static inline double __pp_r739____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r739_____result;
           __pp_r739_____result = (1.0L/1920.0L)*pow(x_0, 5) + (1.0L/384.0L)*pow(x_0, 4) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 16) - 1.0L/384.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*x_0 + 24) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) + 12*x_0 - 8) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(2*pow(x_0, 3) + 6*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 4*x_0 - 8) - 48) + (1.0L/768.0L)*x_2*(12*pow(x_0, 3) + 24*pow(x_0, 2) - 48*x_0 + 8*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) - 8*x_0 - 8) + 12*x_1*(pow(x_0, 2) + 4*x_0 - 4) - 160) + 5.0L/24.0L;
           return __pp_r739_____result;
        }
        static inline double __pp_r740____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r740_____result;
           __pp_r740_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 + 4) - 128) + (1.0L/768.0L)*x_2*(8*pow(x_0, 3) + 48*pow(x_0, 2) + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 256) + 4.0L/15.0L;
           return __pp_r740_____result;
        }
        static inline double __pp_r741____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r741_____result;
           __pp_r741_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 + (1.0L/1920.0L)*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) - 1.0L/384.0L*pow(x_1, 3)*(pow(x_0, 2) + 2*x_0 + 8) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 24*x_0 + 48) - 1.0L/96.0L*x_1*(3*pow(x_0, 2) + 6*x_0 - 4) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) + 2*x_0 - 4) - 48) + (1.0L/768.0L)*x_2*(8*pow(x_0, 3) + 24*pow(x_0, 2) - 48*x_0 + 12*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) + 24*x_1*(pow(x_0, 2) + 2*x_0 - 2) - 160) + 5.0L/24.0L;
           return __pp_r741_____result;
        }
        static inline double __pp_r742____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r742_____result;
           __pp_r742_____result = (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) + 12*x_0 + 16) + (1.0L/48.0L)*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) + 64) - 1.0L/768.0L*x_2*(48*pow(x_0, 2) + 192*x_0 + 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) + 24*x_1*(pow(x_0, 2) + 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r742_____result;
        }
        static inline double __pp_r743____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r743_____result;
           __pp_r743_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 12*x_1*(x_0 + 4) + 64) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) + 48*pow(x_0, 2) + 192*x_0 + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + 12*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 256) + 2.0L/5.0L;
           return __pp_r743_____result;
        }
        static inline double __pp_r744____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r744_____result;
           __pp_r744_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 12*x_1*(x_0 + 4) + 64) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) + 48*pow(x_0, 2) + 192*x_0 + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) + 12*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 256) + 2.0L/5.0L;
           return __pp_r744_____result;
        }
        static inline double __pp_r745____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r745_____result;
           __pp_r745_____result = -1.0L/16.0L*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 16) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/768.0L*pow(x_2, 2)*(3*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) - 128) + (1.0L/768.0L)*x_2*(24*pow(x_0, 2)*x_1 + 48*pow(x_0, 2) + 8*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 16) - 256) + 4.0L/15.0L;
           return __pp_r745_____result;
        }
        static inline double __pp_r746____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r746_____result;
           __pp_r746_____result = -1.0L/16.0L*pow(x_0, 2)*x_1 - 1.0L/12.0L*pow(x_0, 2) + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 16) - 1.0L/192.0L*pow(x_1, 2)*(3*pow(x_0, 2) + 16) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/768.0L*pow(x_2, 2)*(3*pow(x_0, 2)*x_1 + 12*pow(x_0, 2) + pow(x_1, 3) + 12*pow(x_1, 2) - 128) + (1.0L/768.0L)*x_2*(24*pow(x_0, 2)*x_1 + 48*pow(x_0, 2) + 8*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 16) - 256) + 4.0L/15.0L;
           return __pp_r746_____result;
        }
        static inline double __pp_r747____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r747_____result;
           __pp_r747_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/12.0L*pow(x_0, 2) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/192.0L)*pow(x_2, 4) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + pow(x_1, 2) - 32) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(x_0 + 4) - 128) + (1.0L/768.0L)*x_2*(8*pow(x_0, 3) + 48*pow(x_0, 2) + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 256) + 4.0L/15.0L;
           return __pp_r747_____result;
        }
        static inline double __pp_r748____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r748_____result;
           __pp_r748_____result = -1.0L/1280.0L*pow(x_0, 5) - 1.0L/96.0L*pow(x_0, 4) - 1.0L/24.0L*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) + (1.0L/12.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 2)*(3*pow(x_0, 3) + 12*pow(x_0, 2) - 32) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + (1.0L/768.0L)*pow(x_2, 2)*(3*pow(x_0, 3) + 12*pow(x_0, 2) + 3*pow(x_1, 2)*(3*x_0 + 4) - 32) + (1.0L/768.0L)*x_2*(-8*pow(x_0, 3) + 3*pow(x_0, 2)*pow(x_1, 2) - 48*pow(x_0, 2) - 96*x_0 - 64) + 3.0L/20.0L;
           return __pp_r748_____result;
        }
        static inline double __pp_r749____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r749_____result;
           __pp_r749_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) + (5.0L/24.0L)*x_0 + (1.0L/1920.0L)*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) - 1.0L/384.0L*pow(x_1, 3)*(pow(x_0, 2) + 6*x_0 + 8) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 - 48) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) + 12*x_0 + 8) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 48) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) + 24*pow(x_0, 2) + 48*x_0 - 4*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 8) - 12*x_1*(pow(x_0, 2) + 4*x_0 + 4) + 32) + 5.0L/24.0L;
           return __pp_r749_____result;
        }
        static inline double __pp_r750____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r750_____result;
           __pp_r750_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/16.0L*pow(x_0, 2) + (1.0L/24.0L)*x_0 - 1.0L/1920.0L*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/384.0L)*pow(x_1, 3)*(pow(x_0, 2) + 2*x_0 + 8) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 24*x_0 + 48) + (1.0L/96.0L)*x_1*(3*pow(x_0, 2) + 6*x_0 - 4) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - 2*pow(x_1, 3) - 6*x_1*(pow(x_0, 2) + 2*x_0 - 4) - 48) + (1.0L/768.0L)*x_2*(8*pow(x_0, 3) + 24*pow(x_0, 2) - 48*x_0 - 12*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) - 4*x_0 - 8) - 24*x_1*(pow(x_0, 2) + 2*x_0 - 2) - 160) + 5.0L/24.0L;
           return __pp_r750_____result;
        }
        static inline double __pp_r751____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r751_____result;
           __pp_r751_____result = (1.0L/3840.0L)*pow(x_0, 5) - 1.0L/48.0L*pow(x_0, 3) - 1.0L/24.0L*pow(x_0, 2) + (1.0L/12.0L)*x_0 + (1.0L/192.0L)*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) + 32) + (1.0L/1280.0L)*pow(x_2, 5) - 1.0L/96.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(3*pow(x_0, 2) + 8*x_0 + 3*pow(x_1, 2) - 32) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) - 12*pow(x_0, 2) - 48*x_0 + 3*pow(x_1, 2)*(x_0 - 4) + 32) - 1.0L/768.0L*x_2*(-8*pow(x_0, 3) + 9*pow(x_0, 2)*pow(x_1, 2) + 96*x_0 + 64) + 3.0L/20.0L;
           return __pp_r751_____result;
        }
        static inline double __pp_r752____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r752_____result;
           __pp_r752_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) - 1.0L/192.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 2.0L/5.0L;
           return __pp_r752_____result;
        }
        static inline double __pp_r753____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r753_____result;
           __pp_r753_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) - 1.0L/192.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 2.0L/5.0L;
           return __pp_r753_____result;
        }
        static inline double __pp_r754____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r754_____result;
           __pp_r754_____result = (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/192.0L)*pow(x_1, 2)*(3*pow(x_0, 2) + 12*x_0 + 16) + (1.0L/48.0L)*x_1*(3*pow(x_0, 2) + 12*x_0 + 16) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) + 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 12*pow(x_1, 2) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 16) + 64) - 1.0L/768.0L*x_2*(48*pow(x_0, 2) + 192*x_0 + 4*pow(x_1, 3) + 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 16) + 24*x_1*(pow(x_0, 2) + 4*x_0 + 8) + 256) + 2.0L/5.0L;
           return __pp_r754_____result;
        }
        static inline double __pp_r755____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r755_____result;
           __pp_r755_____result = (1.0L/3840.0L)*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 4.0L/15.0L;
           return __pp_r755_____result;
        }
        static inline double __pp_r756____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r756_____result;
           __pp_r756_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) + (5.0L/24.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 - 48) + (1.0L/192.0L)*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) + 12*x_0 + 8) - 1.0L/1920.0L*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/384.0L)*pow(x_2, 3)*(pow(x_0, 2) + 6*x_0 + pow(x_1, 2) + 2*x_1 + 8) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 - pow(x_1, 3) - 3*x_1*(pow(x_0, 2) + 4*x_0 + 8) - 48) - 1.0L/384.0L*x_2*(2*pow(x_0, 3) + 12*pow(x_0, 2) + 24*x_0 - 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 4) - 6*x_1*(pow(x_0, 2) + 4*x_0 + 4) + 16) + 5.0L/24.0L;
           return __pp_r756_____result;
        }
        static inline double __pp_r757____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r757_____result;
           __pp_r757_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) - 12*x_1*(x_0 + 4) + 64) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) + 48*pow(x_0, 2) + 192*x_0 + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 12*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 256) + 2.0L/5.0L;
           return __pp_r757_____result;
        }
        static inline double __pp_r758____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r758_____result;
           __pp_r758_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) + (5.0L/24.0L)*x_0 - 1.0L/1920.0L*pow(x_1, 5) + (1.0L/384.0L)*pow(x_1, 4) + (1.0L/384.0L)*pow(x_1, 3)*(pow(x_0, 2) + 6*x_0 + 8) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 - 48) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) + 12*x_0 + 8) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + 2*pow(x_1, 3) + 6*x_1*(pow(x_0, 2) + 4*x_0 + 4) - 48) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) + 24*pow(x_0, 2) + 48*x_0 + 4*pow(x_1, 3) - 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 8) + 12*x_1*(pow(x_0, 2) + 4*x_0 + 4) + 32) + 5.0L/24.0L;
           return __pp_r758_____result;
        }
        static inline double __pp_r759____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r759_____result;
           __pp_r759_____result = (1.0L/3840.0L)*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 2)*x_2*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 64) + 4.0L/15.0L;
           return __pp_r759_____result;
        }
        static inline double __pp_r760____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r760_____result;
           __pp_r760_____result = (1.0L/3840.0L)*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/256.0L)*pow(x_1, 2)*x_2*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/3840.0L*pow(x_2, 5) + (1.0L/768.0L)*pow(x_2, 3)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 64) + 4.0L/15.0L;
           return __pp_r760_____result;
        }
        static inline double __pp_r761____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r761_____result;
           __pp_r761_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/384.0L*pow(x_2, 4) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 4*x_0 + pow(x_1, 2) - 4*x_1) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) - 12*x_1*(x_0 + 4) + 64) - 1.0L/768.0L*x_2*(4*pow(x_0, 3) + 48*pow(x_0, 2) + 192*x_0 + 3*pow(x_1, 2)*(pow(x_0, 2) + 8*x_0 + 16) - 12*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 256) + 2.0L/5.0L;
           return __pp_r761_____result;
        }
        static inline double __pp_r762____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r762_____result;
           __pp_r762_____result = (1.0L/3840.0L)*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 4.0L/15.0L;
           return __pp_r762_____result;
        }
        static inline double __pp_r763____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r763_____result;
           __pp_r763_____result = (1.0L/3840.0L)*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 4.0L/15.0L;
           return __pp_r763_____result;
        }
        static inline double __pp_r764____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r764_____result;
           __pp_r764_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/12.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/384.0L*pow(x_1, 4) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 4*x_0) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) - 1.0L/192.0L*x_2*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 - pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) - 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 2.0L/5.0L;
           return __pp_r764_____result;
        }
        static inline double __pp_r765____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r765_____result;
           __pp_r765_____result = -1.0L/3840.0L*pow(x_0, 5) - 1.0L/384.0L*pow(x_0, 4) + (1.0L/16.0L)*pow(x_0, 2) + (5.0L/24.0L)*x_0 - 1.0L/3840.0L*pow(x_1, 5) + (1.0L/768.0L)*pow(x_1, 3)*(pow(x_0, 2) + 8*x_0 + 16) + (1.0L/768.0L)*pow(x_1, 2)*(pow(x_0, 3) - 24*x_0 - 48) - 1.0L/192.0L*x_1*(pow(x_0, 3) + 6*pow(x_0, 2) + 12*x_0 + 8) - 1.0L/1920.0L*pow(x_2, 5) + (1.0L/384.0L)*pow(x_2, 4) + (1.0L/384.0L)*pow(x_2, 3)*(pow(x_0, 2) + 6*x_0 + pow(x_1, 2) - 2*x_1 + 8) + (1.0L/768.0L)*pow(x_2, 2)*(pow(x_0, 3) + 3*x_0*pow(x_1, 2) - 24*x_0 + pow(x_1, 3) + 3*x_1*(pow(x_0, 2) + 4*x_0 + 8) - 48) - 1.0L/384.0L*x_2*(2*pow(x_0, 3) + 12*pow(x_0, 2) + 24*x_0 - 3*pow(x_1, 2)*(pow(x_0, 2) + 4*x_0 + 4) + 6*x_1*(pow(x_0, 2) + 4*x_0 + 4) + 16) + 5.0L/24.0L;
           return __pp_r765_____result;
        }
        static inline double __pp_r766____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r766_____result;
           __pp_r766_____result = (1.0L/3840.0L)*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 + (1.0L/3840.0L)*pow(x_1, 5) - 1.0L/768.0L*pow(x_1, 3)*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + pow(x_1, 3) + 3*pow(x_1, 2)*(x_0 + 4) + 3*x_1*(pow(x_0, 2) + 8*x_0 + 16) + 64) + 4.0L/15.0L;
           return __pp_r766_____result;
        }
        static inline double __pp_r767____(const double &x_0, const double &x_1, const double &x_2) {
           double __pp_r767_____result;
           __pp_r767_____result = (1.0L/3840.0L)*pow(x_0, 5) + (1.0L/192.0L)*pow(x_0, 4) + (1.0L/24.0L)*pow(x_0, 3) + (1.0L/6.0L)*pow(x_0, 2) + (1.0L/3.0L)*x_0 - 1.0L/256.0L*pow(x_1, 2)*x_2*(pow(x_0, 2) + 8*x_0 + 16) - 1.0L/768.0L*pow(x_1, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 64) + (1.0L/3840.0L)*pow(x_2, 5) - 1.0L/768.0L*pow(x_2, 3)*(pow(x_0, 2) + 8*x_0 + pow(x_1, 2) + 16) - 1.0L/768.0L*pow(x_2, 2)*(pow(x_0, 3) + 12*pow(x_0, 2) + 48*x_0 + 3*pow(x_1, 2)*(x_0 + 4) + 64) + 4.0L/15.0L;
           return __pp_r767_____result;
        }

        static double box_spline(const double &x_0, const double &x_1, const double &x_2) {
            if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r576____(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r577____(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r578____(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r579____(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                return __pp_r580____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r581____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r582____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r583____(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r584____(x_0, x_1, x_2);
                                            } else {
                                                if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r585____(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return __pp_r586____(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return __pp_r587____(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r588____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r589____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                return __pp_r590____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r591____(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r592____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r593____(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r594____(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r595____(x_0, x_1, x_2);
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r596____(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r597____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r598____(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r599____(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r600____(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r601____(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        return __pp_r602____(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r603____(x_0, x_1, x_2);
                                                    }
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        return __pp_r604____(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                            if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                                return 0;
                                                            } else {
                                                                return __pp_r605____(x_0, x_1, x_2);
                                                            }
                                                        } else {
                                                            if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                                return 0;
                                                            } else {
                                                                return __pp_r606____(x_0, x_1, x_2);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            return __pp_r607____(x_0, x_1, x_2);
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r608____(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r609____(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r610____(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r611____(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r612____(x_0, x_1, x_2);
                                                } else {
                                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                        return 0;
                                                    } else {
                                                        return __pp_r613____(x_0, x_1, x_2);
                                                    }
                                                }
                                            } else {
                                                return __pp_r614____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return __pp_r615____(x_0, x_1, x_2);
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r616____(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r617____(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r618____(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r619____(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r620____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r621____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r622____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r623____(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r624____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                            return __pp_r625____(x_0, x_1, x_2);
                                                        } else {
                                                            if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                                return 0;
                                                            } else {
                                                                return __pp_r626____(x_0, x_1, x_2);
                                                            }
                                                        }
                                                    } else {
                                                        if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                            return 0;
                                                        } else {
                                                            return __pp_r627____(x_0, x_1, x_2);
                                                        }
                                                    }
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        return __pp_r628____(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r629____(x_0, x_1, x_2);
                                                    }
                                                }
                                            } else {
                                                if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r630____(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        return __pp_r631____(x_0, x_1, x_2);
                                    }
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                            return __pp_r632____(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r633____(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            return __pp_r634____(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r635____(x_0, x_1, x_2);
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        return __pp_r636____(x_0, x_1, x_2);
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r637____(x_0, x_1, x_2);
                                        } else {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r638____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r639____(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                }
                            } else {
                                return 0;
                            }
                        }
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            return __pp_r640____(x_0, x_1, x_2);
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r641____(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r642____(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r643____(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r644____(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r645____(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                return __pp_r646____(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r647____(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                            return __pp_r648____(x_0, x_1, x_2);
                                                        } else {
                                                            return __pp_r649____(x_0, x_1, x_2);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        return __pp_r650____(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r651____(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        return __pp_r652____(x_0, x_1, x_2);
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                    if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                        if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r653____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r654____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r655____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r656____(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        return __pp_r657____(x_0, x_1, x_2);
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    return __pp_r658____(x_0, x_1, x_2);
                                } else {
                                    return __pp_r659____(x_0, x_1, x_2);
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                        return __pp_r660____(x_0, x_1, x_2);
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r661____(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r662____(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                            return __pp_r663____(x_0, x_1, x_2);
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    return __pp_r664____(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r665____(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r666____(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r667____(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        return __pp_r668____(x_0, x_1, x_2);
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                return __pp_r669____(x_0, x_1, x_2);
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                        return __pp_r670____(x_0, x_1, x_2);
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return __pp_r671____(x_0, x_1, x_2);
                                }
                            }
                        }
                    }
                }
            } else {
                if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            return __pp_r672____(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r673____(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    return __pp_r674____(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r675____(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r676____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                                return __pp_r677____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r678____(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r679____(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r680____(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r681____(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return __pp_r682____(x_0, x_1, x_2);
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r683____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r684____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return __pp_r685____(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return __pp_r686____(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r687____(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r688____(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                            return __pp_r689____(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r690____(x_0, x_1, x_2);
                                        }
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r691____(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                                            if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                                return __pp_r692____(x_0, x_1, x_2);
                                                            } else {
                                                                return __pp_r693____(x_0, x_1, x_2);
                                                            }
                                                        } else {
                                                            return __pp_r694____(x_0, x_1, x_2);
                                                        }
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                    if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r695____(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                                            return __pp_r696____(x_0, x_1, x_2);
                                                        } else {
                                                            return __pp_r697____(x_0, x_1, x_2);
                                                        }
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r698____(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r699____(x_0, x_1, x_2);
                                                } else {
                                                    if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r700____(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r701____(x_0, x_1, x_2);
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r702____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r703____(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r704____(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r705____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r706____(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r707____(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r708____(x_0, x_1, x_2);
                                                }
                                            } else {
                                                return 0;
                                            }
                                        } else {
                                            return __pp_r709____(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                            return __pp_r710____(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                return __pp_r711____(x_0, x_1, x_2);
                                            } else {
                                                return 0;
                                            }
                                        } else {
                                            return __pp_r712____(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return __pp_r713____(x_0, x_1, x_2);
                                    }
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            return __pp_r714____(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r715____(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    return __pp_r716____(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r717____(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r718____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r719____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r720____(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            return __pp_r721____(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                                            return __pp_r722____(x_0, x_1, x_2);
                                                        } else {
                                                            return __pp_r723____(x_0, x_1, x_2);
                                                        }
                                                    } else {
                                                        return __pp_r724____(x_0, x_1, x_2);
                                                    }
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                        return __pp_r725____(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r726____(x_0, x_1, x_2);
                                                    }
                                                }
                                            } else {
                                                return __pp_r727____(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        return __pp_r728____(x_0, x_1, x_2);
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            return __pp_r729____(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r730____(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r731____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r732____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r733____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r734____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r735____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r736____(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        return __pp_r737____(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r738____(x_0, x_1, x_2);
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                return __pp_r739____(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r740____(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r741____(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r742____(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                                    return __pp_r743____(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r744____(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r745____(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r746____(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return __pp_r747____(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        return __pp_r748____(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r749____(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                        return __pp_r750____(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r751____(x_0, x_1, x_2);
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            return __pp_r752____(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r753____(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        return __pp_r754____(x_0, x_1, x_2);
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        return __pp_r755____(x_0, x_1, x_2);
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return __pp_r756____(x_0, x_1, x_2);
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                return __pp_r757____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r758____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r759____(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r760____(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                        return __pp_r761____(x_0, x_1, x_2);
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r762____(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r763____(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                            return __pp_r764____(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r765____(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                    return __pp_r766____(x_0, x_1, x_2);
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    return __pp_r767____(x_0, x_1, x_2);
                                }
                            }
                        }
                    }
                }
            }
        	return 0;
        }
        static double box_spline_d0(const double &x_0, const double &x_1, const double &x_2) {
            if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r0____d0__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r1____d0__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r2____d0__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r3____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                return __pp_r4____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r5____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r6____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r7____d0__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r8____d0__(x_0, x_1, x_2);
                                            } else {
                                                if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r9____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return __pp_r10____d0__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return __pp_r11____d0__(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r12____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r13____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                return __pp_r14____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r15____d0__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r16____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r17____d0__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r18____d0__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r19____d0__(x_0, x_1, x_2);
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r20____d0__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r21____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r22____d0__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r23____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r24____d0__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r25____d0__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        return __pp_r26____d0__(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r27____d0__(x_0, x_1, x_2);
                                                    }
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        return __pp_r28____d0__(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                            if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                                return 0;
                                                            } else {
                                                                return __pp_r29____d0__(x_0, x_1, x_2);
                                                            }
                                                        } else {
                                                            if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                                return 0;
                                                            } else {
                                                                return __pp_r30____d0__(x_0, x_1, x_2);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            return __pp_r31____d0__(x_0, x_1, x_2);
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r32____d0__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r33____d0__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r34____d0__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r35____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r36____d0__(x_0, x_1, x_2);
                                                } else {
                                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                        return 0;
                                                    } else {
                                                        return __pp_r37____d0__(x_0, x_1, x_2);
                                                    }
                                                }
                                            } else {
                                                return __pp_r38____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return __pp_r39____d0__(x_0, x_1, x_2);
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r40____d0__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r41____d0__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r42____d0__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r43____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r44____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r45____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r46____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r47____d0__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r48____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                            return __pp_r49____d0__(x_0, x_1, x_2);
                                                        } else {
                                                            if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                                return 0;
                                                            } else {
                                                                return __pp_r50____d0__(x_0, x_1, x_2);
                                                            }
                                                        }
                                                    } else {
                                                        if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                            return 0;
                                                        } else {
                                                            return __pp_r51____d0__(x_0, x_1, x_2);
                                                        }
                                                    }
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        return __pp_r52____d0__(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r53____d0__(x_0, x_1, x_2);
                                                    }
                                                }
                                            } else {
                                                if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r54____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        return __pp_r55____d0__(x_0, x_1, x_2);
                                    }
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                            return __pp_r56____d0__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r57____d0__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            return __pp_r58____d0__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r59____d0__(x_0, x_1, x_2);
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        return __pp_r60____d0__(x_0, x_1, x_2);
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r61____d0__(x_0, x_1, x_2);
                                        } else {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r62____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r63____d0__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                }
                            } else {
                                return 0;
                            }
                        }
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            return __pp_r64____d0__(x_0, x_1, x_2);
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r65____d0__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r66____d0__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r67____d0__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r68____d0__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r69____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                return __pp_r70____d0__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r71____d0__(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                            return __pp_r72____d0__(x_0, x_1, x_2);
                                                        } else {
                                                            return __pp_r73____d0__(x_0, x_1, x_2);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        return __pp_r74____d0__(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r75____d0__(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        return __pp_r76____d0__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                    if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                        if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r77____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r78____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r79____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r80____d0__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        return __pp_r81____d0__(x_0, x_1, x_2);
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    return __pp_r82____d0__(x_0, x_1, x_2);
                                } else {
                                    return __pp_r83____d0__(x_0, x_1, x_2);
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                        return __pp_r84____d0__(x_0, x_1, x_2);
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r85____d0__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r86____d0__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                            return __pp_r87____d0__(x_0, x_1, x_2);
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    return __pp_r88____d0__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r89____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r90____d0__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r91____d0__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        return __pp_r92____d0__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                return __pp_r93____d0__(x_0, x_1, x_2);
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                        return __pp_r94____d0__(x_0, x_1, x_2);
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return __pp_r95____d0__(x_0, x_1, x_2);
                                }
                            }
                        }
                    }
                }
            } else {
                if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            return __pp_r96____d0__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r97____d0__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    return __pp_r98____d0__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r99____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r100____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                                return __pp_r101____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r102____d0__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r103____d0__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r104____d0__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r105____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return __pp_r106____d0__(x_0, x_1, x_2);
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r107____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r108____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return __pp_r109____d0__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return __pp_r110____d0__(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r111____d0__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r112____d0__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                            return __pp_r113____d0__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r114____d0__(x_0, x_1, x_2);
                                        }
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r115____d0__(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                                            if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                                return __pp_r116____d0__(x_0, x_1, x_2);
                                                            } else {
                                                                return __pp_r117____d0__(x_0, x_1, x_2);
                                                            }
                                                        } else {
                                                            return __pp_r118____d0__(x_0, x_1, x_2);
                                                        }
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                    if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r119____d0__(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                                            return __pp_r120____d0__(x_0, x_1, x_2);
                                                        } else {
                                                            return __pp_r121____d0__(x_0, x_1, x_2);
                                                        }
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r122____d0__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r123____d0__(x_0, x_1, x_2);
                                                } else {
                                                    if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r124____d0__(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r125____d0__(x_0, x_1, x_2);
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r126____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r127____d0__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r128____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r129____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r130____d0__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r131____d0__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r132____d0__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                return 0;
                                            }
                                        } else {
                                            return __pp_r133____d0__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                            return __pp_r134____d0__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                return __pp_r135____d0__(x_0, x_1, x_2);
                                            } else {
                                                return 0;
                                            }
                                        } else {
                                            return __pp_r136____d0__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return __pp_r137____d0__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            return __pp_r138____d0__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r139____d0__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    return __pp_r140____d0__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r141____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r142____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r143____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r144____d0__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            return __pp_r145____d0__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                                            return __pp_r146____d0__(x_0, x_1, x_2);
                                                        } else {
                                                            return __pp_r147____d0__(x_0, x_1, x_2);
                                                        }
                                                    } else {
                                                        return __pp_r148____d0__(x_0, x_1, x_2);
                                                    }
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                        return __pp_r149____d0__(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r150____d0__(x_0, x_1, x_2);
                                                    }
                                                }
                                            } else {
                                                return __pp_r151____d0__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        return __pp_r152____d0__(x_0, x_1, x_2);
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            return __pp_r153____d0__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r154____d0__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r155____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r156____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r157____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r158____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r159____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r160____d0__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        return __pp_r161____d0__(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r162____d0__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                return __pp_r163____d0__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r164____d0__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r165____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r166____d0__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                                    return __pp_r167____d0__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r168____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r169____d0__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r170____d0__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return __pp_r171____d0__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        return __pp_r172____d0__(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r173____d0__(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                        return __pp_r174____d0__(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r175____d0__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            return __pp_r176____d0__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r177____d0__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        return __pp_r178____d0__(x_0, x_1, x_2);
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        return __pp_r179____d0__(x_0, x_1, x_2);
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return __pp_r180____d0__(x_0, x_1, x_2);
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                return __pp_r181____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r182____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r183____d0__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r184____d0__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                        return __pp_r185____d0__(x_0, x_1, x_2);
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r186____d0__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r187____d0__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                            return __pp_r188____d0__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r189____d0__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                    return __pp_r190____d0__(x_0, x_1, x_2);
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    return __pp_r191____d0__(x_0, x_1, x_2);
                                }
                            }
                        }
                    }
                }
            }
        	return 0;
        }
        static double box_spline_d1(const double &x_0, const double &x_1, const double &x_2) {
            if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r192____d1__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r193____d1__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r194____d1__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r195____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                return __pp_r196____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r197____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r198____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r199____d1__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r200____d1__(x_0, x_1, x_2);
                                            } else {
                                                if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r201____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return __pp_r202____d1__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return __pp_r203____d1__(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r204____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r205____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                return __pp_r206____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r207____d1__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r208____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r209____d1__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r210____d1__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r211____d1__(x_0, x_1, x_2);
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r212____d1__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r213____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r214____d1__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r215____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r216____d1__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r217____d1__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        return __pp_r218____d1__(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r219____d1__(x_0, x_1, x_2);
                                                    }
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        return __pp_r220____d1__(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                            if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                                return 0;
                                                            } else {
                                                                return __pp_r221____d1__(x_0, x_1, x_2);
                                                            }
                                                        } else {
                                                            if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                                return 0;
                                                            } else {
                                                                return __pp_r222____d1__(x_0, x_1, x_2);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            return __pp_r223____d1__(x_0, x_1, x_2);
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r224____d1__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r225____d1__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r226____d1__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r227____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r228____d1__(x_0, x_1, x_2);
                                                } else {
                                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                        return 0;
                                                    } else {
                                                        return __pp_r229____d1__(x_0, x_1, x_2);
                                                    }
                                                }
                                            } else {
                                                return __pp_r230____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return __pp_r231____d1__(x_0, x_1, x_2);
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r232____d1__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r233____d1__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r234____d1__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r235____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r236____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r237____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r238____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r239____d1__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r240____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                            return __pp_r241____d1__(x_0, x_1, x_2);
                                                        } else {
                                                            if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                                return 0;
                                                            } else {
                                                                return __pp_r242____d1__(x_0, x_1, x_2);
                                                            }
                                                        }
                                                    } else {
                                                        if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                            return 0;
                                                        } else {
                                                            return __pp_r243____d1__(x_0, x_1, x_2);
                                                        }
                                                    }
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        return __pp_r244____d1__(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r245____d1__(x_0, x_1, x_2);
                                                    }
                                                }
                                            } else {
                                                if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r246____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        return __pp_r247____d1__(x_0, x_1, x_2);
                                    }
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                            return __pp_r248____d1__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r249____d1__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            return __pp_r250____d1__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r251____d1__(x_0, x_1, x_2);
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        return __pp_r252____d1__(x_0, x_1, x_2);
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r253____d1__(x_0, x_1, x_2);
                                        } else {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r254____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r255____d1__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                }
                            } else {
                                return 0;
                            }
                        }
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            return __pp_r256____d1__(x_0, x_1, x_2);
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r257____d1__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r258____d1__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r259____d1__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r260____d1__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r261____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                return __pp_r262____d1__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r263____d1__(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                            return __pp_r264____d1__(x_0, x_1, x_2);
                                                        } else {
                                                            return __pp_r265____d1__(x_0, x_1, x_2);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        return __pp_r266____d1__(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r267____d1__(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        return __pp_r268____d1__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                    if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                        if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r269____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r270____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r271____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r272____d1__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        return __pp_r273____d1__(x_0, x_1, x_2);
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    return __pp_r274____d1__(x_0, x_1, x_2);
                                } else {
                                    return __pp_r275____d1__(x_0, x_1, x_2);
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                        return __pp_r276____d1__(x_0, x_1, x_2);
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r277____d1__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r278____d1__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                            return __pp_r279____d1__(x_0, x_1, x_2);
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    return __pp_r280____d1__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r281____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r282____d1__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r283____d1__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        return __pp_r284____d1__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                return __pp_r285____d1__(x_0, x_1, x_2);
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                        return __pp_r286____d1__(x_0, x_1, x_2);
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return __pp_r287____d1__(x_0, x_1, x_2);
                                }
                            }
                        }
                    }
                }
            } else {
                if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            return __pp_r288____d1__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r289____d1__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    return __pp_r290____d1__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r291____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r292____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                                return __pp_r293____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r294____d1__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r295____d1__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r296____d1__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r297____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return __pp_r298____d1__(x_0, x_1, x_2);
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r299____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r300____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return __pp_r301____d1__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return __pp_r302____d1__(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r303____d1__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r304____d1__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                            return __pp_r305____d1__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r306____d1__(x_0, x_1, x_2);
                                        }
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r307____d1__(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                                            if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                                return __pp_r308____d1__(x_0, x_1, x_2);
                                                            } else {
                                                                return __pp_r309____d1__(x_0, x_1, x_2);
                                                            }
                                                        } else {
                                                            return __pp_r310____d1__(x_0, x_1, x_2);
                                                        }
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                    if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r311____d1__(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                                            return __pp_r312____d1__(x_0, x_1, x_2);
                                                        } else {
                                                            return __pp_r313____d1__(x_0, x_1, x_2);
                                                        }
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r314____d1__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r315____d1__(x_0, x_1, x_2);
                                                } else {
                                                    if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r316____d1__(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r317____d1__(x_0, x_1, x_2);
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r318____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r319____d1__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r320____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r321____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r322____d1__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r323____d1__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r324____d1__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                return 0;
                                            }
                                        } else {
                                            return __pp_r325____d1__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                            return __pp_r326____d1__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                return __pp_r327____d1__(x_0, x_1, x_2);
                                            } else {
                                                return 0;
                                            }
                                        } else {
                                            return __pp_r328____d1__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return __pp_r329____d1__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            return __pp_r330____d1__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r331____d1__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    return __pp_r332____d1__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r333____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r334____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r335____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r336____d1__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            return __pp_r337____d1__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                                            return __pp_r338____d1__(x_0, x_1, x_2);
                                                        } else {
                                                            return __pp_r339____d1__(x_0, x_1, x_2);
                                                        }
                                                    } else {
                                                        return __pp_r340____d1__(x_0, x_1, x_2);
                                                    }
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                        return __pp_r341____d1__(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r342____d1__(x_0, x_1, x_2);
                                                    }
                                                }
                                            } else {
                                                return __pp_r343____d1__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        return __pp_r344____d1__(x_0, x_1, x_2);
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            return __pp_r345____d1__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r346____d1__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r347____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r348____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r349____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r350____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r351____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r352____d1__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        return __pp_r353____d1__(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r354____d1__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                return __pp_r355____d1__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r356____d1__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r357____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r358____d1__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                                    return __pp_r359____d1__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r360____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r361____d1__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r362____d1__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return __pp_r363____d1__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        return __pp_r364____d1__(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r365____d1__(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                        return __pp_r366____d1__(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r367____d1__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            return __pp_r368____d1__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r369____d1__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        return __pp_r370____d1__(x_0, x_1, x_2);
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        return __pp_r371____d1__(x_0, x_1, x_2);
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return __pp_r372____d1__(x_0, x_1, x_2);
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                return __pp_r373____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r374____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r375____d1__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r376____d1__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                        return __pp_r377____d1__(x_0, x_1, x_2);
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r378____d1__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r379____d1__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                            return __pp_r380____d1__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r381____d1__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                    return __pp_r382____d1__(x_0, x_1, x_2);
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    return __pp_r383____d1__(x_0, x_1, x_2);
                                }
                            }
                        }
                    }
                }
            }
        	return 0;
        }
        static double box_spline_d2(const double &x_0, const double &x_1, const double &x_2) {
            if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r384____d2__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r385____d2__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r386____d2__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r387____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                return __pp_r388____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r389____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r390____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r391____d2__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r392____d2__(x_0, x_1, x_2);
                                            } else {
                                                if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r393____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return __pp_r394____d2__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return __pp_r395____d2__(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r396____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r397____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                return __pp_r398____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r399____d2__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r400____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r401____d2__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r402____d2__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r403____d2__(x_0, x_1, x_2);
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r404____d2__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r405____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r406____d2__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r407____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r408____d2__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r409____d2__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        return __pp_r410____d2__(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r411____d2__(x_0, x_1, x_2);
                                                    }
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        return __pp_r412____d2__(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                            if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                                return 0;
                                                            } else {
                                                                return __pp_r413____d2__(x_0, x_1, x_2);
                                                            }
                                                        } else {
                                                            if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                                return 0;
                                                            } else {
                                                                return __pp_r414____d2__(x_0, x_1, x_2);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            return __pp_r415____d2__(x_0, x_1, x_2);
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r416____d2__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r417____d2__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r418____d2__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r419____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r420____d2__(x_0, x_1, x_2);
                                                } else {
                                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                        return 0;
                                                    } else {
                                                        return __pp_r421____d2__(x_0, x_1, x_2);
                                                    }
                                                }
                                            } else {
                                                return __pp_r422____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return __pp_r423____d2__(x_0, x_1, x_2);
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r424____d2__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r425____d2__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r426____d2__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r427____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r428____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r429____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r430____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r431____d2__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r432____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                            return __pp_r433____d2__(x_0, x_1, x_2);
                                                        } else {
                                                            if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                                return 0;
                                                            } else {
                                                                return __pp_r434____d2__(x_0, x_1, x_2);
                                                            }
                                                        }
                                                    } else {
                                                        if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                            return 0;
                                                        } else {
                                                            return __pp_r435____d2__(x_0, x_1, x_2);
                                                        }
                                                    }
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                        return __pp_r436____d2__(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r437____d2__(x_0, x_1, x_2);
                                                    }
                                                }
                                            } else {
                                                if( x_0*-0.707106781187+x_1*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r438____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        return __pp_r439____d2__(x_0, x_1, x_2);
                                    }
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                            return __pp_r440____d2__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r441____d2__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            return __pp_r442____d2__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r443____d2__(x_0, x_1, x_2);
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        return __pp_r444____d2__(x_0, x_1, x_2);
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r445____d2__(x_0, x_1, x_2);
                                        } else {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r446____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r447____d2__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                }
                            } else {
                                return 0;
                            }
                        }
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            return __pp_r448____d2__(x_0, x_1, x_2);
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r449____d2__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r450____d2__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r451____d2__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r452____d2__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r453____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                return __pp_r454____d2__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r455____d2__(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                            return __pp_r456____d2__(x_0, x_1, x_2);
                                                        } else {
                                                            return __pp_r457____d2__(x_0, x_1, x_2);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        return __pp_r458____d2__(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r459____d2__(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        return __pp_r460____d2__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                    if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                        if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r461____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r462____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r463____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r464____d2__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        return __pp_r465____d2__(x_0, x_1, x_2);
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    return __pp_r466____d2__(x_0, x_1, x_2);
                                } else {
                                    return __pp_r467____d2__(x_0, x_1, x_2);
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                        return __pp_r468____d2__(x_0, x_1, x_2);
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r469____d2__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r470____d2__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                            return __pp_r471____d2__(x_0, x_1, x_2);
                                        } else {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    return __pp_r472____d2__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r473____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r474____d2__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r475____d2__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        return __pp_r476____d2__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                return __pp_r477____d2__(x_0, x_1, x_2);
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                        return __pp_r478____d2__(x_0, x_1, x_2);
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return __pp_r479____d2__(x_0, x_1, x_2);
                                }
                            }
                        }
                    }
                }
            } else {
                if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            return __pp_r480____d2__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r481____d2__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    return __pp_r482____d2__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r483____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r484____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                                return __pp_r485____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r486____d2__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                            return 0;
                                        } else {
                                            return __pp_r487____d2__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r488____d2__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r489____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return __pp_r490____d2__(x_0, x_1, x_2);
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r491____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r492____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return __pp_r493____d2__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return __pp_r494____d2__(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return __pp_r495____d2__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r496____d2__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                            return __pp_r497____d2__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r498____d2__(x_0, x_1, x_2);
                                        }
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r499____d2__(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                                            if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                                return __pp_r500____d2__(x_0, x_1, x_2);
                                                            } else {
                                                                return __pp_r501____d2__(x_0, x_1, x_2);
                                                            }
                                                        } else {
                                                            return __pp_r502____d2__(x_0, x_1, x_2);
                                                        }
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                    if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r503____d2__(x_0, x_1, x_2);
                                                    } else {
                                                        if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                                            return __pp_r504____d2__(x_0, x_1, x_2);
                                                        } else {
                                                            return __pp_r505____d2__(x_0, x_1, x_2);
                                                        }
                                                    }
                                                } else {
                                                    return 0;
                                                }
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r506____d2__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r507____d2__(x_0, x_1, x_2);
                                                } else {
                                                    if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                        return __pp_r508____d2__(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r509____d2__(x_0, x_1, x_2);
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r510____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r511____d2__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r512____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r513____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r514____d2__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                                    return __pp_r515____d2__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r516____d2__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                return 0;
                                            }
                                        } else {
                                            return __pp_r517____d2__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                            return __pp_r518____d2__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 2.82842712475 ) {
                                                return __pp_r519____d2__(x_0, x_1, x_2);
                                            } else {
                                                return 0;
                                            }
                                        } else {
                                            return __pp_r520____d2__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return __pp_r521____d2__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            return __pp_r522____d2__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                return __pp_r523____d2__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    return __pp_r524____d2__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r525____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r526____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r527____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                                return 0;
                                            } else {
                                                return __pp_r528____d2__(x_0, x_1, x_2);
                                            }
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            return __pp_r529____d2__(x_0, x_1, x_2);
                                        } else {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                        if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                                            return __pp_r530____d2__(x_0, x_1, x_2);
                                                        } else {
                                                            return __pp_r531____d2__(x_0, x_1, x_2);
                                                        }
                                                    } else {
                                                        return __pp_r532____d2__(x_0, x_1, x_2);
                                                    }
                                                } else {
                                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                        return __pp_r533____d2__(x_0, x_1, x_2);
                                                    } else {
                                                        return __pp_r534____d2__(x_0, x_1, x_2);
                                                    }
                                                }
                                            } else {
                                                return __pp_r535____d2__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        return __pp_r536____d2__(x_0, x_1, x_2);
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                                            return __pp_r537____d2__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r538____d2__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r539____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r540____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return 0;
                                        }
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                            if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                                return __pp_r541____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r542____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                                return __pp_r543____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r544____d2__(x_0, x_1, x_2);
                                            }
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                        return __pp_r545____d2__(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r546____d2__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                return __pp_r547____d2__(x_0, x_1, x_2);
                                            } else {
                                                if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                    return __pp_r548____d2__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r549____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r550____d2__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                                    return __pp_r551____d2__(x_0, x_1, x_2);
                                                } else {
                                                    return __pp_r552____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r553____d2__(x_0, x_1, x_2);
                                                }
                                            } else {
                                                if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                                    return 0;
                                                } else {
                                                    return __pp_r554____d2__(x_0, x_1, x_2);
                                                }
                                            }
                                        } else {
                                            return __pp_r555____d2__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        return __pp_r556____d2__(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r557____d2__(x_0, x_1, x_2);
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                        return __pp_r558____d2__(x_0, x_1, x_2);
                                    } else {
                                        return __pp_r559____d2__(x_0, x_1, x_2);
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            return __pp_r560____d2__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r561____d2__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -2.82842712475 ) {
                                        return 0;
                                    } else {
                                        return __pp_r562____d2__(x_0, x_1, x_2);
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                        return __pp_r563____d2__(x_0, x_1, x_2);
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return __pp_r564____d2__(x_0, x_1, x_2);
                                }
                            }
                        }
                    } else {
                        if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                                return __pp_r565____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r566____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                            if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                                return __pp_r567____d2__(x_0, x_1, x_2);
                                            } else {
                                                return __pp_r568____d2__(x_0, x_1, x_2);
                                            }
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_2*0.707106781187 < 2.82842712475 ) {
                                        return __pp_r569____d2__(x_0, x_1, x_2);
                                    } else {
                                        return 0;
                                    }
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r570____d2__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                            return __pp_r571____d2__(x_0, x_1, x_2);
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_0*-0.707106781187+x_1*0.707106781187 < 2.82842712475 ) {
                                        if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                            return __pp_r572____d2__(x_0, x_1, x_2);
                                        } else {
                                            return __pp_r573____d2__(x_0, x_1, x_2);
                                        }
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_1*-0.707106781187 < 2.82842712475 ) {
                                    return __pp_r574____d2__(x_0, x_1, x_2);
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*0.707106781187+x_2*0.707106781187 < -2.82842712475 ) {
                                    return 0;
                                } else {
                                    return __pp_r575____d2__(x_0, x_1, x_2);
                                }
                            }
                        }
                    }
                }
            }
        	return 0;
        }

    public:
        template <int N>
        static const double phi(const vector &p) {
            return (double)box_spline((double)p[0], (double)p[1], (double)p[2]);
        }
        template <int N>
        static const double phi(const double &h, const vector &p) {
            return (double)box_spline((double)p[0], (double)p[1], (double)p[2]);
        }

        template <int N>
        static const double dphi(const vector &p, const int &d) {
            double ret = 0;
            switch(d){
                case 0: return (double)box_spline_d0((double)p[0], (double)p[1], (double)p[2]);
                case 1: return (double)box_spline_d1((double)p[0], (double)p[1], (double)p[2]);
                case 2: return (double)box_spline_d2((double)p[0], (double)p[1], (double)p[2]);
                default: break;
            }
            return 0;
        }

        template <int N>
        static const double dphi(const double &h, const vector &p, const int &d) {
            double ret = 0;
            switch(d){
                case 0: return (double)box_spline_d0((double)p[0], (double)p[1], (double)p[2]);
                case 1: return (double)box_spline_d1((double)p[0], (double)p[1], (double)p[2]);
                case 2: return (double)box_spline_d2((double)p[0], (double)p[1], (double)p[2]);
                default: break;
            }
            return 0;
        }

        template <int N>
        static std::vector<lattice_site> get_integer_support() {
            std::vector<lattice_site> ret;
            Eigen::Matrix<int,1233,3> mat;
            mat <<
                -2, 5, -3,
                -4, -1, -2,
                2, 0, -4,
                1, -4, 3,
                -3, -1, 3,
                1, 4, 4,
                0, 0, 8,
                1, -3, 1,
                2, 4, 2,
                1, -1, -2,
                -6, -2, -1,
                -2, 6, -2,
                -4, 2, -4,
                -1, -2, 6,
                0, 2, 1,
                -2, 4, -1,
                4, 3, -1,
                -2, 3, 2,
                2, -6, 0,
                5, -1, -3,
                -4, -2, 2,
                -2, 3, 0,
                4, 1, 2,
                -1, -3, -4,
                -3, 0, -3,
                -1, 7, -1,
                0, -3, 0,
                4, 0, -2,
                3, 4, 3,
                -5, -1, 3,
                2, 1, -5,
                -4, 0, 3,
                4, -4, -4,
                -6, -2, 2,
                1, 4, -1,
                -3, 1, 4,
                -3, -3, -2,
                -4, -1, 4,
                -2, 2, 5,
                -4, 2, 2,
                0, 0, -6,
                -2, 4, 1,
                2, 0, 1,
                -5, -2, 1,
                1, 1, -3,
                0, 3, -1,
                -2, 0, 0,
                -3, 4, 2,
                4, -2, 2,
                -5, -2, 0,
                3, -3, 0,
                0, 4, 2,
                0, -1, -4,
                -2, -1, -6,
                5, -2, 0,
                -1, 1, 1,
                0, -7, 1,
                2, -5, 2,
                2, -1, 3,
                2, -1, 2,
                1, -1, 0,
                -1, -4, -4,
                3, 4, -3,
                -1, 0, 5,
                0, 1, 0,
                -2, -1, -1,
                -4, -2, -2,
                3, -3, -5,
                -4, 2, 4,
                0, 2, -4,
                -2, 2, 0,
                1, -2, 4,
                0, 3, 5,
                4, 0, -4,
                -6, 1, 0,
                5, 2, -2,
                -6, 2, -2,
                -1, 0, -6,
                2, 3, 4,
                1, -4, 1,
                -1, 1, 6,
                5, 0, 1,
                -3, -2, -5,
                5, 0, 0,
                -4, 3, 0,
                2, 1, 0,
                4, -3, -1,
                0, -2, -3,
                -3, 2, 5,
                0, 0, 7,
                2, 5, -3,
                0, 2, -6,
                -2, 2, -4,
                4, -1, 2,
                6, 1, 2,
                0, -2, 6,
                -1, -2, 4,
                -1, 1, -2,
                -1, -7, -1,
                3, -5, 3,
                -4, 4, 0,
                -4, 0, -1,
                0, 5, 0,
                -3, 5, 1,
                -6, 0, -1,
                2, -3, 4,
                0, -6, -1,
                1, -1, 1,
                3, 1, -3,
                -1, 3, 2,
                2, -4, -4,
                -6, -1, 0,
                2, 3, -4,
                -1, 0, 2,
                2, 5, 2,
                2, -3, 2,
                -4, -3, 4,
                -2, -3, 5,
                -5, 0, -2,
                -2, -1, -4,
                0, -2, 0,
                2, -2, 6,
                1, 4, 0,
                -5, 2, 2,
                1, -2, 5,
                2, -4, -2,
                2, 1, 4,
                1, 1, 0,
                3, 0, 1,
                1, 2, -3,
                7, 1, -1,
                3, -2, 5,
                1, 4, -3,
                -3, 0, 4,
                0, 1, -2,
                5, 0, -3,
                -2, 0, -5,
                -5, 1, 0,
                -3, 3, -1,
                -4, -4, 3,
                -1, -6, -1,
                4, -2, 1,
                2, -3, -2,
                -1, 0, -4,
                -1, 0, 4,
                -4, -4, -3,
                -3, 3, 2,
                2, 0, 5,
                1, 6, 0,
                -1, -2, 5,
                6, 0, 1,
                3, -5, -2,
                -3, -1, 4,
                2, 4, 4,
                2, -4, 4,
                1, -4, -2,
                1, -3, 0,
                4, 2, 2,
                1, -5, -1,
                0, -4, -3,
                4, -2, 3,
                3, 1, 4,
                5, 2, 2,
                -2, -1, 3,
                1, 0, -5,
                1, 3, 2,
                0, 2, 0,
                3, -5, 0,
                4, -2, -3,
                3, -1, 5,
                0, 0, -1,
                -4, 3, 4,
                1, 1, -7,
                -3, 2, -4,
                -2, -3, 3,
                5, -1, 0,
                1, -1, -1,
                2, 3, 0,
                0, -3, 1,
                3, 1, 3,
                2, -1, 6,
                -5, 3, 1,
                -2, 5, 3,
                -4, 0, 2,
                2, 3, -2,
                1, -7, -1,
                0, 2, 5,
                3, -3, 5,
                -3, -3, -5,
                2, -5, 1,
                5, -2, 2,
                6, 2, -1,
                3, -4, 4,
                -2, 2, 4,
                0, -2, 2,
                0, 0, -7,
                -2, 4, 0,
                -1, 4, -3,
                7, -1, 0,
                2, 3, 5,
                4, -3, 0,
                -2, -1, 6,
                1, 2, 0,
                1, 5, -1,
                3, 2, 4,
                -3, 4, 3,
                -5, -1, 1,
                2, -3, 3,
                2, -1, -6,
                0, 4, 1,
                -6, 1, -1,
                3, 5, 0,
                2, -3, -1,
                0, -7, 0,
                -2, 1, 6,
                -4, 3, 3,
                3, -4, 0,
                0, 1, -6,
                -4, -2, 4,
                3, 2, -2,
                0, 1, -1,
                -1, 4, 4,
                -3, -2, 2,
                0, 4, -1,
                0, 1, 1,
                0, -3, -5,
                3, 3, 4,
                3, 2, -1,
                2, -5, -3,
                1, 0, 0,
                3, -4, -2,
                -1, 1, -7,
                1, -1, -7,
                0, -1, -3,
                -6, 1, 1,
                3, 5, -1,
                0, 4, -2,
                3, -4, -4,
                -3, 1, -4,
                1, -2, -1,
                -5, -1, -1,
                1, -3, -2,
                -3, 4, -4,
                -5, -1, -2,
                5, 3, -2,
                2, 1, -4,
                2, 2, 2,
                4, 3, 1,
                6, -1, -2,
                2, 4, 3,
                0, 0, 6,
                0, -6, 2,
                5, 3, 0,
                -2, 2, -5,
                -5, -3, -1,
                -1, 2, 5,
                1, -6, 2,
                -3, -3, 4,
                0, 2, -2,
                2, 2, -6,
                1, -2, 6,
                -1, 6, 2,
                -4, 0, -3,
                -6, 1, -2,
                7, 0, 0,
                -3, 5, 0,
                -1, -1, -1,
                -5, 3, -2,
                -3, -1, -4,
                2, 4, 1,
                0, -3, -2,
                4, -1, -1,
                -3, -1, -3,
                -3, -1, 0,
                -2, 0, 5,
                -1, -1, 4,
                2, 0, 2,
                -1, 4, 1,
                -1, -3, 2,
                0, 1, 5,
                1, 0, 4,
                5, 1, -2,
                0, -2, 3,
                2, -2, 3,
                -5, -2, -1,
                -5, 2, 3,
                3, 0, 5,
                2, 3, 2,
                -1, -4, -3,
                6, -1, 1,
                -1, -5, -2,
                1, 1, 3,
                3, 2, -5,
                -4, 2, -3,
                -3, -1, -5,
                7, 0, 1,
                -6, 0, 2,
                4, 2, -2,
                3, 2, 5,
                -3, 3, -3,
                -4, -4, 2,
                4, 1, 1,
                1, -4, 0,
                -5, -1, 0,
                -1, 1, -3,
                -3, 0, -2,
                1, 2, 4,
                3, -1, 2,
                -4, -4, -4,
                -3, 3, 1,
                3, -1, 4,
                0, 1, -5,
                6, -1, 2,
                4, -4, -3,
                -2, 5, 1,
                -1, -1, -2,
                1, -5, 3,
                0, 1, -7,
                -3, -2, 3,
                -4, -4, 1,
                1, -3, 3,
                3, 4, -4,
                1, 0, 7,
                5, 2, 0,
                -5, 2, -3,
                0, 2, 3,
                -5, 0, -1,
                1, -2, -6,
                -2, 0, 1,
                -2, 3, 4,
                -3, -3, -4,
                4, 1, -3,
                -3, 5, -2,
                -2, -4, 1,
                -1, 0, -5,
                1, -5, 0,
                4, 2, 1,
                0, -3, 2,
                3, 1, 2,
                -1, 7, 1,
                -5, 3, 0,
                -3, 5, -1,
                5, 2, 1,
                2, 0, -6,
                -4, 0, 1,
                -2, 3, 3,
                1, -1, 4,
                -1, -7, 1,
                1, 0, -7,
                -5, 2, -2,
                -2, 2, 3,
                -1, 2, 1,
                4, 0, 1,
                -2, -5, 3,
                -3, -4, 4,
                1, 0, 6,
                4, -3, 1,
                0, 5, 3,
                -3, -1, -2,
                -5, 1, -2,
                -3, 4, 0,
                1, 2, -2,
                2, -4, 2,
                -2, 1, 1,
                0, 4, 0,
                -2, -1, -2,
                -2, -4, 2,
                -2, -5, 0,
                1, 5, 1,
                5, -2, 1,
                1, -2, 2,
                2, -3, -3,
                2, -5, 3,
                2, -1, -2,
                0, 2, -5,
                0, -5, -1,
                -4, -3, 0,
                0, 1, 2,
                2, 2, -3,
                0, 7, -1,
                3, 0, 3,
                1, 0, 1,
                -1, 4, -4,
                -5, 3, -1,
                1, 0, -1,
                -2, 1, -2,
                -1, 3, 1,
                -3, -4, -4,
                2, -3, 1,
                0, 4, -3,
                -5, 0, 1,
                -1, -2, 0,
                -3, -1, 5,
                3, 1, -5,
                1, 3, -1,
                2, 2, 5,
                -1, -2, -3,
                3, 1, -4,
                -1, -1, -5,
                0, -4, 3,
                -2, 4, -2,
                0, 0, 5,
                0, -3, -1,
                3, 0, 4,
                -2, 2, -6,
                0, 6, 1,
                6, 1, 0,
                5, -1, 1,
                -3, 1, -5,
                -1, -5, -1,
                1, 6, -2,
                2, -3, 5,
                -4, 0, -4,
                1, -2, -5,
                -1, -4, 4,
                -3, 5, 3,
                3, -3, 4,
                2, 5, 0,
                4, 1, -1,
                2, 1, -3,
                3, -2, 3,
                -2, -1, 0,
                0, 3, 1,
                -5, -2, -2,
                2, 2, 1,
                1, -3, 2,
                3, -2, -4,
                -2, 0, 4,
                -2, 0, -2,
                -2, -2, -1,
                -1, -3, 3,
                2, -2, -4,
                0, -7, -1,
                1, -4, -3,
                0, -1, 2,
                -5, 2, 0,
                4, -4, -1,
                -1, 6, -2,
                0, 2, -1,
                1, -2, 0,
                3, -1, 1,
                0, -4, -1,
                3, 1, 5,
                5, -2, 3,
                -3, -2, -4,
                5, -2, -1,
                1, 7, -1,
                3, -2, 1,
                4, 3, 4,
                -3, 3, -4,
                -1, -3, -1,
                -2, -3, 2,
                3, 3, 1,
                1, -2, -3,
                4, -1, 3,
                1, 0, 3,
                -3, 3, 0,
                -5, 1, -1,
                -1, 1, 5,
                3, -5, -3,
                0, -5, -2,
                0, 5, -3,
                1, 5, 3,
                0, -1, -1,
                -1, -1, -3,
                1, -5, 2,
                4, -4, -2,
                7, 1, 0,
                1, -2, 1,
                1, 1, -1,
                -2, -3, 0,
                4, 4, -1,
                0, -1, 3,
                4, -4, 3,
                1, 5, -2,
                3, -5, -1,
                0, -2, -2,
                4, 1, 4,
                -5, 1, 3,
                -4, 3, 2,
                6, -2, 2,
                4, -1, -4,
                -2, -4, 0,
                1, -1, 7,
                -2, -3, -5,
                -6, -1, -1,
                0, -3, 3,
                3, 1, 1,
                -4, -3, -4,
                5, 2, -3,
                -5, 3, 3,
                4, -1, 4,
                7, -1, 1,
                -3, 0, -5,
                2, -1, 4,
                0, 6, 2,
                -4, 0, 0,
                -4, 4, -2,
                -2, -3, -1,
                4, -2, 4,
                -3, -3, -3,
                2, -2, -1,
                0, 3, -5,
                -1, 2, 2,
                0, -2, -1,
                -1, 1, -1,
                -2, 4, 2,
                2, 4, -2,
                3, -2, -5,
                4, -3, 2,
                -2, 0, -3,
                2, 4, -3,
                -3, 1, -3,
                -2, 0, -4,
                3, -5, 1,
                3, 4, 4,
                6, 1, -2,
                3, 0, 2,
                2, -3, 0,
                0, 7, 1,
                -2, 1, 4,
                1, 5, 0,
                -1, -1, -6,
                3, 4, 1,
                5, 0, -1,
                1, -2, 3,
                -6, -1, -2,
                -1, -2, 3,
                -2, -2, -5,
                4, -4, 4,
                -2, 6, 2,
                1, 1, 6,
                0, 1, 3,
                1, -1, -5,
                4, 0, 3,
                0, 3, -3,
                3, 5, 1,
                -4, -2, -3,
                4, 0, 2,
                2, 2, 0,
                5, -2, -2,
                2, 1, 5,
                -3, 0, 5,
                3, -2, -2,
                0, 7, 0,
                3, 3, 0,
                0, -4, 4,
                -2, 3, 5,
                0, 0, -5,
                -5, 0, 2,
                4, 3, 0,
                5, 0, -2,
                -3, -4, 1,
                -5, -2, -3,
                -4, -1, -4,
                -2, -5, -1,
                5, -3, 3,
                0, -2, 5,
                6, 0, -2,
                4, 4, -2,
                -3, -4, -2,
                -3, -4, -1,
                0, 2, 2,
                -4, 3, -4,
                0, 6, 0,
                6, 1, 1,
                3, 5, -3,
                0, -1, -6,
                -7, -1, 0,
                -2, 4, -4,
                -1, -2, -6,
                5, 1, -3,
                6, -1, -1,
                -1, -2, 2,
                -3, 5, 2,
                1, -3, -3,
                -3, -5, 3,
                4, -1, -2,
                4, 1, 0,
                -3, -2, 1,
                -1, 1, -4,
                -1, -3, -5,
                1, 2, 3,
                -1, 0, 7,
                1, 6, 1,
                1, -1, -6,
                -1, -1, -7,
                -2, 3, -2,
                2, 2, -4,
                -4, 4, -1,
                -1, 2, -2,
                -2, -5, -2,
                -1, 4, -1,
                -1, 2, -4,
                -1, -5, 1,
                -5, -3, 3,
                -5, 2, 1,
                7, 0, -1,
                -4, 1, -4,
                -1, -6, 0,
                2, 3, 3,
                -4, 1, 0,
                -2, 4, 4,
                1, 0, -6,
                2, -4, -3,
                -3, -2, -3,
                -5, -2, 3,
                -4, 1, -1,
                -3, 1, 1,
                1, 1, 2,
                4, -2, 0,
                3, 0, -5,
                -4, -4, 0,
                3, 3, -1,
                3, 0, -3,
                -1, 3, 0,
                0, -3, 4,
                -1, 6, 1,
                2, -4, -1,
                -3, -3, 5,
                -5, 1, -3,
                1, -3, -5,
                -5, 0, 3,
                3, -4, 3,
                0, 5, 1,
                -6, 0, -2,
                1, 0, -4,
                -2, -2, -4,
                1, -5, 1,
                -5, 0, 0,
                -2, -6, -1,
                1, -3, -4,
                4, 4, -4,
                -4, 3, -2,
                6, 1, -1,
                -2, 2, 2,
                0, 0, -2,
                -3, -4, 2,
                4, -4, 0,
                3, -1, -5,
                -4, -1, -3,
                2, 5, -2,
                3, 3, 3,
                -4, -3, -3,
                -1, -2, 1,
                -4, 0, -2,
                -2, 1, 0,
                5, -1, 2,
                -2, -1, 4,
                -2, -4, 3,
                2, 0, 3,
                2, -5, -2,
                3, 1, 0,
                3, -3, -2,
                2, -2, -3,
                -5, 3, 2,
                -4, -2, 1,
                -3, 2, -5,
                -4, 3, -3,
                0, -1, 4,
                -4, 4, -3,
                -5, -3, 2,
                0, 6, -2,
                -3, 1, 0,
                -3, 0, 0,
                2, -6, -2,
                3, 3, 2,
                -2, 2, 1,
                6, 0, 0,
                -1, -1, 2,
                2, 4, -4,
                -4, -1, 2,
                3, 0, 0,
                -2, -3, -2,
                3, -4, 1,
                4, -2, -2,
                1, 3, -2,
                -4, -1, 1,
                -1, 3, 5,
                1, 1, -5,
                0, -8, 0,
                -8, 0, 0,
                3, 5, 3,
                0, -4, -2,
                1, 3, 3,
                -2, -2, -2,
                -1, -1, 6,
                -7, 1, 1,
                -2, 1, 5,
                1, 4, 3,
                1, 4, 2,
                -2, -5, 2,
                -2, -3, -4,
                -6, 2, 2,
                2, 3, -5,
                4, 0, 0,
                2, -3, -5,
                -1, 3, -3,
                -3, -3, 1,
                -6, -2, 0,
                0, 1, 4,
                -4, 4, 4,
                -1, -4, -2,
                -3, 4, 1,
                -4, 2, 0,
                -1, -4, 3,
                -2, 1, -4,
                6, 2, 1,
                1, -1, 5,
                0, 1, -3,
                -2, 0, 2,
                -5, -1, -3,
                -2, -6, -2,
                -4, 3, -1,
                1, -6, 0,
                3, 2, 0,
                3, 4, 2,
                -2, 5, -1,
                0, -2, 4,
                2, 5, -1,
                1, 0, -3,
                -3, 2, 1,
                0, 0, 3,
                0, 0, 4,
                4, 1, -4,
                -4, -4, 4,
                1, 3, 4,
                -2, 6, 1,
                -7, -1, 1,
                2, -1, -1,
                -1, 4, 3,
                -4, -2, -4,
                0, -5, 2,
                5, 2, 3,
                3, 0, -2,
                -3, 1, -1,
                -1, -5, 0,
                -3, -2, -2,
                -1, -3, 5,
                1, -2, -4,
                5, 1, 1,
                -2, 0, 6,
                1, 6, 2,
                -1, 1, 4,
                0, -3, -3,
                -2, -3, 1,
                3, -4, 2,
                -3, -2, 0,
                5, -1, 3,
                -1, -3, 4,
                3, -4, -3,
                6, -2, -2,
                2, -2, 5,
                -4, 1, -3,
                5, 3, 3,
                -4, 1, 1,
                1, 1, 7,
                0, -1, 0,
                3, 5, 2,
                0, -5, -3,
                -3, -2, -1,
                -1, -2, -5,
                -1, 1, -5,
                -3, -2, 5,
                3, 4, -1,
                2, 3, -1,
                -1, 4, -2,
                1, 1, -6,
                1, -1, 3,
                -2, -2, 4,
                -1, 3, 4,
                2, -4, 1,
                -3, -5, 2,
                5, 3, -1,
                0, -3, 5,
                -1, -1, 1,
                4, 2, -3,
                -3, -5, -1,
                3, -2, -1,
                1, -6, -2,
                -1, -5, -3,
                -7, 0, 0,
                0, 6, -1,
                0, 5, 2,
                2, 6, -1,
                0, 3, -2,
                3, 2, -3,
                6, 0, -1,
                0, -1, -5,
                6, 2, 2,
                0, -6, 1,
                3, -3, -4,
                0, 0, -3,
                -3, 2, -3,
                -2, 0, -1,
                -1, 4, 2,
                -2, -2, 2,
                2, 1, 2,
                3, 3, -5,
                -4, -3, -2,
                -1, 0, -3,
                3, 0, -4,
                1, 2, 1,
                2, 6, 1,
                3, 5, -2,
                2, 1, -6,
                -1, 0, -1,
                4, 4, -3,
                4, 3, -4,
                -1, 1, 2,
                -1, 0, 6,
                -3, 4, -2,
                -1, -1, 0,
                -2, 6, 0,
                -4, -2, 0,
                1, 2, 5,
                4, -3, -4,
                -4, 4, -4,
                -5, -3, 1,
                4, 4, 3,
                4, 0, -1,
                -3, 1, 3,
                2, -3, -4,
                2, 3, -3,
                4, -3, 3,
                0, 3, -4,
                -1, 2, 0,
                1, -1, 6,
                -6, 2, -1,
                3, 3, 5,
                2, 1, -2,
                -2, -1, 1,
                1, 5, -3,
                0, 5, -1,
                4, -3, 4,
                1, 3, -3,
                0, -4, 2,
                -6, -2, -2,
                0, -1, 5,
                2, 1, -1,
                -3, -4, 0,
                -1, -3, 1,
                0, -1, -2,
                -4, 2, 1,
                -3, -4, -3,
                5, -3, 0,
                3, -1, -1,
                -7, 1, 0,
                1, 5, 2,
                -2, 3, -5,
                -6, 2, 1,
                2, -2, 4,
                2, -1, 0,
                4, 4, 4,
                5, 3, 2,
                2, -5, 0,
                -3, -3, 0,
                -2, -4, -2,
                -5, -3, -2,
                -4, 4, 3,
                1, -3, -1,
                1, -4, 4,
                -1, -1, -4,
                -4, 2, 3,
                3, 4, 0,
                1, -7, 1,
                2, -2, -2,
                -2, 1, -3,
                1, -4, -4,
                -3, 0, -1,
                2, 3, 1,
                -1, -4, 0,
                1, 2, 2,
                -1, 0, 1,
                5, 3, -3,
                3, -4, -1,
                -1, 2, -5,
                -2, 2, -1,
                -4, -3, 1,
                2, 1, 6,
                4, -1, 0,
                2, 4, -1,
                -3, 3, -2,
                2, 2, -1,
                -1, 2, -3,
                3, -2, -3,
                2, -4, 0,
                -3, 2, 2,
                0, 0, 2,
                -2, -2, 0,
                3, -1, 3,
                -1, -6, 1,
                0, 2, 6,
                0, -6, -2,
                3, -1, -2,
                0, 4, -4,
                -5, -1, 2,
                3, -3, -3,
                1, -3, 4,
                0, -5, 3,
                2, -1, -5,
                2, 5, 1,
                4, -1, 1,
                -4, -1, 0,
                -3, -5, 1,
                5, 0, 3,
                0, 3, 4,
                2, 6, 2,
                2, -6, -1,
                5, -3, -2,
                4, 2, 3,
                -3, 1, -2,
                2, 1, 3,
                2, 4, 0,
                1, 1, 4,
                -1, -1, 7,
                1, 4, 1,
                4, -3, -3,
                -3, -1, 1,
                7, -1, -1,
                4, 4, 2,
                5, -3, -3,
                -4, 1, -2,
                -1, 3, -4,
                -4, 1, 2,
                -4, -1, -1,
                4, 3, -3,
                -2, -5, 1,
                4, -4, 1,
                -3, 0, 1,
                -2, 4, -3,
                -2, -4, -3,
                -1, 7, 0,
                -1, -3, -2,
                5, 1, 3,
                1, 2, -4,
                -1, 1, 3,
                -3, -1, -1,
                -1, 0, -7,
                1, 2, 6,
                3, 2, 3,
                0, 0, -8,
                -3, -5, -3,
                6, -2, -1,
                4, 2, -4,
                -2, 3, -4,
                -2, 4, 3,
                1, -6, 1,
                -1, -5, 3,
                -1, 2, 3,
                -1, 3, -1,
                -7, -1, -1,
                5, 3, 1,
                7, 1, 1,
                -2, -2, -6,
                0, -6, 0,
                2, 0, -1,
                0, 0, -4,
                -3, 2, -2,
                -4, -2, 3,
                5, -1, -1,
                0, -2, -5,
                -3, 2, 0,
                2, 0, 4,
                -1, -6, -2,
                6, 0, 2,
                -4, 3, 1,
                -2, -6, 1,
                3, -1, -3,
                -5, -2, 2,
                -1, 2, -6,
                6, -2, 1,
                4, 1, 3,
                -3, -2, 4,
                1, 0, 5,
                3, 1, -1,
                2, -5, -1,
                -2, 1, 3,
                0, 3, 2,
                -1, 2, 6,
                -4, -1, 3,
                4, 0, -3,
                6, 2, 0,
                -5, -3, 0,
                -6, -1, 1,
                5, 1, -1,
                -3, 1, 2,
                2, -6, 2,
                2, -1, -3,
                -1, -2, -2,
                3, 4, -2,
                3, 3, -3,
                6, 2, -2,
                1, -7, 0,
                -2, 1, -6,
                -7, 1, -1,
                0, 5, -2,
                -6, 1, 2,
                1, 1, -4,
                0, -4, 1,
                -1, 0, 3,
                3, -1, 0,
                -3, -3, -1,
                -2, -2, 5,
                8, 0, 0,
                0, -4, -4,
                -1, -2, -1,
                1, -1, -4,
                4, 3, 2,
                -1, 5, 2,
                3, -3, 3,
                4, -3, -2,
                -1, 6, -1,
                4, 4, 1,
                -6, 2, 0,
                -2, 2, -2,
                -1, 5, -2,
                3, 2, -4,
                -3, -3, 3,
                1, 3, 5,
                -5, -3, -3,
                -7, 0, -1,
                -1, -4, 2,
                -2, -4, -4,
                -1, 5, 0,
                -4, -2, -1,
                -5, 3, -3,
                -3, -5, -2,
                -1, 3, -2,
                1, -4, -1,
                0, -1, 7,
                -6, -1, 2,
                3, -2, 0,
                -1, 0, 0,
                -2, -3, -3,
                5, -3, 2,
                -1, 3, 3,
                -1, 1, 7,
                -4, -3, 2,
                -2, 3, -3,
                -2, -5, -3,
                2, 2, -2,
                1, 4, -4,
                2, -2, 2,
                0, -2, -4,
                1, 4, -2,
                1, 0, -2,
                -3, 2, 3,
                0, 0, 1,
                2, 5, 3,
                3, -1, -4,
                1, 6, -1,
                0, -2, 1,
                0, -1, -7,
                1, -5, -2,
                -1, -1, 3,
                3, -5, 2,
                -1, 1, -6,
                -6, 0, 1,
                0, -5, 0,
                -5, 1, 2,
                -3, -5, 0,
                3, 3, -4,
                1, -1, 2,
                -1, -3, -3,
                6, -1, 0,
                -3, 3, -5,
                4, -1, -3,
                2, 6, -2,
                1, 7, 1,
                -3, -1, 2,
                -2, -1, -5,
                4, 0, 4,
                -3, 2, -1,
                1, 3, -4,
                -1, -1, 5,
                -2, 5, -2,
                2, 2, 4,
                -3, 0, -4,
                2, -1, 1,
                5, 1, 2,
                -1, 5, -3,
                1, 7, 0,
                -4, 1, 3,
                5, 2, -1,
                -2, -1, -3,
                -5, 2, -1,
                2, -1, 5,
                -2, 6, -1,
                -4, 2, -1,
                2, -1, -4,
                3, 3, -2,
                4, 2, 4,
                -2, -2, 3,
                -2, 3, 1,
                -2, 0, -6,
                4, 2, -1,
                1, 1, 1,
                -1, 5, -1,
                -1, -4, 1,
                -2, -4, 4,
                2, 2, 6,
                2, 0, -3,
                -2, -2, -3,
                1, -1, -3,
                2, 0, -5,
                -3, 3, 4,
                3, -3, 2,
                -3, 5, -3,
                4, 4, 0,
                1, 2, -6,
                5, -1, -2,
                -7, 0, 1,
                -3, 0, 2,
                -3, 1, 5,
                5, -2, -3,
                2, 6, 0,
                -2, 2, 6,
                0, 4, 4,
                2, -4, 3,
                0, 3, 3,
                3, -3, -1,
                -2, -2, 1,
                1, 3, 1,
                0, -2, -6,
                0, -1, 6,
                -2, -6, 0,
                -5, 0, -3,
                2, 0, 0,
                -3, -4, 3,
                -2, 3, -1,
                0, 4, 3,
                -1, -3, 0,
                -1, 1, 0,
                2, -2, 1,
                1, -6, -1,
                -1, 5, 3,
                -4, 2, -2,
                2, 2, -5,
                3, -2, 2,
                -4, 0, 4,
                0, 1, -4,
                0, 2, 4,
                -1, 3, -5,
                -3, 4, 4,
                1, 2, -1,
                -3, 4, -3,
                1, 1, -2,
                1, 0, 2,
                4, 3, 3,
                -2, 1, -5,
                -2, 1, -1,
                1, 3, -5,
                0, -4, 0,
                6, -2, 0,
                -3, 4, -1,
                3, 2, 2,
                4, -4, 2,
                3, 2, 1,
                1, 3, 0,
                -2, 5, 2,
                -1, 2, -1,
                2, 0, -2,
                -4, -3, -1,
                -3, 2, 4,
                -1, -5, 2,
                5, 0, 2,
                -2, -6, 2,
                -2, 2, -3,
                2, -6, 1,
                0, 8, 0,
                2, 0, 6,
                -3, -3, 2,
                0, 1, 7,
                -4, 4, 1,
                1, -3, 5,
                1, -4, 2,
                -1, -7, 0,
                4, -2, -1,
                5, 1, 0,
                -1, 6, 0,
                3, 0, -1,
                3, 1, -2,
                0, -3, -4,
                -3, 3, 5,
                -6, -2, 1,
                5, -3, 1,
                4, -2, -4,
                -2, 0, 3,
                -1, -2, -4,
                1, -2, -2,
                -1, 0, -2,
                -2, 5, 0,
                3, -3, 1,
                -4, -3, 3,
                -2, -3, 4,
                5, -3, -1,
                1, 2, -5,
                0, -1, 1,
                0, 0, 0,
                -4, -4, -1,
                1, 1, 5,
                0, 1, 6,
                -4, 1, 4,
                -1, 2, 4,
                2, -2, -5,
                -1, -4, -1,
                -2, -4, -1,
                -4, 4, 2,
                1, -5, -3,
                -2, -1, 2,
                -1, -6, 2,
                -6, 0, 0,
                0, -5, 1,
                0, 2, -3,
                4, 3, -2,
                -2, -1, 5,
                -5, 1, 1,
                -2, 1, 2,
                -2, -2, 6,
                -3, 0, 3,
                4, 1, -2,
                4, 2, 0,
                2, 2, 3,
                2, 1, 1,
                -1, 5, 1,
                -4, -4, -2,
                -3, 3, 3,
                2, -2, 0,
                0, 3, 0,
                3, -2, 4,
                2, -2, -6,
                -1, 4, 0;
            for(int i = 0; i < mat.rows(); i++) ret.push_back(mat.row(i).transpose());

            return ret;
        }

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
}

#endif // __SISL_BOX_BCC_QUINTIC_RDO__
