
#include <fstream>
#include <iomanip>
#include <cmath>
#include "integrator.h"
extern const double GM;

using namespace std;

namespace integrator {
    double energy(double x, double y, double u, double v) {
        return 1./2.*(u*u + v*v) - GM/sqrt(x*x + y*y);
    }
    
    void printXYUV(ofstream& data, double x, double y, double t, double e) {
        data << setiosflags(ios::fixed) << setiosflags(ios::showpoint) 
        << setw(15) << setprecision(12)
        << x << " , " << y << " , " << t << " , " << e << endl;
    }    
} // end of namespace integrator
