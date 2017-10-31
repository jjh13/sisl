/**
 * Contains various primitive datatypes for SISL, most of which derive from
 * Eigen datatypes.
 *
 * @author Joshua Horacsek
 */

#ifndef _SISL_PRIMITIVE_H_
#define _SISL_PRIMITIVE_H_

#include <Eigen/Dense>

// By default, SISL will do all floating point arithmetic in double precision
#ifndef sisl_float
    #define sisl_float double
#endif

namespace sisl {
    
    // Basic primitive datatypes
    //! dynamically sized (mathematical) vector datatype
    using vector       = Eigen::Matrix<sisl_float, Eigen::Dynamic, 1>; 
    //! dynamically size point datatype
    using point        = Eigen::Matrix<sisl_float, Eigen::Dynamic, 1>; 
    //! Dynamically sized transform (i.e. matrix)
    using transform    = Eigen::Matrix<sisl_float, Eigen::Dynamic, Eigen::Dynamic>; 
    
    //! A fixed size 3-vector for holding colours
    using rgb_color    = Eigen::Matrix<sisl_float, 3, 1>; 
    //! A fixed size 4-vector for holding colours and an alpha channel 
    using rgba_color   = Eigen::Matrix<sisl_float, 4, 1>; 
    //! Lattice_site are integer tuples (vectors)
    using lattice_site = Eigen::Matrix<int, Eigen::Dynamic, 1>; 
    //! integer tuples (vectors)
    using int_tuple    = Eigen::Matrix<int, Eigen::Dynamic, 1>; 

    /*! The various datatypes SISL can read, mainly used in the raw filetype reader */
    enum e_datatype {
        SDT_UNKNOWN = -1,
        SDT_UINT8 = 0,
        SDT_UINT16 = 1,
        SDT_UINT32 = 2,
        SDT_FLOAT = 3,
        SDT_DOUBLE = 4
    };

    /*! \brief 3D plane class.
     *
     * A plain plane class. 
     */
    struct plane {
        vector     n; //!< normal direction
        sisl_float d; //!< normal offset
        
        /*! Plane constructor
         * \param _n Input normal direction (note, this will get normalized on assignment).
         * \param _d Input normal offset.
         */
        plane(const vector &_n, const sisl_float &_d) : n(_n), d(_d) { }
        /*! Plane copy constructor
         * \param _p A plane to copy
         */
        plane(const plane &_p) : n(_p.n), d(_p.d) { }
    };

    /*! \brief 3D vertex.
     *
     * A vertex in the graphics sense, i.e. a spatial point, and a normal to help shading 
     * heuristics.
     */
    struct vertex3 {
        vector p; //!< vertex spatial location 
        vector n; //!< vertex normal direction

        /*! Vertex constructor
         * \param _p Spatial location of a point.
         * \param _n Point normal.
         */
        vertex3(const vector &_p, const vector &_n) : p(_p), n(_n) { }
        
        /*! Vertex constructor
         * \param x,y,z Spatial location of a point.
         * \param i,j,k Point normal.
         */
        vertex3(
            const double &x, const double &y, const double &z, 
            const double &i, const double &j, const double &k) : p(vector(3)), n(vector(3)) {
            p << x,y,z;
            n << i,j,k;
        }
        /*! Vertex copy constructor
         * \param _v A vertex to copy
         */
        vertex3(const vertex3 &_v) : p(_v.p), n(_v.n) { }
    };

    /** \brief Triangle in 3D space.
     * 
     * A collection of three points that creates a ploygon in space
     */
    struct triangle {
        vertex3 v1; //!< triangle vertex 1 
        vertex3 v2; //!< triangle vertex 2
        vertex3 v3; //!< triangle vertex 3 

        /*! Ray constructor
         * \param _v1,_v2,_v3 The vertices that make up a triangle.
         */
        triangle(const vertex3 &_v1, 
                 const vertex3 &_v2, 
                 const vertex3 &_v3) : v1(_v1), v2(_v2), v3(_v3) { }
        /*! Plane copy constructor
         * \param _p A plane to copy
         */
        triangle(const triangle &_t) : v1(_t.v1), v2(_t.v2), v3(_t.v3) { } 
    };

    /*! \brief A ray in space.
     * 
     * A ray class, i.e. a half line.
     */
    struct ray {
        point  o; //!< ray origin
        vector d; //!< ray direction

        /*! Ray constructor
         * \param _o Input ray origin.
         * \param _d Input ray direction.
         */
        ray(const point &_o, const vector &_d) : o(_o), d(_d.normalized()) { }

        /*! Ray copy constructor
         * \param _r Ray to copy
         */
        ray(const ray &_r) : o(_r.o), d(_r.d.normalized()) { }

        /*! Returns the point at a distinance t away from the ray,
         *  travelling in the direction of the ray.
         * \param t Distance along ray from origin
         */
        point at(const sisl_float &t) {return o+t*d;}
    };
}
#endif // _SISL_PRIMITIVE_H_