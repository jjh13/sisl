/**
 * ply_mesh.hpp
 * A very quick n' dirty implementation of a mesh writer.
 * Mainly used to quickly output meshes from a marching algo.
 * 
 * @author Joshua Horacsek
 * 
 * TODO: Add a more sophisticated spatial data structure for 
 * duplicate vertex detection.
 */


#ifndef _SISL_PLY_WRITER_H_
#define _SISL_PLY_WRITER_H_

#include <fstream>
#include <vector>
#include <string>
#include <tuple>
#include <map>

#include <sisl/primitives.hpp>

namespace sisl{
namespace utility{

    /** \breif A barebones ply mesh writer.
     */
    class ply_mesh {
    public:
        /** \breif Create an empty mesh
         */
        ply_mesh() : m_currentIndex(0), m_mergeTolerance(1e-12) {}
        ~ply_mesh(){}

        /** Adds a vertex to the mesh, checking
         * for duplicate vertices. Returns an index 
         * into the list of vertices.
         * \param p A vertex
         */ 
        int add_vertex(const vertex3 &p) {
            using namespace std;
            int r = 0;

            /* First, search the vertex list to 
               see if we have a similar enough
               vertex already */
            for(unsigned int i = 0; i < verts.size(); i++) {
                vector diff = verts[i].p - p.p;
                if(diff.norm() < m_mergeTolerance) {
                    return i;
                }
            }

            // If we couldn't find a vert like ours,
            // Add it to the list
            #pragma omp critical (add_vertex_)
            {
                verts.push_back(p);
                r = (m_currentIndex++);
            }

            return r;
        }

        /** Adds a triangle to the mesh, checking
         * for duplicate vertices. Returns an index 
         * into the list of faces.
         * \param v1,v2,v3 A vertices that form a polygon
         */ 
        int add_triangle(vertex3 v1, vertex3 v2, vertex3 v3) {
            std::tuple<int,int,int> f;

            #pragma omp critical (add_face)
            {
                std::get<0>(f) = add_vertex(v1);
                std::get<1>(f) = add_vertex(v2);
                std::get<2>(f) = add_vertex(v3);

                faces.push_back(f);
            }
            return int(faces.size())-1;
        }

        /** Adds a triangle to the mesh, checking
         * for duplicate vertices. Returns an index 
         * into the list of faces.
         * \param v1,v2,v3 Vertex indices (from add_verte)
         */ 
        int add_triangle(int i, int j, int k) {
            int r = 0;
            #pragma omp critical (add_face)
            {
                faces.push_back(std::tuple<int,int,int>(i,j,k));
                r = int(faces.size())-1;
            }
            return r;
        }

        /** Transforms all vertices in the mesh according to a
         * transformation matrix.
         * \param t A transformation matrix.
         */ 
        void transform_mesh(const transform &t) {
            for(unsigned int i = 0; i < verts.size(); i++)
                verts[i].p = (t * verts[i].p);
        }

        /** Returns the number of unique vertices in the mesh
         */ 
        int count_vertices() {
            return m_currentIndex;
        }

        /** Returns the number of unique faces in the mesh
         */ 
        int count_faces() {
            return int(faces.size());
        }

        /** Writes this mesh to a PLY file, returns false
         * if the file 'out' could not be opened for writing.
         * \param out A the name of the file to output to
         */ 
        bool write(const std::string &out) const {
            using namespace std;

            ofstream fp(out.c_str(), ios::out | ios::binary);
            if(!fp.good()) return false;

            // We're going to output in binary, but all PLY
            // files have an ascii header
            fp << "ply" << endl;
            fp << "format binary_little_endian 1.0" << endl;
            fp << "element vertex " << verts.size() << endl;
            fp << "property float x" << endl;
            fp << "property float y" << endl;
            fp << "property float z" << endl;
            fp << "property float nx" << endl;
            fp << "property float ny" << endl;
            fp << "property float nz" << endl;
            fp << "element face " << faces.size() << endl;
            fp << "property list uchar int vertex_indices" << endl;
            fp << "end_header" << endl;

            for(unsigned int i = 0; i < verts.size(); i++) {
                struct _p {
                    float x, y, z, i, j , k;
                }__attribute__ ((packed)) p;

                p.x = verts[i].p[0];
                p.y = verts[i].p[1];
                p.z = verts[i].p[2];
                p.i = verts[i].n[0];
                p.j = verts[i].n[1];
                p.k = verts[i].n[2];
                fp.write((char*)&p, sizeof(_p));
            }

            for(unsigned int i = 0; i < faces.size(); i++) {
                struct _f {
                    char t;
                    int i,j,k;
                } __attribute__ ((packed)) f;

                f.t = 3;
                f.i = std::get<0>(faces[i]);
                f.j = std::get<1>(faces[i]);
                f.k = std::get<2>(faces[i]);
                fp.write((char*)&f, sizeof(_f));
            }
            fp.close();
            return true;
        }
    private:
        int m_currentIndex;
        double m_mergeTolerance; 

        // This maps verticies to their indices
        std::vector<vertex3> verts;
        std::vector<std::tuple<int,int,int>> faces;
    };
    };
};

#endif // _SISL_PLY_WRITER_H_
