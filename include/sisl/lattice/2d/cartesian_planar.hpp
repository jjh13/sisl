/**
 * cartesian_planar.hpp
 *
 * A specialized implementation of the Cartesian planar lattice.
 *
 * @author Joshua Horacsek
 */
#include <sisl/primitives.hpp>
#include <sisl/lattice/base_lattice.hpp>
#include <sisl/memory/array.hpp>

#include <functional>
#include <vector>

#ifndef __SISL_CART_PLANAR_LATTICE__
#define __SISL_CART_PLANAR_LATTICE__

namespace sisl {

    /*! \brief A specialized Cartesian planar lattice class
     */
    template <class T>
    class cartesian_planar : private base_lattice<T> {
    public:
        /*! \brief Allocates a planar cartesian lattice.
         * This lattice includes all integer points in [0, rx] x [0, ry], note
         * that this is inclusive.
         */
        cartesian_planar(unsigned int rx, unsigned int ry) : _array(rx+1, ry+1), _nx(rx), _ny(ry) {
            // Setup basis scaling factors
            _sx = 1./double(rx);
            _sy = 1./double(ry);

            // A little hack to help OOB access
            __zero = 0;
        }

        ~cartesian_planar() { }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual T& operator()(int d0, ...) {
            int _x = d0, _y = 0; va_list vl;
            va_start(vl, d0);
            _y = va_arg(vl, int);
            va_end(vl);
            __zero = 0;


            if(!in_bound(_x,_y)) return __zero;
            return _array(_x, _y);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual const T& operator()(int d0, ...) const {
            int _x = d0, _y = 0; va_list vl;
            T *__hack = (T *)&__zero; *__hack = 0;
            va_start(vl, d0);
            _y = va_arg(vl, int);
            va_end(vl);

            if(!in_bound(_x,_y)) return __zero;
            return _array(_x, _y);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual T& operator()(int *d) {
            unsigned int x = d[0], y = d[1];
            __zero = 0;

            if(!in_bound(x,y)) return __zero;
            return _array(x, y);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual const T& operator()(int *d)  const {
            unsigned int x = d[0], y = d[1];
            T *__hack = (T *)&__zero; *__hack = 0;

            if(!in_bound(x,y)) return __zero;
            return _array(x, y);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual T& operator()(const lattice_site &s) {
            __zero = 0;
            if(!in_bound(s[0], s[1])) return __zero;
            return _array(s[0], s[1]);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual const T& operator()(const lattice_site &s) const {
            T *__hack = (T *)&__zero; *__hack = 0;

            if(!in_bound(s[0], s[1])) return __zero;
            return _array(s[0], s[1]);
        }

        /*! \brief Uniquely index a lattice site
         * This function return a linearized version of a lattice site,
         * this allows one to uniquely associate a lattice site with an
         * integer.
         */
        virtual const unsigned int linear_index(int d0, ...) const {
            unsigned int ret = 0; va_list vl;

            va_start(vl, d0);
            ret = _array.linear_index(d0, vl);
            va_end(vl);
            return ret;
        }

        /*! \brief Uniquely index a lattice site
         * This function return a linearized version of a lattice site,
         * this allows one to uniquely associate a lattice site with an
         * integer.
         */
        virtual const unsigned int linear_index(int *d) const {
           unsigned int x = d[0], y = d[1];
           return _array.linear_index(x, y);
        }

        /*! \brief Uniquely index a lattice site
         * This function return a linearized version of a lattice site,
         * this allows one to uniquely associate a lattice site with an
         * integer.
         */
        virtual const unsigned int linear_index(const lattice_site &s) const {
            return _array.linear_index(s[0], s[1]);
        }

        /*! \brief Returns a natural scale so that the lattice sites
         * would be scaled to within a unit hyper cube.
         */
        virtual const vector get_natural_scales() const {
            vector scales(2);
            scales << _sx, _sy;
            return scales;
        }

        /*! \brief Returns the integer extent of each dimension,
         * that is, the lattice extends from [0, ret[i]] in each
         * dimension.
         */
        virtual const lattice_site get_dimensions() const {
            lattice_site dims(2);
            dims << _nx, _ny;
            return dims;
        }

        /*! \brief Returns a value within the unit hyper cube that
         * represents the given lattice site scaled withing that
         * unit hypercube.
         */
        virtual vector get_site_position(int d0, ...) const {
            int _x = d0, _y = 0; va_list vl;
            vector ret(2);

            va_start(vl, d0);
            _y = va_arg(vl, int);
            va_end(vl);

            ret << double(_x)*_sx, double(_y)*_sy;
            return ret;
        }

        /*! \brief Returns a value within the unit hyper cube that
         * represents the given lattice site scaled withing that
         * unit hypercube.
         */
        virtual vector get_site_position(int *d) const {
            return get_site_position(d[0], d[1]);
        }

        /*! \brief Returns a value within the unit hyper cube that
         * represents the given lattice site scaled withing that
         * unit hypercube.
         */
        virtual vector get_site_position(const lattice_site &s) const {
            return get_site_position(s[0], s[1]);
        }

        /*! \brief Returns the nearest lattice site for a given point
         * within the unit hyper cube.
         */
        virtual lattice_site get_nearest_site(const vector &pt) const {
            int x = round(pt[0] * _nx);
            int y = round(pt[1] * _ny);

            lattice_site r(2);
            r << x, y;

            return r;
        }

        /*!
         * \brief Returns whether or not a lattice site
         * truely corresponds to a valid lattice site on
         * this particular lattice.
         */
        virtual bool is_lattice_site(int d0, ...) const  { return true; }

        /*!
         * \brief Returns whether or not a lattice site
         * truely corresponds to a valid lattice site on
         * this particular lattice.
         */
        virtual bool is_lattice_site(int *d) const { return true; }

        /*!
         * \brief Returns whether or not a lattice_site object
         * truely corresponds to a valid lattice site on
         * this particular lattice.
         */
        virtual bool is_lattice_site(const lattice_site &) const { return true; }

        /*!
         * \brief Returns whether a lattice site actually
         * contains a value.
         */
        virtual bool is_filled(int d0, ...) const { return true; }

        /*!
         * \brief Returns whether a lattice site actually
         * contains a value.
         */
        virtual bool is_filled(int *d) const { return true; }

        /*!
         * \brief Returns whether a lattice site actually
         * contains a value.
         */
        virtual bool is_filled(const lattice_site &s) const { return true; }

        /*!
         * \brief Iterates over every lattice site contained within
         * the dimensions of this lattice.
         */
        virtual void each_site(const std::function<void(const lattice_site &)> &func, bool parallel = false) {
            for(int i = 0; i <= _nx; i++) {
                for(int j = 0; j <= _ny; j++) {
                    lattice_site site(2);
                    site << i, j;
                    func(site);
                }
            }
        }

        /*!
         * \brief Returns the name of this lattice
         */
        virtual std::string get_lattice_name() const {
            return "cartesian_planar";
        }

        /*!
         * \brief Returns the theoretical number of sites
         * within this lattice.
         */
        virtual const int number_of_lattice_sites() const {
            return (_nx ) * (_ny );
        }

        /*!
         * \brief Dumps this lattice to a file stream.
         */
        virtual bool dump_to_stream(std::ofstream &) const {
            throw "Not implemented";
        }

        /*!
         * \brief Reads a lattice to a file stream, replacing all values.
         */
        virtual bool read_from_stream(std::ifstream &) {
            throw "Not implemented";
        }


        virtual void set_extension_type(const LatticeExtensionType &e,
                                        const LatticeRegionShift &s) {
            throw "Not implemented";
        }
    protected:
        virtual const unsigned int linear_index(int d0, va_list vl) const {
           return _array.linear_index(d0, vl);
        }

        virtual T& operator()(int d0, va_list vl) {

            unsigned int _x = d0, _y = 0;
            _y = va_arg(vl, unsigned int);
            __zero = 0;

            if(!in_bound(_x,_y)) return __zero;
            return _array(_x, _y);
        }

        virtual const T& operator()(int d0, va_list vl) const {
            unsigned int _x = d0, _y = 0;
            _y = va_arg(vl, unsigned int);
            T *__hack = (T *)&__zero; *__hack = 0;

            if(!in_bound(_x,_y)) return __zero;
            return _array(_x, _y);
        }

        virtual bool is_filled(int d0, va_list vl) const { return true; }
        virtual bool is_lattice_site(int d0, va_list vl) const { return true; }

    private:
        bool in_bound(const int &x, const int &y) const {
            return !(x < 0 || x > _nx || y < 0 || y > _ny );
        }

    private:
        unsigned int _nx, _ny;
        double _sx, _sy;
        T __zero;
        array_n<T, 2> _array;
    };
};


#endif // __SISL_CART_PLANAR_LATTICE__
