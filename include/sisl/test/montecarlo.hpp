#ifndef _SISL_MONTECARLO_H_
#define _SISL_MONTECARLO_H_

#include <sisl/sisl.hpp>
#include <sisl/utility/ply_mesh.hpp>
#include <sisl/function/base_function.hpp>

#include <tuple>
#include <unordered_map>
#include <map>

namespace sisl {
	namespace test{

		template<int dim>
		double montecarlo_l2(
			sisl::function *f, 
			sisl::function *g,
			const unsigned int &samples,
			sisl::vector f_origin,
			sisl::vector g_origin,
			sisl::vector extent) {

			double ret = 0;

			#pragma omp parallel for
			for(unsigned int i = 0; i < samples; i++) {
				vector rands(dim);
				vector x(dim);

				for(unsigned int j = 0; j < dim; j++) {
					rands[j] = double(rand()) / double(RAND_MAX);
				}
				x = extent.array() * rands.array();

				double val = f->eval(x + f_origin) - g->eval(x + g_origin);

				#pragma omp critical
				{
					ret += val*val/double(samples);
				}
			}
			return sqrt(ret);
		}
	}
}

#endif //_SISL_MONTECARLO_H_