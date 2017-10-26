/**
 * base_lattice.hpp
 *
 * Defines the abstract class for a lattice. Lattices are basically containers
 * for values of type T. We can generally specify them with a generating matrix
 * (see generic_lattice.hpp), specialized implementations can often leverage
 * faster implementations of certain method implementations.
 *
 * These just hold values, the basis function and function space are responsible
 * for continuous floating point interpolation between lattice sites (see
 * basis/basis_function.hpp and functions_space/function_space.hpp
 * respectively.)
 *
 * @Joshua Horacsek
 */

#include <functional>
#include <vector>

#include <sisl/primitives.hpp>
#include <sisl/function/base_function.hpp>

#ifndef __SISL_BASE_LATTICE__
#define __SISL_BASE_LATTICE__

namespace sisl {

    //! Defines how a lattice should be extended into 
    enum LatticeExtensionType {
        InvalidAccess = -1,     //!< All accesses outside of the lattice generate an exception
        ForceZero = 0,          //!< All reads outside of the lattice return 0, writes generate an exception
        Periodic,               //!< Periodic lattice
        Extend_Even_Even,       //!< Even extension about origin, even extension about midpoint
        Extend_Even_Odd,        //!< Even extension about origin, odd extension about midpoint
        Extend_Odd_Even,        //!< odd extension about origin, even extension about midpoint
        Extend_Odd_Odd,        //!< odd extension about origin, even extension about midpoint
    };

    enum LatticeRegionShift {
        NoShift = 0,
        Shift,
        None_Shift,
        Shift_None,
        Shift_Shift,
    };

    /*!
     * Defines the base class for a lattice, which are by definition
     * subsets of Z^n.
     */
    template <class T>
    class base_lattice {
    public:
          base_lattice() { }
          ~base_lattice() { }

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual T& operator()(int d0, ...) = 0;

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual const T& operator()(int d0, ...) const = 0;

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual T& operator()(int *d) = 0;

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual const T& operator()(int *d) const = 0;

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual T& operator()(const lattice_site &s) = 0;

        /*! \brief Access a lattice site.
         * Operators for accessing lattice sites. These index in the natural
         * coordinate system of the lattice.
         */
        virtual const T& operator()(const lattice_site &s) const = 0;

        /*! \brief Uniquely index a lattice site
         * This function return a linearized version of a lattice site,
         * this allows one to uniquely associate a lattice site with an
         * integer.
         */
        virtual const unsigned int linear_index(int d0, ...) const = 0;

        /*! \brief Uniquely index a lattice site
         * This function return a linearized version of a lattice site,
         * this allows one to uniquely associate a lattice site with an
         * integer.
         */
        virtual const unsigned int linear_index(int *d) const = 0;

        /*! \brief Uniquely index a lattice site
         * This function return a linearized version of a lattice site,
         * this allows one to uniquely associate a lattice site with an
         * integer.
         */
        virtual const unsigned int linear_index(const lattice_site &) const = 0;

        /*! \brief Returns a natural scale so that the lattice sites
         * would be scaled to within a unit hyper cube.
         */
        virtual const vector get_natural_scales() const = 0;

        /*! \brief Returns the integer extent of each dimension,
         * that is, the lattice extends from [0, ret[i] - 1] in each
         * dimension.
         */
        virtual const lattice_site get_dimensions() const = 0;

        /*! \brief Returns a value within the unit hyper cube that
         * represents the given lattice site scaled withing that
         * unit hypercube.
         */
        virtual vector get_site_position(int d0, ...) const = 0;

        /*! \brief Returns a value within the unit hyper cube that
         * represents the given lattice site scaled withing that
         * unit hypercube.
         */
        virtual vector get_site_position(int *d) const = 0;

        /*! \brief Returns a value within the unit hyper cube that
         * represents the given lattice site scaled withing that
         * unit hypercube.
         */
        virtual vector get_site_position(const lattice_site &s) const = 0;

        /*! \brief Returns the nearest lattice site for a given point
         * within the unit hyper cube.
         */
        virtual lattice_site get_nearest_site(const vector &) const = 0;

        /*!
         * \brief Returns whether or not a lattice site
         * truely corresponds to a valid lattice site on
         * this particular lattice.
         */
        virtual bool is_lattice_site(int d0, ...) const  = 0;

        /*!
         * \brief Returns whether or not a lattice site
         * truely corresponds to a valid lattice site on
         * this particular lattice.
         */
        virtual bool is_lattice_site(int *d) const = 0;

        /*!
         * \brief Returns whether or not a lattice_site object
         * truely corresponds to a valid lattice site on
         * this particular lattice.
         */
        virtual bool is_lattice_site(const lattice_site &) const = 0;

        /*!
         * \brief Returns whether a lattice site actually
         * contains a value.
         */
        virtual bool is_filled(int d0, ...) const  = 0;

        /*!
         * \brief Returns whether a lattice site actually
         * contains a value.
         */
        virtual bool is_filled(int *d) const = 0;

        /*!
         * \brief Returns whether a lattice site actually
         * contains a value.
         */
        virtual bool is_filled(const lattice_site &s) const = 0;

        /*!
         * \brief Iterates over every lattice site contained within
         * the dimensions of this lattice.
         */
        virtual void each_site(
            const std::function<void(const lattice_site &)> &, bool parallel = false) = 0;

        /*!
         * \brief Returns the name of this lattice
         */
        virtual std::string get_lattice_name() const = 0;

        /*!
         * \brief Returns the theoretical number of sites
         * within this lattice.
         */
        virtual const int number_of_lattice_sites() const = 0;

        /*!
         * \brief Dumps this lattice to a file stream.
         */
        virtual bool dump_to_stream(std::ofstream &) const = 0;

        /*!
         * \brief Reads a lattice to a file stream, replacing all values.
         */
        virtual bool read_from_stream(std::ifstream &) = 0;

        /*!
        * \brief Sets how a lattice is extended for values that
        * outside of the defined rectangular region.
        */
        virtual void set_extension_type(const LatticeExtensionType &e,
                                        const LatticeRegionShift &s) = 0;


#ifdef SISL_CL

        /*!
         * \breif Determines whether the current object has an OpenCL capable
         * memory store in the backend.
         */
        virtual bool has_cl_backing() const = 0;

        /*! \breif Uploads the contents of this array on to an OpenCL device
         * 
         */
        virtual cl_mem copy_to_cl_device(cl_context &context, cl_command_queue &command_q) const = 0;

        /*! \breif Pushes the data on the opencl deviceback on to the host
        */
        virtual int resync_cl_to_host(cl_command_queue &command_q, cl_mem &dmemory);


        /*! \breif Generates a string of OpenCL code to access these 
        */
        virtual std::string generate_cl_accessor(const char *name) const = 0;
#endif

    protected:
        virtual const unsigned int linear_index(int d0, va_list vl) const = 0;
        virtual T& operator()(int d0, va_list vl) = 0;
        virtual const T& operator()(int d0, va_list vl) const = 0;
        virtual bool is_filled(int d0, va_list vl) const = 0;
        virtual bool is_lattice_site(int d0, va_list vl) const = 0;

    };

    template <class T>
    void sample_on_lattice(
        const vector &origin,
        const vector &extent,
        base_lattice<T> *l,
        function *f)
    {

        //
        l->each_site([&l, &f, origin, extent](const lattice_site &s){
            vector p = l->get_site_position(s);

            p = p.array() * extent.array();
            p = p + origin;

            // Sample
            (*l)(s) = (T)(*f)(p);
        });
    }
};

#endif // __SISL_BASE_LATTICE__
