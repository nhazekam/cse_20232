//
//  Test the effect of roundoff error using single vs. double precision
//  floattest
//
//  Created by Jesus Izaguirre on 9/1/15.
//  Copyright (c) 2015 Jesus Izaguirre. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <math.h>   // for definition of M_PI
#include <cmath>    // for abs
using namespace std;

int main(int argc, const char * argv[]) {
    typedef double real; //replace double by float to test error with floats
    
    real fe=2e10;
    real v=55.0;
    real c=6.685e8;
    real vhat, frhat;
    
    // We will first compute the frhat
    
    frhat = fe * (c + v) / (c - v);

    cout << "fr is computed to be: " << setprecision(15) << frhat << endl;
    
    // We now use frhat to see what the velocity is
    
    vhat = c * (frhat - fe) / (frhat + fe);
    
    cout << "vhat is computed to be: " << setprecision(10) << vhat << endl;
    cout << "Relative error is: " << setprecision(2) << abs((vhat - v)/v) << endl;
    
    return 0;
}
