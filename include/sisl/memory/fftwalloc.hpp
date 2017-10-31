/**
 * fftwalloc.hpp
 *
 * An allocator that wraps FFTW Malloc,
 * for properly aligned memory allocations.
 *
 * Taken mostly from "The Mallocator"
 * http://blogs.msdn.com/b/vcblog/archive/2008/08/28/the-mallocator.aspx
 * With a few very minor changes.
 *
 * @author Joshua Horacsek
 */

#ifndef __SISL_FFTW_ALLOC__
#define __SISL_FFTW_ALLOC__

#include <memory>
#include <new>
#include <stdexcept>

#include <stdio.h>
#include <string.h>
#include <fftw3.h>

#ifndef SISL_FFTW
    #error "You cannot use the FFTW allocator without FFTW installed!"
#endif

/*!
 * Allocator that uses FFTW to allocate properly aligned 
 * regions of memory for Fourier transforms.
 */
template <typename T>
class _fftwalloc {

public:
    typedef T * pointer;
    typedef const T * const_pointer;
    typedef T& reference;
    typedef const T& const_reference;
    typedef T value_type;
    typedef size_t size_type;
    typedef ptrdiff_t difference_type;

    _fftwalloc() { }
    _fftwalloc(const _fftwalloc&) { }
    template <typename U> _fftwalloc(const _fftwalloc<U>&) { }
    ~_fftwalloc() { }

    //
    T * address(T& r) const {
        return &r;
    }
    const T * address(const T& s) const {
        return &s;
    }
    size_t max_size() const {
        return (static_cast<size_t>(0) - static_cast<size_t>(1)) / sizeof(T);
    }

    template <typename U> struct rebind {
        typedef _fftwalloc<U> other;
    };

    bool operator!=(const _fftwalloc& other) const {
        return !(*this == other);
    }

    void construct(T * const p, const T& t) const {
        void * const pv = static_cast<void *>(p);

        new (pv) T(t);
    }

    void destroy(T * const p) const; // Defined below.

    bool operator==(const _fftwalloc& other) const {
        return true;
    }

    T * allocate(const size_t n) const {

        if (n == 0) {
            return nullptr;
        }

        if (n > max_size()) {
            throw std::length_error("_fftwalloc<T>::allocate() - Integer overflow.");
        }

        void * const pv = fftw_malloc(n * sizeof(T));
        if (pv == NULL) {
            throw std::bad_alloc();
        }

        return static_cast<T *>(pv);
    }

    void deallocate(T * const p, const size_t n) const {
        if(p != NULL)
            fftw_free(p);
    }

     template <typename U> T * allocate(const size_t n, const U * /* const hint */) const {
        return allocate(n);
    }

private:
    _fftwalloc& operator=(const _fftwalloc&);
};

// A compiler bug causes it to believe that p->~T() doesn't reference p.

#ifdef _MSC_VER
    #pragma warning(push)
    #pragma warning(disable: 4100) // unreferenced formal parameter
#endif

// The definition of destroy() must be the same for all allocators.
template <typename T> void _fftwalloc<T>::destroy(T * const p) const {
    p->~T();
}

#ifdef _MSC_VER
    #pragma warning(pop)
#endif

#endif // __SISL_FFTW_ALLOC__
