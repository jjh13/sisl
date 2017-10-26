/**
 * body_centered_cubic.hpp
 *
 * A specialized implementation of the A*_3 lattice. 
 *
 * @Joshua Horacsek
 */

#ifndef __SISL_BCC_LATTICE__
#define __SISL_BCC_LATTICE__

 #include <sisl/primitives.hpp>
 #include <sisl/lattice/base_lattice.hpp>
 #include <sisl/memory/array.hpp>

 #include <functional>
 #include <vector>

namespace sisl {

    /*! \brief Defines the body centered cubic lattice in 3d.
     */
    template <class T>
    class body_centered_cubic : public base_lattice<T> {
    public:
        /*! \brief Dummy zero allocator for the CC lattice.
         */
        body_centered_cubic() :_array(array_n<T, 3>(1, 1, 1)){
            _nx = _ny = _nz = 0;
            _sx = _sy = _sz = 1;
            _anx = _any =  _anz = 1;
        }

        /*! \brief Allocates a BCC  lattice.
         * This lattice includes all integer points in [0, rx] x [0, ry] x [0, rz], 
         * with even Z parity note that this is inclusive.
         */
        body_centered_cubic(const int &rx, const int &ry, const int &rz) {
            _nx = rx;
            _ny = ry;
            _nz = rz;

            _sx = 1./double(rx);
            _sy = 1./double(ry);
            _sz = 1./double(rz);

            //
            _anx = ceil(double(rx+1)/2.);
            _any = ceil(double(ry+1)/2.);
            _anz = rz+1;

            // Setup internal memory./l
            _array = array_n<T, 3>(_anx, _any, _anz);
            __zero = 0;
        }
        /*! \brief Initializes a BCC lattice from a file stream.
         */
        body_centered_cubic(std::ifstream &stream) {
            if(!stream.good()) throw "Attempted to instantiate with invalid stream!";

            unsigned int sig = 0;

            stream.read((char *)&sig, sizeof(unsigned int));

            if(sig != 'BBCC') throw "Invalid lattice loaded on BCC!";
            stream.read((char *)&_nx, sizeof(unsigned int));
            stream.read((char *)&_ny, sizeof(unsigned int));
            stream.read((char *)&_nz, sizeof(unsigned int));

            _sx = 1./double(_nx);
            _sy = 1./double(_ny);
            _sz = 1./double(_nz);

            //
            _anx = ceil(double(_nx+1)/2.);
            _any = ceil(double(_ny+1)/2.);
            _anz = _nz+1;

            // Setup internal memory./l
            _array = array_n<T, 3>(_anx, _any, _anz);
            __zero = 0;
            _array.read_from_stream(stream);
        }

        ~body_centered_cubic() {  }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual T& operator()(int d0, ...) {
            int _x = d0, _y = 0, _z = 0;
            int ax, ay, az;
            va_list vl;

            va_start(vl, d0);
            _y = va_arg(vl, int);
            _z = va_arg(vl, int);
            va_end(vl);
            __zero = 0;

            if(!is_lattice_site(_x, _y, _z)) throw "body_centered_cubic::operator() - given non lattice site!";
            if(!in_bound(_x, _y, _z))  return __zero;

            // Transform to 3d array index
            {
                int zmod = _z % 2;
                ax = (_x - zmod) / 2;
                ay = (_y - zmod) / 2;
                az = _z;
            }

            return _array(ax, ay, az);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual const T& operator()(int d0, ...) const {
            int _x = d0, _y = 0, _z = 0;
            int ax, ay, az;
            va_list vl;

            va_start(vl, d0);
            _y = va_arg(vl, int);
            _z = va_arg(vl, int);
            va_end(vl);

            T *__hack = (T *)&__zero; *__hack = 0;

            if(!is_lattice_site(_x, _y, _z)) throw "body_centered_cubic::operator() - given non lattice site!";
            if(!in_bound(_x, _y, _z))  return __zero;

            // Transform to 3d array index
            {
                int zmod = _z % 2;
                ax = (_x - zmod) / 2;
                ay = (_y - zmod) / 2;
                az = _z;
            }

            return _array(ax, ay, az);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual T& operator()(int *d) {
            return (*this)(d[0], d[1], d[2]);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual const T& operator()(int *d) const {
            return (*this)(d[0], d[1], d[2]);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual T& operator()(const lattice_site &s) {
            return (*this)(s[0], s[1], s[2]);
        }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual const T& operator()(const lattice_site &s) const {
            return (*this)(s[0], s[1], s[2]);
        }

        /*! \brief Uniquely index a lattice site
         * This function return a linearized version of a lattice site,
         * this allows one to uniquely associate a lattice site with an
         * integer.
         */
        virtual const unsigned int linear_index(int d0, ...) const {
            int _x = d0, _y = 0, _z = 0;
            int ax, ay, az;
            va_list vl;

            va_start(vl, d0);
            _y = va_arg(vl, int);
            _z = va_arg(vl, int);
            va_end(vl);

            if(!is_lattice_site(_x, _y, _z)) throw "body_centered_cubic::linear_index() - given non lattice site!";

            // Transform to 3d array index
            {
                int zmod = _z % 2;
                ax = (_x - zmod) / 2;
                ay = (_y - zmod) / 2;
                az = _z;
            }

            return _array.linear_index(ax, ay, az);
        }

        /*! \brief Uniquely index a lattice site
         * This function return a linearized version of a lattice site,
         * this allows one to uniquely associate a lattice site with an
         * integer.
         */
        virtual const unsigned int linear_index(int *d) const {
            return this->linear_index(d[0], d[1], d[2]);
        }

        /*! \brief Uniquely index a lattice site
         * This function return a linearized version of a lattice site,
         * this allows one to uniquely associate a lattice site with an
         * integer.
         */
        virtual const unsigned int linear_index(const lattice_site &s) const {
            return this->linear_index(s[0], s[1], s[2]);
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
            lattice_site s(3);
            s << _nx , _ny , _nz ;
            return s;
        }

        /*! \brief Returns a value within the unit hyper cube that
         * represents the given lattice site scaled within that
         * unit hypercube.
         */
        virtual vector get_site_position(int d0, ...) const {
            int _x = d0, _y = 0, _z = 0;
            vector ret(3);
            va_list vl;

            va_start(vl, d0);
            _y = va_arg(vl, int);
            _z = va_arg(vl, int);
            va_end(vl);

            if(!is_lattice_site(_x, _y, _z)) throw "body_centered_cubic::get_site_position() - given non lattice site!";
            ret << double(_x)*_sx, double(_y)*_sy, double(_z)*_sz;
            return ret;
        }

        /*! \brief Returns a value within the unit hyper cube that
         * represents the given lattice site scaled withing that
         * unit hypercube.
         */
        virtual vector get_site_position(int *d) const {
            return this->get_site_position(d[0], d[1], d[2]);
        }

        /*! \brief Returns a value within the unit hyper cube that
         * represents the given lattice site scaled withing that
         * unit hypercube.
         */
        virtual vector get_site_position(const lattice_site &s) const {
            return this->get_site_position(s[0], s[1], s[2]);
        }

        /*! \brief Returns the nearest lattice site for a given point
         * within the unit hyper cube.
         */
        virtual lattice_site get_nearest_site(const vector &pt) const {
             vector xyz = pt * 0.5;
             vector extent = get_dimensions().template cast<double>();
             vector unit(3), ijk(3), uvw(3), v1, v2;

             xyz = xyz.array() * extent.array();

             unit.fill(1.);
             ijk = xyz + (0.5)*unit;
             uvw = xyz + unit;

             for(int i = 0; i < 3; i++) {
                 ijk[i] = 2*floor(ijk[i]);
                 uvw[i] = 2*floor(uvw[i]);
            }
            uvw -= unit;

            v1 = ijk - 2*xyz;
            v2 = uvw - 2*xyz;

            if(v1.dot(v1) < v2.dot(v2)) {
                return ijk.cast<int>();
            }
            return uvw.cast<int>();
        }

        /*!
         * \brief Returns whether or not a lattice site
         * truely corresponds to a valid lattice site on
         * this particular lattice.
         */
        virtual bool is_lattice_site(int d0, ...) const {
            int _x = d0, _y = 0, _z = 0;
            va_list vl;

            va_start(vl, d0);
            _y = va_arg(vl, int);
            _z = va_arg(vl, int);
            va_end(vl);

            if((_z % 2)) {
                if((_y % 2) == 0 || (_x % 2) == 0) {
                    return false;
                }
            } else if((_y % 2) == 1 || (_x % 2) == 1) {
                return false;
            }
            return true;
        }

        /*!
         * \brief Returns whether or not a lattice site
         * truely corresponds to a valid lattice site on
         * this particular lattice.
         */
        virtual bool is_lattice_site(int *d) const {
            return is_lattice_site(d[0], d[1], d[2]);
        }

        /*!
         * \brief Returns whether or not a lattice_site object
         * truely corresponds to a valid lattice site on
         * this particular lattice.
         */
        virtual bool is_lattice_site(const lattice_site &s) const {
            return is_lattice_site(s[0], s[1], s[2]);
        }

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
            for(int i = 0; i <= _nx; i+= 2)
                for(int j = 0; j <= _ny; j+=2)
                    for(int k = 0; k <= _nz; k++) {
                        lattice_site s(3);
                        int zmod = k % 2;
                        s << i+zmod,j+zmod,k;
                        if(in_bound(s[0], s[1],s[2]))
                            func(s);
                    }
        }

        /*!
         * \brief Returns the name of this lattice
         */
        virtual std::string get_lattice_name() const {
            return "body_centered_cubic";
        }

        /*!
         * \brief Returns the theoretical number of sites
         * within this lattice.
         */
        virtual const int number_of_lattice_sites() const {
            return 
                (floor(_nx/2.)+1) * (floor(_ny/2.) + 1)  * (floor(_nz/2.) + 1)  + 
                floor((_nx + 1)/2.) * floor((_ny + 1)/2.) * floor((_nz + 1)/2.);
        }

        /*!
         * \brief Dumps this lattice to a file stream.
         */
        virtual bool dump_to_stream(std::ofstream &stream) const {
            unsigned int sig = 'BBCC';

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
                throw "Not implemented";
        }

    protected:
        bool in_bound(const int &i, const int &j, const int &k) const {
            return !(i < 0 || i > _nx || j < 0 || j > _ny || k < 0 || k > _nz);
        }

        virtual const unsigned int linear_index(int d0, va_list vl) const {
            int _x = d0, _y = 0, _z = 0;
            int ax, ay, az;

            _y = va_arg(vl, int);
            _z = va_arg(vl, int);

            return this->linear_index(_x, _y, _z);
        }
        virtual T& operator()(int d0, va_list vl) {
            int _x = d0, _y = 0, _z = 0;
            int ax, ay, az;

            _y = va_arg(vl, int);
            _z = va_arg(vl, int);

            return this->operator()(_x, _y, _z);
        }
        virtual const T& operator()(int d0, va_list vl) const {
            int _x = d0, _y = 0, _z = 0;
            int ax, ay, az;

            _y = va_arg(vl, int);
            _z = va_arg(vl, int);

            return this->operator()(_x, _y, _z);
        }
        virtual bool is_filled(int d0, va_list vl) const {
            return true;
        }
        virtual bool is_lattice_site(int d0, va_list vl) const {
            int _x = d0, _y = 0, _z = 0;

            _y = va_arg(vl, int);
            _z = va_arg(vl, int);

            if((_z % 2)) {
                if((_y % 2) == 0 || (_x % 2) == 0) {
                    return false;
                }
            } else if((_y % 2) == 1 || (_x % 2) == 1) {
                return false;
            }
            return true;
        }
    private:
        int _nx, _ny, _nz;
        int _anx, _any, _anz;
        double _sx, _sy, _sz;
        T __zero;

        array_n<T, 3> _array;
    };
};

#endif // __SISL_BCC_LATTICE__
