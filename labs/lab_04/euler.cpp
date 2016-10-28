/*
 * Written by Prof. Hazekamp
 * Euler CPP
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include "euler.h"
using namespace std;

void integrate(double &x, double &y, double &u, double &v, const double dt) {
	double au = (-GM*x)/(pow(x*x + y*y,3./2.));
	double av = (-GM*y)/(pow(x*x + y*y,3./2.));
	u = u + dt*au;
	v = v + dt*av;
	x = x + dt*u;
	y = y + dt*v;
}

double energy(double x, double y, double u, double v){
	double energy = -(GM/sqrt(x*x + y*y)) +  (1./2.)*(u*u + v*v) ;
    return energy;
}

void printXYUV(ofstream &data, double x, double y, double step, double e) {
	data << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << 
	setw(15) << setprecision(15) << x << ", " << y << ", " << step << ", " << e << endl;
}
