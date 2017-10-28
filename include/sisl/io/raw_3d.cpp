/**
 * base_lattice.h
 * Defines the abstract class for a lattice
 *
 * @Joshua Horacsek
 */
#ifndef __SISL__RAW3D__
#define __SISL__RAW3D__

#include <iostream>
#include <fstream>

#include <sisl/primitives.hpp>
#include <sisl/lattice/3d/cartesian_cubic.hpp>
#include <sisl/function_space/regular_function_space.hpp>

#define CC_LATTICE(O) cartesian_cubic<O>


namespace sisl {
namespace io {


template<class O, class BF>
inline void dump_raw_file(
    regular_function_space<CC_LATTICE(O), BF, 3> *f,
    const std::string &raw_file,
    const std::string &param_file,
    const e_datatype &type) {

    using namespace std;

    // Define this to help indexing the raw data
    #define INDEX(i,j,k)  i + rx * ( j + ry*k )

    auto *lattice = f->get_lattice();
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
                        l_buff[INDEX(i,j,k)] = (unsigned short)(*lattice)(i,j,k);
            break;
        }
        case SDT_UINT32:
        {
            unsigned int *l_buff = (unsigned int *)buffer;
            #pragma omp parallel for
            for(int i = 0; i < rx; i++)
                for(int j = 0; j < ry; j++)
                    for(int k = 0; k < rz; k++)
                        l_buff[INDEX(i,j,k)] = (unsigned int)(*lattice)(i,j,k);
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


template<class O, class BF>
inline regular_function_space<CC_LATTICE(O), BF, 3>
       *read_raw_file(int rx, int ry, int rz,
                      double scale_x, double scale_y, double scale_z,
                      const std::string &file, const e_datatype &type) {
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
    cartesian_cubic<O> *lattice = new cartesian_cubic<O>(rx, ry, rz);

    switch (type) {
        case SDT_UINT8:
        {
            printf("Reading uint8...\n");
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
            printf("Reading uint16...\n");
            unsigned short *l_buff = (unsigned short *)buffer;
            #pragma omp parallel for
            for(int i = 0; i < rx; i++)
                for(int j = 0; j < ry; j++)
                    for(int k = 0; k < rz; k++) {
                        uint16_t data = l_buff[INDEX(i,j,k)];

                        (*lattice)(i,j,k) = data; // (O)((data >> 8)| ((data & 0xFF) << 8)); 
                    }
            break;
        }
        case SDT_UINT32:
        {
            unsigned int *l_buff = (unsigned int *)buffer;
            #pragma omp parallel for
            for(int i = 0; i < rx; i++)
                for(int j = 0; j < ry; j++)
                    for(int k = 0; k < rz; k++)
                        (*lattice)(i,j,k) = (O)l_buff[INDEX(i,j,k)];
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
            break;
    }
    delete[] buffer;
    #undef INDEX

    // Create the function space
    regular_function_space<CC_LATTICE(O), BF, 3> *f;
    f = new regular_function_space<CC_LATTICE(O), BF, 3>(lattice);

    // Setup the function space to be scaled
    //vector scales = f->get_lattice()->get_natural_scales();
    //scales[0] *= rx/scale_x, scales[1] *= ry / scale_y, scales[2] *= rz/scale_z;

    //std::cout << "Natural scales: " << scales << std::endl;
    //f->set_scale(scales);
    return f;
}


}
}

#undef CC_LATTICE

#endif
