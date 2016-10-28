/*
 * Written by Prof. Hazekamp
 * Euler Header
 */

#ifndef EULER_H
#define EULER_H

#include <fstream>

using namespace std;
extern const double GM;

namespace euler {
	void integrate(double &x, double &y, double &u, double &v, const double dt);
}

#endif /* EULER_H */
