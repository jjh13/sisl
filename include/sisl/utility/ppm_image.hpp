/**
 * ppm_image.hpp
 * 
 * Simple PPM image writer. Mainly used for quick and
 * dirty output testing.
 *
 * @author Joshua Horacsek
 */

#ifndef _SISL_PPM_IMAGE_H_
#define _SISL_PPM_IMAGE_H_

#include <fstream>
#include <vector>
#include <string>
#include <tuple>
#include <map>
#include <cfloat>
#include <algorithm>

#include <sisl/memory/array.hpp>
#include <sisl/function/base_function.hpp>

namespace sisl {
    namespace utility {
        /** \brief PPM image writer.
         */
        class ppm_image {
        public:
            /** \brief Creates a new image
             * 
             * Creates a new image with dimensions width and height.
             * Each cell contains an rgb_color value.
             */
            ppm_image(const int &width, const int &height) : m_iHeight(height),
                                                             m_iWidth(width),
                                                             m_aArray(width, height) {
                // Clear out the internal memory
                vector z(3);
                z.setZero();

                for(int i = 0; i < width; i++) {
                    for(int j = 0; j < height; j++) {
                        m_aArray(i,j) = z;
                    }
                }
            }
            ~ppm_image() { };

            /*! \brief Accessor for pixel values
             * 
             * Accesses an RGB value at pixel x,y. Stored between 0 and 1,
             * where 0 is the lowest intensity and 1 in the highest 
             * intensity.
             */
            vector &operator()(const int &x, const int &y) {
                return m_aArray(x,y);
            }



            /*! \brief Samples a 2D function
             *
             * \param f function to sample
             * \param component Component to fill, 0 = r, 1 = b, 2 = g, -1 = all
             * \param x,y Starting position
             * \param extent_x,extent_y Dimension of area to sample
             */
            void reconstruct_image( function *f, 
                                    int component    = -1, 
                                    double x         =  0., 
                                    double y         =  0., 
                                    double extent_x  =  1., 
                                    double extent_y  =  1.) {
                double _sx = extent_x/double(m_iWidth), 
                       _sy = extent_y/double(m_iHeight);

                double x_ = 0, y_ = 0;

                for(int i = 0; i < m_iWidth; i++, x_+=_sx) {
                    y_ = 0;
                    for(int j = 0; j < m_iHeight; j++, y_+=_sy) {
                        double v = (*f)(x+x_, y+y_);
                        if(component < 0 || component > 3) m_aArray(i,j) << v,v,v;
                        else m_aArray(i,j)[component] = v;
                    }
                }
            }

            /*! \brief Clams all values for all components between min and max
             * 
             * Clams all values for all components between min and max.
             * \param min Minimum value, values below this are set to minimum.
             * \param max Maximum value, values above this are set to maximum.
             */
            void clamp(const double &min, const double &max) {
                for(int i = 0; i < m_iWidth; i++) {
                    for(int j = 0; j < m_iHeight; j++) {
                        m_aArray(i,j)[0] = std::max(min, std::min(m_aArray(i,j)[0], max));
                        m_aArray(i,j)[1] = std::max(min, std::min(m_aArray(i,j)[1], max));
                        m_aArray(i,j)[2] = std::max(min, std::min(m_aArray(i,j)[2], max));
                    }
                }
            }

            /*! \brief Writes an image to the specified file
             * 
             * Writes an image to a file, if normalize is specified, 
             * values are normalized to be between 0 and 1 along each
             * component independently.
             *
             * \param output Output ppm file. 
             * \param normalize Normalize components to between 0 and 1
             */
            bool write(const std::string &out, bool normalize = true) {
                using namespace std;
                vector min_max;

                if(!normalize) {
                    min_max << 0, 1.;
                }else {
                    min_max = calc_minmax();
                    
                    if(abs(min_max[1] - min_max[0]) < 1e-6) {
                        // min and max are the same, so we'll set
			// max as the highest value between [0,min_max[1]
                        // similarly for min]
                        min_max[0] = min_max[0] <  0 ? min_max[0] : 0;
                        min_max[1] = min_max[1] <  0 ? 0 : min_max[1];
                    } 
     
		}

                // open file and check if it's valid
                ofstream fp(out.c_str(), ios::out | ios::binary);
                if(!fp.good()) return false;

                // write the header
                fp << "P3" << endl;
                fp << m_iWidth << " " << m_iHeight << endl;
                fp << "255" << endl;

		

                // Write image data
                for(int i = 0; i < m_iHeight; i++) {
                    for(int j = 0; j < m_iWidth; j++) {
                        vector pix = m_aArray(j,i);

                        pix[0] = 255. * (pix[0] - min_max[0])/(min_max[1] - min_max[0]);
                        pix[1] = 255. * (pix[1] - min_max[0])/(min_max[1] - min_max[0]);
                        pix[2] = 255. * (pix[2] - min_max[0])/(min_max[1] - min_max[0]);

                        fp << (int)pix[0] << " " << (int)pix[1] << " " << (int)pix[2] << endl;
                    }
                }
                fp.close();
                return true;
            }

        private:
            array_n<vector, 2> m_aArray;
            int m_iHeight;
            int m_iWidth;

            vector calc_minmax(){
                using namespace std;
                vector ret(2);
                double min = std::numeric_limits<double>::infinity();
                double max = -std::numeric_limits<double>::infinity();

                for(int i = 0; i < m_iWidth; i++) {
                    for(int j = 0; j < m_iHeight; j++) {
                        vector data = m_aArray(i,j);
                        if(data[0] < min) min = data[0];
                        if(data[1] < min) min = data[1];
                        if(data[2] < min) min = data[2];
                        if(data[0] > max) max = data[0];
                        if(data[1] > max) max = data[1];
                        if(data[2] > max) max = data[2];
                    }
                }
                ret << min, max;
                return ret;
            }
        };
    }
}
#endif // _SISL_PPM_IMAGE_H_
