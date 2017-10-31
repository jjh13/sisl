/**
 * array.hpp
 *
 * This class defines a general abstraction to multi-dimensional
 * arrays. Basically, we want a templated base class to define how
 * access should be implemented -- this builds a base for the rules
 * that potentially more sparse representations use.
 *
 * @author Joshua Horacsek
 **/

#ifndef _SISL_ARRAY_H_
#define _SISL_ARRAY_H_

#include <string>
#include <memory>
#include <iostream>
#include <fstream>
#include <cstdarg>
#include <cstring>
#include <algorithm>

#ifdef SISL_CL 
#include <sisl/opencl/opencl.hpp>
#include <typeinfo>       
#endif

namespace sisl {

    /*! \brief An n-dimensional array.
     * This class abstracts away the concept of an n-dimensional array,
     * it should be easy to create an array of type T on N dimensions.
     * This is useful as it often ends up being the case that many 
     * integer sampling lattices can be broken down into interleaved 
     * Cartesian grids. At the end of the day, this implementation 
     * flattens the representation down onto dense linear memory. 
     * 
     * However, if your data are sparse, you may benefit from the sparse 
     * array class in sparse_array.hpp
     */
    template <class T, int N, class Allocator = std::allocator<T> >
    class array_n : private Allocator{
    public:
        typedef T value_type;
        typedef typename Allocator::reference reference;
        typedef typename Allocator::const_reference const_reference;

        typedef typename Allocator::size_type size_type;
        typedef typename Allocator::difference_type difference_type;

        typedef typename Allocator::pointer iterator;
        typedef typename Allocator::const_pointer const_iterator;

        typedef Allocator allocator_type;
        allocator_type get_allocator() const {
            return static_cast<const Allocator&>(*this);
        }

        /*! \brief Default constructor.
         * Default constructor, allocates nothing.
         */
        array_n(const Allocator& a = Allocator()) : Allocator(a) {
            this->_array = nullptr;
            for(int i = 0; i < N; i++) {
                _dims[i] = 0;
            }
        }

        /*! \brief  N-dim constructor.
         * Allocates an array with N dimensions with maximum dimensions
         * given by the parameters.
         */
        array_n(const Allocator& a, unsigned int d0, ...) : Allocator(a) {
            unsigned int n = d0;
            size_type i;

            // Start with d0
            va_list vl;
            va_start(vl, d0);

            _dims[0] = d0;

            for(int i = 1; i < N; i++) {
                _dims[i] = va_arg(vl, unsigned int);
                n *= _dims[i];
            }
            va_end(vl);
            _alloc(n);
        }

        /*! \brief N-dim constructor.
         * Allocates an array with N dimensions with maximum dimensions
         * given by the parameters.
         */
        array_n(unsigned int d0, ...) {
            unsigned int n = d0;
            size_type i;

            // Start with d0
            va_list vl;
            va_start(vl, d0);

            _dims[0] = d0;

            for(int i = 1; i < N; i++) {
                _dims[i] = va_arg(vl, unsigned int);
                n *= _dims[i];
            }
            va_end(vl);
            _alloc(n);
#ifdef SISL_CL
            _onDevice = false;
            _deviceMemory = nullptr;
#endif
        }

        /*! \brief Copy constructor
         */
        array_n(const array_n &obj) {
            unsigned int n = 1;

            // Copy dims
            for(int i = 0; i < N; i++) {
                _dims[i] = obj._dims[i];
                n *= _dims[i];
            }

            // Allocate for ourselves
            _alloc(n);

            // Copy everything to our array
            memcpy(_array, obj._array, n*sizeof(T));
#ifdef SISL_CL
            _onDevice = false;
            _deviceMemory = nullptr;
#endif
        }

        /*! \brief Destructor
         * Frees all memory used by this array.
         */
        ~array_n() {
            unsigned int size = 1;
            for(int i = 0; i < N; i++) {
                size *= _dims[i];
            }

            // Check if the array has been allocated in the first place
            if (this->_array != nullptr && first != last && size != 0) {
                for (iterator i = first; i < last; ++i) {
                    Allocator::destroy(i);
                }
                Allocator::deallocate(first, last - first);
            }
            this->_array = nullptr;
        }

        array_n &operator=(const array_n &obj){
            array_n copy(obj);

            for(int i = 0; i < N; i++) {
                std::swap(_dims[i], copy._dims[i]);
            }
            std::swap(first, copy.first);
            std::swap(last, copy.last);
            std::swap(_array, copy._array);

            return *this;
        }
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

            return _array[index];
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

            return _array[index];
        }


        /*! /brief Accessor functions.
         *  Access a value in the array, returns a reference
         *  so it is possible to write to indices via this
         *  overload.
         */
        inline T& operator()(unsigned int *d) {
            unsigned int index = linear_index(d);
            return _array[index];
        }


        /*! /brief Accessor functions.
         *  Access a value in the array, returns a reference
         *  so it is possible to write to indices via this
         *  overload.
         */
        inline const T& operator()(unsigned int *d) const {
            unsigned int index = linear_index(d);
            return _array[index];

        }


        /*! \brief Returns whether an index has a value
         * For a multidimensional index, this returns whether or
         * not that index has a value. The value at that index
         * will always be readable, use this to know whether or not
         * it's a true value, or an automatically generated value
         */
        inline const bool has_value(unsigned int d0, ...) const {
            return true;
        }

        /*! \brief Returns whether an index has a value
         * For a multidimensional index, this returns whether or
         * not that index has a value. The value at that index
         * will always be readable, use this to know whether or not
         * it's a true value, or an automatically generated value
         */
        inline const bool has_value(unsigned int *d) const {
            return true;
        }

#ifdef SISL_CL

        bool has_cl_backing() const{
        	return true;
        }

        /*! \brief Uploads the contents of this array on to an OpenCL device
         * 
         */
        cl_mem copy_to_cl_device(cl_context &context, cl_command_queue &command_q) const {
            unsigned int size = 1;
            for(int i = 0; i < N; i++) {
                size *= _dims[i];
            }

            cl_mem mem_h = clCreateBuffer(context,  CL_MEM_READ_ONLY,  sizeof(T) * size, NULL, NULL);
            if(!mem_h) return nullptr;

            int err = clEnqueueWriteBuffer(
                        command_q, 
                        mem_h, 
                        CL_TRUE, // Block on 
                        0, 
                        sizeof(T) * size, 
                        _array, 
                        0, 
                        NULL, NULL);

            if(err != CL_SUCCESS) return nullptr;
            return mem_h;  
        }

        /*! \brief Pushes the data on the opencl deviceback on to the host
        */
        int resync_cl_to_host(cl_command_queue &command_q, cl_mem &dmemory) {
            unsigned int size = 1;
            for(int i = 0; i < N; i++) {
                size *= _dims[i];
            }
            return clEnqueueReadBuffer(command_q, dmemory, CL_TRUE, 0, sizeof(T) * size, _array, 0, NULL, NULL);  
        }

        /*! \brief 
        */
        std::string generate_cl_accessor(const char *name) {

        	const char *type_str = getTypeName<T>().c_str();

		    const char *cl_template = "\n" \
		        "inline %s %s_read(__global %s* input, %s) {     \n" \
		        "    %s                                          \n" \
		        "    return input[index];                        \n" \
		        "}                                               \n" \
		        "inline void %s_write(__global %s* output, const %s val, %s) { \n" \
		        "    %s                                          \n" \
		        "     output[index] = val;                       \n" \
		        "}                                               \n" \
		        "\n";
		        
		    std::string index_list("const int i_0");
		    for(unsigned int i = 1; i < N; i++) {
		    	std::stringstream fmt;
		    	fmt << ", const int i_" << i;
		    	index_list += fmt.str();
		    }

		    //
		    std::string linear_index;
		    {
		    	std::stringstream index;
		    	index << "unsigned int index = i_0; \n";
            	for(unsigned int i = 1; i < N; i++) {
            		index << "    index = i_" << i << " + index*" << _dims[i] << ";\n";
            	}
            	linear_index = index.str();
		    }

		    // Construct the final accessor code
		    std::string code_out;
		    {
		    	unsigned int length = strlen(cl_template) + 
		    						  index_list.size()*2 + 
		    						  strlen(type_str) * 4 + 
		    						  strlen(name) * 2 + 
		    						  linear_index.size() * 2;
		    	char *output = (char *)malloc(length + 1);

		    	sprintf(output, cl_template, 
				    		type_str,
				    		name,
				    		type_str,
				    		index_list.c_str(),
				    		linear_index.c_str(),
				    		name, 
				    		type_str,
				    		type_str,
				    		index_list.c_str(),
				    		linear_index.c_str());
		    	code_out = std::string(output);
		    	free(output);
		    }
		    return code_out;
        }
#endif
        /*! \brief Dumps this array to a file stream at its current index.
         */
        bool dump_to_stream(std::ofstream &stream) const {
            if(!stream.good()) return false;

            unsigned int sig = 0x53534c41; // TODO: Move this sig out into a DEFINE

            unsigned int size = 1;
            for(int i = 0; i < N; i++) {
                size *= _dims[i];
            }

            stream.write((const char *)&sig, sizeof(unsigned int));
            stream.write((const char *)&_dims[0], N*sizeof(unsigned int));
            stream.write((const char *)_array, size*sizeof(T));

            return true;
        }

        /*! \brief Reads data from a filestream.
         */
        bool read_from_stream(std::ifstream &stream) {
            if(!stream.good()) return false;

            unsigned int sig = 0;
            unsigned int _in_dims[N];
            unsigned int size = 1;

            stream.read((char *)&sig, sizeof(unsigned int));

            if(sig != 0x53534c41) return false;
            stream.read(( char *)&_in_dims[0], N*sizeof(unsigned int));

            for(int i = 0; i < N; i++) {
                if(_in_dims[i] != _dims[i]) return false;
                size *= _dims[i];
            }

            stream.read((char *)_array, size*sizeof(T));
            return true;
        }
    private:
        /**
         * Aux method that uses the underlying allocator
         * to allocate memory.
         */
        void _alloc(unsigned int n) {
            size_type i;
            if(n == 0) {
                this->_array = nullptr;
                return;
            }

            this->first = Allocator::allocate(n);
            try {
                for (i = 0; i < n; ++i) {
                    Allocator::construct(first + i, T());
                }
            }catch(...) {
                for(size_type j = 0; j < i; ++j) {
                     Allocator::destroy(first + j);
                }
                Allocator::deallocate(first, n);
                throw;
            }
            last = first + i;
            this->_array = static_cast<T *>(first);
        }

        T *_array;
        unsigned int _dims[N];
        typename Allocator::pointer first;
        typename Allocator::pointer last;
    };
}

#endif //_SISL_ARRAY_H
