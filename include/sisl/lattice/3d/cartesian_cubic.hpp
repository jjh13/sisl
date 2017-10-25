/**
 * cartesian_cubic.hpp
 *
 * A specialized implementation of the Cartesian cubic lattice. The general implemnetation
 * exists in sisl/n_cartesian.hpp
 *
 * @author Joshua Horacsek
 */
#include <sisl/primitives.hpp>
#include <sisl/lattice/base_lattice.hpp>
#include <sisl/memory/array.hpp>

#include <functional>
#include <vector>

#ifndef __SISL_CART_CUBIC_LATTICE__
#define __SISL_CART_CUBIC_LATTICE__

namespace sisl {

    /*! \brief A specialized cubic Cartesian lattice class
     */
    template <class T>
    class cartesian_cubic : public base_lattice<T> {
    public:
        /*! \brief Allocates a cubic cartesian lattice.
         * This lattice includes all integer points in [0, rx] x [0, ry], note
         * that this is inclusive.
         */
        cartesian_cubic(unsigned int rx, unsigned int ry, unsigned int rz) : _array(rx+1, ry+1, rz+1), _nx(rx), _ny(ry), _nz(rz){
            // Setup basis scaling factors
            _sx = 1./double(rx);
            _sy = 1./double(ry);
            _sz = 1./double(rz);

            // A little hack to help OOB access
            __zero = 0;
        }

        cartesian_cubic(std::ifstream &stream) {
            if(!stream.good()) throw "Attempted to instantiate with invalid stream!";

            unsigned int sig = 0;

            stream.read((char *)&sig, sizeof(unsigned int));

            if(sig != 'CCL_') throw "Invalid lattice loaded on CC!";
            stream.read((char *)&_nx, sizeof(unsigned int));
            stream.read((char *)&_ny, sizeof(unsigned int));
            stream.read((char *)&_nz, sizeof(unsigned int));

            _sx = 1./double(_nx);
            _sy = 1./double(_ny);
            _sz = 1./double(_nz);

            // Setup internal memory.
            _array = array_n<T, 3>(_nx + 1, _ny + 1, _nz + 1);
            __zero = 0;
            _array.read_from_stream(stream);
        }
        ~cartesian_cubic() { }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual T& operator()(int d0, ...) {
            int _x = d0, _y = 0, _z = 0; va_list vl;
            va_start(vl, d0);
            _y = va_arg(vl, int);
            _z = va_arg(vl, int);
            va_end(vl);
            __zero = 0;


            if(!in_bound(_x,_y, _z)) return __zero;
            return _array(_x, _y, _z);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual const T& operator()(int d0, ...) const {
            int _x = d0, _y = 0, _z = 0; va_list vl;
            T *__hack = (T *)&__zero; *__hack = 0; // This gets around the const modifier for this
            va_start(vl, d0);
            _y = va_arg(vl, int);
            _z = va_arg(vl, int);
            va_end(vl);

            // 

            if(!in_bound(_x,_y, _z)) return __zero;
            return _array(_x, _y, _z);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual T& operator()(int *d) {
            unsigned int x = d[0], y = d[1], z = d[2];
            __zero = 0;

            if(!in_bound(x, y, z)) return __zero;
            return _array(x, y, z);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual const T& operator()(int *d)  const {
            unsigned int x = d[0], y = d[1], z = d[2];
            T *__hack = (T *)&__zero; *__hack = 0;

            if(!in_bound(x, y, z)) return __zero;
            return _array(x, y, z);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual T& operator()(const lattice_site &s) {
            __zero = 0;
            if(!in_bound(s[0], s[1], s[2])) return __zero;
            return _array(s[0], s[1], s[2]);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual const T& operator()(const lattice_site &s) const {
            T *__hack = (T *)&__zero; *__hack = 0;

            if(!in_bound(s[0], s[1], s[2])) return __zero;
            return _array(s[0], s[1], s[2]);
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
           unsigned int x = d[0], y = d[1], z = d[2];
           return _array.linear_index(x, y, z);
        }

        /*! \brief Uniquely index a lattice site
         * This function return a linearized version of a lattice site,
         * this allows one to uniquely associate a lattice site with an
         * integer.
         */
        virtual const unsigned int linear_index(const lattice_site &s) const {
            return _array.linear_index(s[0], s[1], s[2]);
        }

        /*! \brief Returns a natural scale so that the lattice sites
         * would be scaled to within a unit hyper cube.
         */
        virtual const vector get_natural_scales() const {
            vector scales(3);
            scales << _sx, _sy, _sz;
            return scales;
        }

        /*! \brief Returns the integer extent of each dimension,
         * that is, the lattice extends from [0, ret[i]] in each
         * dimension.
         */
        virtual const lattice_site get_dimensions() const {
            lattice_site dims(3);
            dims << _nx, _ny, _nz;
            return dims;
        }

        /*! \brief Returns a value within the unit hyper cube that
         * represents the given lattice site scaled withing that
         * unit hypercube.
         */
        virtual vector get_site_position(int d0, ...) const {
            int _x = d0, _y = 0, _z; va_list vl;
            vector ret(3);

            va_start(vl, d0);
            _y = va_arg(vl, int);
            _z = va_arg(vl, int);
            va_end(vl);

            ret << double(_x)*_sx, double(_y)*_sy, double(_z)*_sz;
            return ret;
        }

        /*! \brief Returns a value within the unit hyper cube that
         * represents the given lattice site scaled withing that
         * unit hypercube.
         */
        virtual vector get_site_position(int *d) const {
            return get_site_position(d[0], d[1], d[2]);
        }

        /*! \brief Returns a value within the unit hyper cube that
         * represents the given lattice site scaled withing that
         * unit hypercube.
         */
        virtual vector get_site_position(const lattice_site &s) const {
            return get_site_position(s[0], s[1], s[2]);
        }

        /*! \brief Returns the nearest lattice site for a given point
         * within the unit hyper cube.
         */
        virtual lattice_site get_nearest_site(const vector &pt) const {
            int x = round(pt[0] * _nx);
            int y = round(pt[1] * _ny);
            int z = round(pt[2] * _ny);

            lattice_site r(3);
            r << x, y, z;

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
            #pragma omp parallel for if(parallel)
            for(int i = 0; i <= _nx; i++) {
                for(int j = 0; j <= _ny; j++) {
                    for(int k = 0; k <= _nz; k++) {
                        lattice_site site(3);
                        site << i, j, k;
                        func(site);
                    }
                }
            }
        }

        /*!
         * \brief Returns the name of this lattice
         */
        virtual std::string get_lattice_name() const {
            return "cartesian_cubic";
        }

        /*!
         * \brief Returns the theoretical number of sites
         * within this lattice.
         */
        virtual const int number_of_lattice_sites() const {
            return (_nx + 1) * (_ny + 1) * (_nz + 1);
        }

        /*!
         * \brief Dumps this lattice to a file stream.
         */
        virtual bool dump_to_stream(std::ofstream &stream) const {
            unsigned int sig = 'CCL_';

            if(!stream.good()) return false;

            stream.write((char *)&sig, sizeof(unsigned int));
            stream.write((char *)&_nx, sizeof(unsigned int));
            stream.write((char *)&_ny, sizeof(unsigned int));
            stream.write((char *)&_nz, sizeof(unsigned int));

            _array.dump_to_stream(stream);
            return true;
        }

        /*!
         * \brief Reads a lattice to a file stream, replacing all values.
         */
        virtual bool read_from_stream(std::ifstream &) {
            throw "Not implemented";
        }

        virtual void set_extension_type(const LatticeExtensionType &e,
                                        const LatticeRegionShift &s) {
            // Check validity of the extension type
            if(s == LatticeRegionShift::NoShift && e == LatticeExtensionType::ForceZero) {
                m_Shift = s;
                m_Extension = e;
            }
            else 
                throw "Not implemented";
        }

    protected:
        virtual const unsigned int linear_index(int d0, va_list vl) const {
           return _array.linear_index(d0, vl);
        }

        virtual T& operator()(int d0, va_list vl) {
            unsigned int _x = d0, _y = 0, _z = 0;
            _y = va_arg(vl, unsigned int);
            _z = va_arg(vl, unsigned int);

            __zero = 0;

            if(!in_bound(_x, _y, _z)) return __zero;
            return _array(_x, _y, _z);
        }

        virtual const T& operator()(int d0, va_list vl) const {
            unsigned int _x = d0, _y = 0, _z = 0;
            _y = va_arg(vl, unsigned int);
            _z = va_arg(vl, unsigned int);
            T *__hack = (T *)&__zero; *__hack = 0;

            if(!in_bound(_x, _y, _z)) return __zero;
            return _array(_x, _y, _z);
        }

        virtual bool is_filled(int d0, va_list vl) const { return true; }
        virtual bool is_lattice_site(int d0, va_list vl) const { return true; }

    private:
        bool in_bound(const int &x, const int &y, const int &z ) const {
            return !(x < 0 || x > _nx || y < 0 || y > _ny || z < 0 || z > _nz);
        }

        unsigned int _nx, _ny, _nz;
        double _sx, _sy, _sz;
        T __zero;
        array_n<T, 3> _array;

        LatticeRegionShift m_Shift;
        LatticeExtensionType m_Extension;
    };
};


#endif // __SISL_CART_PLANAR_LATTICE__
