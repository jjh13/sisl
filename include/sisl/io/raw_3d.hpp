/**
 * raw_3d.h
 * IO for raw files in 3D.
 *
 * @Joshua Horacsek
 */
#ifndef __SISL__RAW3D__
#define __SISL__RAW3D__

#include <iostream>
#include <fstream>

#include <sisl/primitives.hpp>
#include <sisl/lattice/3d/cartesian_cubic.hpp>

#define SWAP_16(x) (((x & 0xFF00)>>8) | ((x & 0xFF)<<8))
#define SWAP_32(x) (((x>>24) &0xFF) |  \
                    ((x<<8) &0xFF0000) | \
                    ((x>>8) &0xFF00) | \
                    ((x<<24)&0xFF000000 ))
namespace sisl {
namespace io {

/*! Utility function that reads in a raw file, and creates 
 * a cartesian_lattice object that cointains the data from
 * 
 * \param rx x dimension
 * \param ry y dimension
 * \param rz z dimension
 * \param file path to .raw file
 * \param type of each element
 * \param swap_endian if specified, will swap byte order of the data
 */
template<class O>
inline cartesian_cubic<O>
       *read_raw_file(const int &rx, const int &ry, const int &rz,
                      const std::string &file, 
                      const e_datatype &type,
                      const bool &swap_endian = false) {
    using namespace std;

    // Define this to help indexing the raw data
    #define INDEX(i,j,k)  i + rx * ( j + ry*k )

    // Open the file
    ifstream fp(file.c_str(), ios::in | ios::binary | ios::ate);
    streampos size;

    if (!fp.good() || !fp.is_open()) return nullptr;
    size = fp.tellg();
    fp.seekg(0, ios::beg);

    // Allocate and Read
    char *buffer = new char[size];
    fp.read(buffer, size);

    // Allocate the array
    cartesian_cubic<O> *lattice = new cartesian_cubic<O>(rx-1, ry-1, rz-1);

    switch (type) {
        case SDT_UINT8:
        {
            unsigned char *l_buff = (unsigned char *)buffer;
            #pragma omp parallel for
            for(int i = 0; i < rx; i++)
                for(int j = 0; j < ry; j++)
                    for(int k = 0; k < rz; k++)
                        (*lattice)(i,j,k) = (O)l_buff[INDEX(i,j,k)];
            break;
        }
        case SDT_UINT16:
        {
            unsigned short *l_buff = (unsigned short *)buffer;
            #pragma omp parallel for
            for(int i = 0; i < rx; i++)
                for(int j = 0; j < ry; j++)
                    for(int k = 0; k < rz; k++) {
                        uint16_t data = l_buff[INDEX(i,j,k)];

                        (*lattice)(i,j,k) = (O)(swap_endian ? SWAP_16(data) : data); 
                    }
            break;
        }
        case SDT_UINT32:
        {
            unsigned int *l_buff = (unsigned int *)buffer;
            #pragma omp parallel for
            for(int i = 0; i < rx; i++)
                for(int j = 0; j < ry; j++)
                    for(int k = 0; k < rz; k++) {
                        uint32_t data = l_buff[INDEX(i,j,k)];
                        (*lattice)(i,j,k) = (O)(swap_endian ? SWAP_32(data) : data); 
                    }
            break;
        }
        case SDT_FLOAT:
        {
            float *l_buff = (float *)buffer;
            #pragma omp parallel for
            for(int i = 0; i < rx; i++)
                for(int j = 0; j < ry; j++)
                    for(int k = 0; k < rz; k++)
                        (*lattice)(i,j,k) = (O)l_buff[INDEX(i,j,k)];
            break;
        }
        case SDT_DOUBLE:
        {
            double *l_buff = (double *)buffer;
            #pragma omp parallel for
            for(int i = 0; i < rx; i++)
                for(int j = 0; j < ry; j++)
                    for(int k = 0; k < rz; k++)
                        (*lattice)(i,j,k) = (O)l_buff[INDEX(i,j,k)];
            break;
        }
        default:
            throw "Unknown datatype passed to sisl::io::read_raw_file()!";
    }
    delete[] buffer;
    #undef INDEX

    return lattice;
}

/*! Utility function that reads in a raw file, and creates 
 * a cartesian_lattice object that cointains the data from
 * 
 * \param lattice a cubic cartesian lattice of type O
 * \param file path to  output .raw file
 * \param type of each element
 * \param swap_endian if specified, will swap byte order of the data
 */
template<class O>
inline void dump_raw_file(
    cartesian_cubic<O> *lattice,
    const std::string &raw_file,
    const std::string &param_file,
    const e_datatype &type, 
    const bool swap_endian) {

    using namespace std;

    // Define this to help indexing the raw data
    #define INDEX(i,j,k)  i + rx * ( j + ry*k )

    int size = 0, rx, ry, rz;
    char *buffer;

    switch (type) {
        case SDT_UINT8: size = 1; break;
        case SDT_UINT16: size = 2; break;
        case SDT_UINT32:
        case SDT_FLOAT: size = 4; break;
        case SDT_DOUBLE: size = 8; break;
        default: break;
    }

    lattice->get_dimensions(rx,ry,rz);
    size *= (rx * ry * rz);
    buffer = new char[size];

    switch (type) {
        case SDT_UINT8:
        {
            unsigned char *l_buff = (unsigned char *)buffer;
            #pragma omp parallel for
            for(int i = 0; i < rx; i++)
                for(int j = 0; j < ry; j++)
                    for(int k = 0; k < rz; k++)
                        l_buff[INDEX(i,j,k)] = (unsigned char)(*lattice)(i,j,k);
            break;
        }
        case SDT_UINT16:
        {
            unsigned short *l_buff = (unsigned short *)buffer;
            #pragma omp parallel for
            for(int i = 0; i < rx; i++)
                for(int j = 0; j < ry; j++)
                    for(int k = 0; k < rz; k++)
                        l_buff[INDEX(i,j,k)] = swap_endian ? 
                                SWAP_16((unsigned short)(*lattice)(i,j,k)) :
                                        (unsigned short)(*lattice)(i,j,k)  ;
            break;
        }
        case SDT_UINT32:
        {
            unsigned int *l_buff = (unsigned int *)buffer;
            #pragma omp parallel for
            for(int i = 0; i < rx; i++)
                for(int j = 0; j < ry; j++)
                    for(int k = 0; k < rz; k++)
                        l_buff[INDEX(i,j,k)] = swap_endian ? 
                                SWAP_32((unsigned int)(*lattice)(i,j,k)) :
                                        (unsigned int)(*lattice)(i,j,k)  ;
            break;
        }
        case SDT_FLOAT:
        {
            float *l_buff = (float *)buffer;
            #pragma omp parallel for
            for(int i = 0; i < rx; i++)
                for(int j = 0; j < ry; j++)
                    for(int k = 0; k < rz; k++)
                        l_buff[INDEX(i,j,k)] = (float)(*lattice)(i,j,k);
            break;
        }
        case SDT_DOUBLE:
        {
            double *l_buff = (double *)buffer;
            #pragma omp parallel for
            for(int i = 0; i < rx; i++)
                for(int j = 0; j < ry; j++)
                    for(int k = 0; k < rz; k++)
                        l_buff[INDEX(i,j,k)] = (double)(*lattice)(i,j,k);
            break;
        }
        default:
            throw "Unknown datatype passed to sisl::io::dump_raw_file()!";
            break;
    }

    ofstream raw_stream (raw_file, ios::out | ios::binary);
    raw_stream.write(buffer, size);
    raw_stream.close();
    delete[] buffer;
}
}
}

#undef SWAP_32
#undef SWAP_16
#undef CC_LATTICE

#endif
