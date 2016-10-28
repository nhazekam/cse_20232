
#ifndef INTEGRATOR_H
#define INTEGRATOR_H
#include <fstream>
using namespace std;

namespace integrator {
    double energy(double,double,double,double);
    void printXYUV(ofstream& data, double x, double y, double, double); 
}

#endif /* INTEGRATOR_H */
