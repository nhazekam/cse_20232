/*
 * Written by Prof. Hazekamp
 * Euler CPP
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include "euler.h"
using namespace std;

namespace euler { 
void integrate(double &x, double &y, double &u, double &v, const double dt) {
	double au = (-GM*x)/(pow(x*x + y*y,3./2.));
	double av = (-GM*y)/(pow(x*x + y*y,3./2.));
	u = u + dt*au;
	v = v + dt*av;
	x = x + dt*u;
	y = y + dt*v;
}
}
