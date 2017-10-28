

/**
 * bcc_linear_rdo.hpp
 *
 * Default evaluation code for the spline defined by
[-1  1  1 -1]
[ 1 -1  1 -1]
[ 1  1 -1 -1]
 * Auto-generated from the Sage worksheet.
 */

#ifndef __SISL_BOX_BCC_LINEAR_RDO__
#define __SISL_BOX_BCC_LINEAR_RDO__

#include <vector>
#include <string>
#include <tuple>
#include <sisl/primitives.hpp>
#include <sisl/lattice/base_lattice.hpp>
#include <sisl/basis/basis_function.hpp>


namespace sisl {
    class bcc_linear_rdo : public basis_function {
    private:
        static inline double __pp_r72____(const double &x_0, const double &x_2) {
           double __pp_r72_____result;
           __pp_r72_____result = -1.0L/2.0L*x_0 - 1.0L/2.0L*x_2 + 1;
           return __pp_r72_____result;
        }
        static inline double __pp_r73____(const double &x_0, const double &x_2) {
           double __pp_r73_____result;
           __pp_r73_____result = -1.0L/2.0L*x_0 - 1.0L/2.0L*x_2 + 1;
           return __pp_r73_____result;
        }
        static inline double __pp_r74____(const double &x_1, const double &x_2) {
           double __pp_r74_____result;
           __pp_r74_____result = -1.0L/2.0L*x_1 - 1.0L/2.0L*x_2 + 1;
           return __pp_r74_____result;
        }
        static inline double __pp_r75____(const double &x_1, const double &x_2) {
           double __pp_r75_____result;
           __pp_r75_____result = (1.0L/2.0L)*x_1 - 1.0L/2.0L*x_2 + 1;
           return __pp_r75_____result;
        }
        static inline double __pp_r76____(const double &x_0, const double &x_2) {
           double __pp_r76_____result;
           __pp_r76_____result = (1.0L/2.0L)*x_0 - 1.0L/2.0L*x_2 + 1;
           return __pp_r76_____result;
        }
        static inline double __pp_r77____(const double &x_0, const double &x_2) {
           double __pp_r77_____result;
           __pp_r77_____result = (1.0L/2.0L)*x_0 - 1.0L/2.0L*x_2 + 1;
           return __pp_r77_____result;
        }
        static inline double __pp_r78____(const double &x_1, const double &x_2) {
           double __pp_r78_____result;
           __pp_r78_____result = -1.0L/2.0L*x_1 + (1.0L/2.0L)*x_2 + 1;
           return __pp_r78_____result;
        }
        static inline double __pp_r79____(const double &x_0, const double &x_1) {
           double __pp_r79_____result;
           __pp_r79_____result = (1.0L/2.0L)*x_0 - 1.0L/2.0L*x_1 + 1;
           return __pp_r79_____result;
        }
        static inline double __pp_r80____(const double &x_0, const double &x_1) {
           double __pp_r80_____result;
           __pp_r80_____result = -1.0L/2.0L*x_0 - 1.0L/2.0L*x_1 + 1;
           return __pp_r80_____result;
        }
        static inline double __pp_r81____(const double &x_0, const double &x_1) {
           double __pp_r81_____result;
           __pp_r81_____result = -1.0L/2.0L*x_0 - 1.0L/2.0L*x_1 + 1;
           return __pp_r81_____result;
        }
        static inline double __pp_r82____(const double &x_1, const double &x_2) {
           double __pp_r82_____result;
           __pp_r82_____result = -1.0L/2.0L*x_1 - 1.0L/2.0L*x_2 + 1;
           return __pp_r82_____result;
        }
        static inline double __pp_r83____(const double &x_0, const double &x_1) {
           double __pp_r83_____result;
           __pp_r83_____result = (1.0L/2.0L)*x_0 - 1.0L/2.0L*x_1 + 1;
           return __pp_r83_____result;
        }
        static inline double __pp_r84____(const double &x_1, const double &x_2) {
           double __pp_r84_____result;
           __pp_r84_____result = (1.0L/2.0L)*x_1 + (1.0L/2.0L)*x_2 + 1;
           return __pp_r84_____result;
        }
        static inline double __pp_r85____(const double &x_0, const double &x_1) {
           double __pp_r85_____result;
           __pp_r85_____result = (1.0L/2.0L)*x_0 + (1.0L/2.0L)*x_1 + 1;
           return __pp_r85_____result;
        }
        static inline double __pp_r86____(const double &x_0, const double &x_1) {
           double __pp_r86_____result;
           __pp_r86_____result = -1.0L/2.0L*x_0 + (1.0L/2.0L)*x_1 + 1;
           return __pp_r86_____result;
        }
        static inline double __pp_r87____(const double &x_0, const double &x_1) {
           double __pp_r87_____result;
           __pp_r87_____result = -1.0L/2.0L*x_0 + (1.0L/2.0L)*x_1 + 1;
           return __pp_r87_____result;
        }
        static inline double __pp_r88____(const double &x_1, const double &x_2) {
           double __pp_r88_____result;
           __pp_r88_____result = (1.0L/2.0L)*x_1 - 1.0L/2.0L*x_2 + 1;
           return __pp_r88_____result;
        }
        static inline double __pp_r89____(const double &x_0, const double &x_1) {
           double __pp_r89_____result;
           __pp_r89_____result = (1.0L/2.0L)*x_0 + (1.0L/2.0L)*x_1 + 1;
           return __pp_r89_____result;
        }
        static inline double __pp_r90____(const double &x_0, const double &x_2) {
           double __pp_r90_____result;
           __pp_r90_____result = -1.0L/2.0L*x_0 + (1.0L/2.0L)*x_2 + 1;
           return __pp_r90_____result;
        }
        static inline double __pp_r91____(const double &x_0, const double &x_2) {
           double __pp_r91_____result;
           __pp_r91_____result = -1.0L/2.0L*x_0 + (1.0L/2.0L)*x_2 + 1;
           return __pp_r91_____result;
        }
        static inline double __pp_r92____(const double &x_1, const double &x_2) {
           double __pp_r92_____result;
           __pp_r92_____result = -1.0L/2.0L*x_1 + (1.0L/2.0L)*x_2 + 1;
           return __pp_r92_____result;
        }
        static inline double __pp_r93____(const double &x_1, const double &x_2) {
           double __pp_r93_____result;
           __pp_r93_____result = (1.0L/2.0L)*x_1 + (1.0L/2.0L)*x_2 + 1;
           return __pp_r93_____result;
        }
        static inline double __pp_r94____(const double &x_0, const double &x_2) {
           double __pp_r94_____result;
           __pp_r94_____result = (1.0L/2.0L)*x_0 + (1.0L/2.0L)*x_2 + 1;
           return __pp_r94_____result;
        }
        static inline double __pp_r95____(const double &x_0, const double &x_2) {
           double __pp_r95_____result;
           __pp_r95_____result = (1.0L/2.0L)*x_0 + (1.0L/2.0L)*x_2 + 1;
           return __pp_r95_____result;
        }

        static double box_spline(const double &x_0, const double &x_1, const double &x_2) {
            if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    return __pp_r72____(x_0, x_2);
                                } else {
                                    return __pp_r73____(x_0, x_2);
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                return 0;
                            } else {
                                return __pp_r74____(x_1, x_2);
                            }
                        }
                    } else {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                return 0;
                            } else {
                                return __pp_r75____(x_1, x_2);
                            }
                        } else {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    return __pp_r76____(x_0, x_2);
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    return __pp_r77____(x_0, x_2);
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                        return __pp_r78____(x_1, x_2);
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return __pp_r79____(x_0, x_1);
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        return 0;
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            return __pp_r80____(x_0, x_1);
                                        } else {
                                            return __pp_r81____(x_0, x_1);
                                        }
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                        return 0;
                                    } else {
                                        return __pp_r82____(x_1, x_2);
                                    }
                                }
                            }
                        } else {
                            return 0;
                        }
                    } else {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                            return __pp_r83____(x_0, x_1);
                        } else {
                            return 0;
                        }
                    }
                }
            } else {
                if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                        return __pp_r84____(x_1, x_2);
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return __pp_r85____(x_0, x_1);
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return 0;
                                        } else {
                                            return __pp_r86____(x_0, x_1);
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return 0;
                                        } else {
                                            return __pp_r87____(x_0, x_1);
                                        }
                                    }
                                } else {
                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                        return 0;
                                    } else {
                                        return __pp_r88____(x_1, x_2);
                                    }
                                }
                            }
                        } else {
                            return __pp_r89____(x_0, x_1);
                        }
                    } else {
                        return 0;
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    return 0;
                                } else {
                                    return __pp_r90____(x_0, x_2);
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    return 0;
                                } else {
                                    return __pp_r91____(x_0, x_2);
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                return __pp_r92____(x_1, x_2);
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                return __pp_r93____(x_1, x_2);
                            } else {
                                return 0;
                            }
                        } else {
                            if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                return 0;
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    return __pp_r94____(x_0, x_2);
                                } else {
                                    return __pp_r95____(x_0, x_2);
                                }
                            }
                        }
                    }
                }
            }
        	return 0;
        }
        static double box_spline_d0(const double &x_0, const double &x_1, const double &x_2) {
            if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    return -1/2;
                                } else {
                                    return -1/2;
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                return 0;
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                return 0;
                            } else {
                                return 0;
                            }
                        } else {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    return 1/2;
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    return 1/2;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 1/2;
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        return 0;
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            return -1/2;
                                        } else {
                                            return -1/2;
                                        }
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            return 0;
                        }
                    } else {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                            return 1/2;
                        } else {
                            return 0;
                        }
                    }
                }
            } else {
                if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 1/2;
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return 0;
                                        } else {
                                            return -1/2;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return 0;
                                        } else {
                                            return -1/2;
                                        }
                                    }
                                } else {
                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                        return 0;
                                    } else {
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            return 1/2;
                        }
                    } else {
                        return 0;
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    return 0;
                                } else {
                                    return -1/2;
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    return 0;
                                } else {
                                    return -1/2;
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                return 0;
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                return 0;
                            } else {
                                return 0;
                            }
                        } else {
                            if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                return 0;
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    return 1/2;
                                } else {
                                    return 1/2;
                                }
                            }
                        }
                    }
                }
            }
        	return 0;
        }
        static double box_spline_d1(const double &x_0, const double &x_1, const double &x_2) {
            if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                return 0;
                            } else {
                                return -1/2;
                            }
                        }
                    } else {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                return 0;
                            } else {
                                return 1/2;
                            }
                        } else {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                        return -1/2;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return -1/2;
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        return 0;
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            return -1/2;
                                        } else {
                                            return -1/2;
                                        }
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                        return 0;
                                    } else {
                                        return -1/2;
                                    }
                                }
                            }
                        } else {
                            return 0;
                        }
                    } else {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                            return -1/2;
                        } else {
                            return 0;
                        }
                    }
                }
            } else {
                if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                        return 1/2;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 1/2;
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return 0;
                                        } else {
                                            return 1/2;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return 0;
                                        } else {
                                            return 1/2;
                                        }
                                    }
                                } else {
                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                        return 0;
                                    } else {
                                        return 1/2;
                                    }
                                }
                            }
                        } else {
                            return 1/2;
                        }
                    } else {
                        return 0;
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                return -1/2;
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                return 1/2;
                            } else {
                                return 0;
                            }
                        } else {
                            if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                return 0;
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    return 0;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                }
            }
        	return 0;
        }
        static double box_spline_d2(const double &x_0, const double &x_1, const double &x_2) {
            if( x_1*-0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    return -1/2;
                                } else {
                                    return -1/2;
                                }
                            } else {
                                return 0;
                            }
                        } else {
                            if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                return 0;
                            } else {
                                return -1/2;
                            }
                        }
                    } else {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                return 0;
                            } else {
                                return -1/2;
                            }
                        } else {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    return -1/2;
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 1.41421356237 ) {
                                    return -1/2;
                                } else {
                                    return 0;
                                }
                            }
                        }
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                        return 1/2;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < -1.41421356237 ) {
                                        return 0;
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                        return 0;
                                    } else {
                                        return -1/2;
                                    }
                                }
                            }
                        } else {
                            return 0;
                        }
                    } else {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 1.41421356237 ) {
                            return 0;
                        } else {
                            return 0;
                        }
                    }
                }
            } else {
                if( x_1*0.707106781187+x_2*-0.707106781187 < 0.0 ) {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 1.41421356237 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                        return 1/2;
                                    } else {
                                        return 0;
                                    }
                                } else {
                                    return 0;
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    } else {
                                        if( x_0*-0.707106781187+x_1*0.707106781187 < -1.41421356237 ) {
                                            return 0;
                                        } else {
                                            return 0;
                                        }
                                    }
                                } else {
                                    if( x_1*0.707106781187+x_2*-0.707106781187 < -1.41421356237 ) {
                                        return 0;
                                    } else {
                                        return -1/2;
                                    }
                                }
                            }
                        } else {
                            return 0;
                        }
                    } else {
                        return 0;
                    }
                } else {
                    if( x_0*-0.707106781187+x_1*-0.707106781187 < 0.0 ) {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_0*0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    return 0;
                                } else {
                                    return 1/2;
                                }
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                    return 0;
                                } else {
                                    return 1/2;
                                }
                            }
                        } else {
                            if( x_1*0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                return 1/2;
                            } else {
                                return 0;
                            }
                        }
                    } else {
                        if( x_0*-0.707106781187+x_1*0.707106781187 < 0.0 ) {
                            if( x_1*-0.707106781187+x_2*-0.707106781187 < 1.41421356237 ) {
                                return 1/2;
                            } else {
                                return 0;
                            }
                        } else {
                            if( x_0*0.707106781187+x_2*0.707106781187 < -1.41421356237 ) {
                                return 0;
                            } else {
                                if( x_0*-0.707106781187+x_2*0.707106781187 < 0.0 ) {
                                    return 1/2;
                                } else {
                                    return 1/2;
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
            Eigen::Matrix<int,185,3> mat;
            mat <<
                1, 2, -1,
                2, -2, -1,
                -3, 0, 1,
                1, -3, 1,
                2, 1, -2,
                -1, -3, -1,
                1, -2, -2,
                -2, -2, -2,
                -1, 1, 3,
                -3, 0, 0,
                0, 2, 1,
                1, -1, 2,
                -2, -2, 2,
                2, 1, -1,
                -2, 0, 1,
                0, -3, 0,
                -1, 2, 2,
                0, 0, -2,
                -1, 0, -3,
                1, 2, 0,
                -1, -1, 1,
                -1, 1, -2,
                -2, 1, 0,
                3, -1, 1,
                1, 2, 2,
                3, -1, -1,
                0, 0, 4,
                1, 1, -3,
                -2, 0, 0,
                -2, 2, 1,
                3, 1, 0,
                -3, 1, 0,
                3, 0, -1,
                -1, 2, 1,
                3, -1, 0,
                -2, 1, 1,
                -2, -1, 2,
                -1, 1, 1,
                -1, 3, 0,
                1, 0, -1,
                0, 4, 0,
                -1, -2, -1,
                1, 3, -1,
                2, 0, 2,
                0, 1, -3,
                0, 1, 0,
                1, -2, 2,
                -1, -2, -2,
                -2, -1, -1,
                2, -2, -2,
                1, -1, -3,
                -1, 2, 0,
                0, 1, 2,
                -1, -1, -2,
                1, 0, 1,
                1, 0, -2,
                1, -1, 0,
                -1, 1, -1,
                -1, 2, -1,
                0, -1, -3,
                4, 0, 0,
                -2, 0, 2,
                -2, 1, -2,
                2, 2, -1,
                0, 3, 0,
                -1, 0, 0,
                -2, -1, 1,
                0, 0, 3,
                1, -2, 1,
                -1, -1, -1,
                2, -2, 2,
                -1, 0, 2,
                0, 0, 1,
                -2, -1, 0,
                0, 3, 1,
                2, 2, 1,
                1, 1, -2,
                0, -1, 0,
                -1, 0, -2,
                -2, -2, -1,
                -1, -1, 3,
                1, 1, 0,
                0, -1, 2,
                -2, -2, 1,
                0, 1, -2,
                -1, -3, 1,
                0, 2, -1,
                1, -2, 0,
                1, -3, -1,
                3, 1, -1,
                -3, -1, 0,
                0, -2, 0,
                2, -1, 1,
                -3, -1, -1,
                1, 1, 3,
                1, 0, 3,
                1, -1, 3,
                1, -3, 0,
                2, -1, 2,
                -1, 3, 1,
                0, -2, -2,
                -1, -1, -3,
                0, 2, 0,
                1, 1, -1,
                2, 1, 0,
                0, 0, -1,
                0, 3, -1,
                0, -1, -1,
                1, 0, 0,
                0, -3, 1,
                0, 0, -3,
                -2, 0, -2,
                2, 0, 0,
                1, 2, 1,
                3, 1, 1,
                2, 0, 1,
                -1, -1, 2,
                1, 3, 1,
                -1, 0, -1,
                -4, 0, 0,
                -1, 1, 2,
                0, -2, 2,
                -3, 1, 1,
                -1, -1, 0,
                -1, 3, -1,
                2, -1, -1,
                -2, 2, 2,
                -1, 1, 0,
                0, -1, -2,
                -2, 2, 0,
                -1, -2, 1,
                1, 3, 0,
                1, 2, -2,
                1, -1, 1,
                1, 0, 2,
                0, 0, -4,
                0, 1, -1,
                0, 1, 1,
                1, 0, -3,
                0, -2, -1,
                -2, 1, -1,
                0, -4, 0,
                1, -1, -1,
                0, 1, 3,
                2, -1, 0,
                -2, 2, -2,
                1, -2, -1,
                -1, -2, 0,
                2, 2, -2,
                1, 1, 2,
                2, 2, 2,
                1, -1, -2,
                -3, 1, -1,
                -1, 2, -2,
                -1, 1, -3,
                -3, 0, -1,
                -1, 0, 1,
                0, 2, -2,
                -2, 2, -1,
                0, 2, 2,
                2, 0, -1,
                -1, 0, 3,
                -2, -1, -2,
                -2, 0, -1,
                0, 0, 2,
                2, 2, 0,
                0, -3, -1,
                3, 0, 0,
                0, -2, 1,
                0, 0, 0,
                2, 1, 2,
                3, 0, 1,
                1, 1, 1,
                0, -1, 3,
                2, 0, -2,
                2, -2, 1,
                -1, -2, 2,
                -1, -3, 0,
                0, -1, 1,
                -2, 1, 2,
                2, -1, -2,
                -2, -2, 0,
                2, 1, 1,
                -3, -1, 1,
                2, -2, 0;
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

template<class T>
   inline double __fast_bcc_linear_rdo__(const vector &p, const body_centered_cubic<T> *lattice) {

       const unsigned char region_lut[8] = {0, 3, 0, 4, 1, 0, 2, 5};

       const unsigned char ls_lut[][4] = {
           {3, 0, 1, 2},
           {3, 4, 1, 2},
           {3, 5, 4, 1},
           {3, 6, 0, 1},
           {7, 3, 6, 1},
           {7, 3, 5, 1}
       };

       const unsigned char sr_lut[][4] = {
           {2, 1, 0, 3},
           {2, 1, 0, 3},
           {2, 3, 1, 0},
           {2, 3, 1, 0},
           {1, 2, 3, 0},
           {1, 2, 3, 0}
       };

       const char sites[][3] = {
           {1, -1, 1},
           {1, 1, 1},
           {2, 0, 0},
           {0, 0, 0},
           {1, 1, -1},
           {0, 2, 0},
           {0, 0, 2},
           {-1, 1, 1}
       };


       const char vperm[][3] = {
           {0, 1, 2},
           {0, 2, 1},
           {1, 2, 0},
           {2, 1, 0},
           {2, 0, 1},
           {1, 0, 2}
       };


       vector sx = lattice->get_dimensions().template cast<double>();
       vector vox = p.array() * sx.array();
       double xyz[4], s[4];

            int ii = ((vox[1] + vox[2])*0.5), vx = 0;
            int jj = ((vox[0] + vox[2])*0.5), vy = 0;
            int kk = ((vox[0] + vox[1])*0.5), vz = 0;

            vx = -ii + jj + kk;
            vy =  ii - jj + kk;
            vz =  ii + jj - kk;

       double x_0 = vox[0] - vx, v_0;
       double x_1 = vox[1] - vy, v_1;
       double x_2 = vox[2] - vz, v_2;

       int
                   index  = (-x_0  + x_2) > 0;
                   index |= ((-x_0 + x_1) > 0) << 1;
                   index |= ((x_1  - x_2) > 0) << 2;


       index = region_lut[index];
       xyz[0] = x_0;
       xyz[1] = x_1;
       xyz[2] = x_2;

       int l1,l2, l3, l4, l5, l6, l7, l8;


       l1 = ls_lut[index][0];
       l2 = ls_lut[index][1];
       l3 = ls_lut[index][2];
       l4 = ls_lut[index][3];

       l5 = sr_lut[index][0];
       l6 = sr_lut[index][1];
       l7 = sr_lut[index][2];
       l8 = sr_lut[index][3];

       float r1, r2,r3,r4;
       r1 = (*lattice)(sites[l1][0] + vx, sites[l1][1] + vy, sites[l1][2] + vz);
       r2 = (*lattice)(sites[l2][0] + vx, sites[l2][1] + vy, sites[l2][2] + vz);
       r3 = (*lattice)(sites[l3][0] + vx, sites[l3][1] + vy, sites[l3][2] + vz);
       r4 = (*lattice)(sites[l4][0] + vx, sites[l4][1] + vy, sites[l4][2] + vz);

       s[l5] = r1;
       s[l6] = r2;
       s[l7] = r3;
       s[l8] = r4;

       l1 = vperm[index][0];
       l2 = vperm[index][1];
       l3 = vperm[index][2];
       v_0 = xyz[l1];
       v_1 = xyz[l2];
       v_2 = xyz[l3];

       return  0.5*((-s[2] + s[3])*v_0 +
                (s[0] - s[1])*v_1 +
                (s[0] + s[1] - s[2] - s[3])*v_2 +
                (2.)*s[2]);
   }


   FAST_BASIS_SPECIALIZATION(bcc_linear_rdo, body_centered_cubic, __fast_bcc_linear_rdo__, 3, unsigned char);
   FAST_BASIS_SPECIALIZATION(bcc_linear_rdo, body_centered_cubic, __fast_bcc_linear_rdo__, 3, char);
   FAST_BASIS_SPECIALIZATION(bcc_linear_rdo, body_centered_cubic, __fast_bcc_linear_rdo__, 3, unsigned short);
   FAST_BASIS_SPECIALIZATION(bcc_linear_rdo, body_centered_cubic, __fast_bcc_linear_rdo__, 3, short);
   FAST_BASIS_SPECIALIZATION(bcc_linear_rdo, body_centered_cubic, __fast_bcc_linear_rdo__, 3, unsigned int);
   FAST_BASIS_SPECIALIZATION(bcc_linear_rdo, body_centered_cubic, __fast_bcc_linear_rdo__, 3, int);
   FAST_BASIS_SPECIALIZATION(bcc_linear_rdo, body_centered_cubic, __fast_bcc_linear_rdo__, 3, float);
   FAST_BASIS_SPECIALIZATION(bcc_linear_rdo, body_centered_cubic, __fast_bcc_linear_rdo__, 3, double);
}

#endif // __SISL_BOX_BCC_LINEAR_RDO__
