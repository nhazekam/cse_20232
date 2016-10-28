/*
 * Written by Prof. Hazekamp
 * Euler Header
 */

#ifndef EULER_H
#define EULER_H

#include <fstream>

using namespace std;
extern const double GM;

void integrate(double &x, double &y, double &u, double &v, const double dt);
double energy(double x, double y, double u, double v);
void printXYUV(ofstream &data, double x, double y, double step, double e);

#endif /* EULER_H */
