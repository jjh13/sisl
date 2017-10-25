/**
 * sparse_array.hpp
 *
 * This class defines another abstraction to multi-dimensional
 * arrays. This is much like array.hpp, but uses a dictionary
 * to sparesely store values.
 *
 * @author Joshua Horacsek
 **/

#ifndef _SISL_SPARSE_ARRAY_H_
#define _SISL_SPARSE_ARRAY_H_

#include <string>
#include <memory>
#include <unordered_map>
#include <tuple>

#include <sisl/memory/array.hpp>

namespace sisl {

    /*! \brief An n-dimensional sparese array.
     * This class abstracts away the concept of an n-dimensional array,
     * it should be easy to create an array of type T on N dimensions.
     * It differes from an array in that, when instantiated, it consumes 
     * no memory. When you begin to fill cells of the array with data, 
     * only then does memory begin to fill up. Accessing a cell without
     * data returns "defaultValue", which is set in the constructor.
     */
    template <class T, int N, class Allocator = std::allocator<T> >
    class sparse_array_n : private array_n<T, N, Allocator> {
    public:
        /*! Default constructor.
         * Default constructor, allocates nothing.
         */
        sparse_array_n(const Allocator& a = Allocator()) : Allocator(a), defaultValue(0) {
            for(int i = 0; i < N; i++) {
                _dims[i] = 0;
            }
            siteMap = std::unordered_map<int, T>();
        }

        /*! N-dim constructor.
         * Allocates an array with N dimensions with maximum dimensions
         * given by the parameters.
         */
        sparse_array_n(const Allocator& a, const T &dv, unsigned int d0, ...) : Allocator(a), defaultValue(dv) {
            unsigned int n = d0;

            // Start with d0
            va_list vl;
            va_start(vl, d0);

            _dims[0] = d0;

            for(int i = 1; i < N; i++) {
                _dims[i] = va_arg(vl, unsigned int);
                n *= _dims[i];
            }
            va_end(vl);
            siteMap = std::unordered_map<int, T>();
        }

        /*! N-dim constructor.
         * Allocates an array with N dimensions with maximum dimensions
         * given by the parameters.
         */
        sparse_array_n(const T &dv, unsigned int d0, ...) : defaultValue(dv) {
            unsigned int n = d0;

            // Start with d0
            va_list vl;
            va_start(vl, d0);

            _dims[0] = d0;

            for(int i = 1; i < N; i++) {
                _dims[i] = va_arg(vl, unsigned int);
                n *= _dims[i];
            }
            va_end(vl);
            siteMap = std::unordered_map<int, T>();
        }

        sparse_array_n(const T &dv, unsigned int *d) : defaultValue(dv) {
            unsigned int n = 1;

            for(int i = 0; i < N; i++) {
                _dims[i] = d[i];
                n *= _dims[i];
            }
            siteMap = std::unordered_map<int, T>();
        }


        /*! N-dim constructor.
         * Allocates an array with N dimensions with maximum dimensions
         * given by the parameters.
         */
        ~sparse_array_n() { }

        /*! /brief Returns a unique index for this index.
         *  This returns a unique index for a point index,
         *  this should generally be an index between 0 and
         *  max_dim_1*max_dim_2*...*max_dim_N - 1.
         */
        inline unsigned int linear_index(unsigned int d0, ...) const {
            unsigned int ret = 0;
            va_list vl;
            va_start(vl, d0);
            ret = linear_index(d0, vl);
            va_end(vl);
            return ret;
        }

        /*! /brief Returns a unique index for this index.
         *  This returns a unique index for a point index,
         *  this should generally be an index between 0 and
         *  max_dim_1*max_dim_2*...*max_dim_N - 1.
         */
        inline unsigned int linear_index(unsigned int d0, va_list vl) const {
            unsigned int ret = d0;
            if(ret >= _dims[0]) throw "Index out of bounds!";

            for(unsigned int i = 1; i < N; i++){
                unsigned int dx = va_arg(vl, unsigned int);
                if(dx >= _dims[i]) throw "Index out of bounds!";
                ret = (dx + _dims[i]*ret);
            }
            return ret;
        }

        /*! /brief Returns a unique index for this index.
         *  This returns a unique index for a point index,
         *  this should generally be an index between 0 and
         *  max_dim_1*max_dim_2*...*max_dim_N - 1.
         */
        inline unsigned int linear_index(unsigned int *idx) const {
            unsigned int ret = idx[0];
            if(ret >= _dims[0]) throw "Index out of bounds!";
            for(unsigned int i = 1; i < N; i++) {
                if(idx[i] >= _dims[i]) throw "Index out of bounds!";
                ret = (idx[i] + _dims[i]*ret);
            }
            return ret;
        }

        /*! /brief Accessor functions.
         *  Access a value in the array, returns a reference
         *  so it is possible to write to indices via this
         *  overload.
         */
        inline T& operator()(unsigned int d0, ...) {
            unsigned int index = 0;
            va_list vl;
            va_start(vl, d0);
            index = linear_index(d0, vl);
            va_end(vl);

            auto iter = siteMap.find(index);
            if(iter == siteMap.end())
                siteMap[index] = defaultValue;

            return siteMap[index];
        }

        /*! /brief Accessor functions.
         *  Access a value in the array, returns a reference
         *  so it is possible to write to indices via this
         *  overload.
         */
        inline const T& operator()(unsigned int d0, ...) const {
            unsigned int index = 0;
            va_list vl;
            va_start(vl, d0);
            index = linear_index(d0, vl);
            va_end(vl);

            auto iter = siteMap.find(index);
            if(iter == siteMap.end()) {
                return defaultValue;
            }
            return iter->second;
        }

        /*! /brief Accessor functions.
         *  Access a value in the array, returns a reference
         *  so it is possible to write to indices via this
         *  overload.
         */
        inline T& operator()(unsigned int *d) {
            unsigned int index = linear_index(d);

            auto iter = siteMap.find(index);
            if(iter == siteMap.end()) {
                siteMap[index] = defaultValue;
            }
            return siteMap[index];
        }

        /*! /brief Accessor functions.
         *  Access a value in the array, returns a reference
         *  so it is possible to write to indices via this
         *  overload.
         */
        inline const T& operator()(unsigned int *d) const {
            unsigned int index = linear_index(d);

            auto iter = siteMap.find(index);
            if(iter == siteMap.end()) {
                return defaultValue;
            }
            return iter->second;
        }

        /*! \brief Returns whether an index has a value
         * For a multidimensional index, this returns whether or
         * not that index has a value. The value at that index
         * will always be readable, use this to know whether or not
         * it's a true value, or an automatically generated value
         */
        inline const bool has_value(unsigned int d0, ...) const {
            unsigned int index = 0;
            auto iter = siteMap.find(index);
            va_list vl;
            va_start(vl, d0);
            index = linear_index(d0, vl);
            va_end(vl);

            return !(iter == siteMap.end());
        }

        /*! \brief Returns whether an index has a value
         * For a multidimensional index, this returns whether or
         * not that index has a value. The value at that index
         * will always be readable, use this to know whether or not
         * it's a true value, or an automatically generated value
         */
        inline const bool has_value(unsigned int *d) const {
            unsigned int index = linear_index(d);
            auto iter = siteMap.find(index);

            return !(iter == siteMap.end());
        }

        /*! \brief Dumps this array to a file stream at its current index.
         */
        bool dump_to_stream(std::ofstream &stream) const {
            if(!stream.good()) return false;

            unsigned int sig = 0x53534c53;

            unsigned int size = 1;
            for(int i = 0; i < N; i++) {
                size *= _dims[i];
            }

            stream.write((const char *)&sig, sizeof(unsigned int));
            stream.write((const char *)&_dims[0], N*sizeof(unsigned int));

            size = siteMap.size();
            stream.write((const char *)&size, sizeof(unsigned int));

            for(auto it = siteMap.begin(); it != siteMap.end(); ++it) {
                int key = it->first;
                T val = it->second;

                stream.write((const char *)&key, sizeof(unsigned int));
                stream.write((const char *)&val, sizeof(T));
            }

            return true;
        }

        /*! \brief Reads data from a filestream.
         */
        bool read_from_stream(std::ifstream &stream) {
            if(!stream.good()) return false;

            unsigned int sig = 0;
            unsigned int _in_dims[N];
            unsigned int size = 0;

            // Check signature
            stream.read((char *)&sig, sizeof(unsigned int));
            if(sig != 0x53534c53) return false;

            // Check input dimensions
            stream.read(( char *)&_in_dims[0], N*sizeof(unsigned int));
            for(int i = 0; i < N; i++) {
                if(_in_dims[i] != _dims[i]) return false;
            }

            // Clear out the current map, and read into map
            stream.read((char *)&size, sizeof(unsigned int));
            siteMap.clear();
            for(int i = 0; i < size; ++i) {
                int key = 0;
                T val = defaultValue;

                stream.read((char *)&key, sizeof(unsigned int));
                stream.read((char *)&val, sizeof(T));

                if(val != defaultValue) {
                    siteMap[key] = val;
                }
            }
            return true;
        }


#ifdef SISL_CL 

        bool has_cl_backing() const {
            return false;
        }

        /*! \breif Uploads the contents of this array on to an OpenCL device
         * 
         */
        cl_mem copy_to_cl_device(cl_context &context, cl_command_queue &command_q) const {

        }

        /*! \breif Pushes the data on the opencl deviceback on to the host
        */
        int resync_cl_to_host(cl_command_queue &command_q, cl_mem &dmemory) {

        }

        /*! \breif 
        */
        std::string generate_cl_accessor(const char *name) {

            return code_out;
        }
#endif

    private:
        unsigned int _dims[N];
        std::unordered_map<int, T> siteMap;
        T defaultValue;
    };
};

#endif //_SISL2_SPARSE_ARRAY_H_
