//
//  lab4.cpp
//  Orbit integrator
//
//  Created by Zach on 9/18/15.
//  Modified by Nick Hazkeamp on 9/16/16.
//  Copyright (c) 2015 LeBlanc. All rights reserved.
//

#include <cmath>
#include <fstream>
#include "euler.h"
#include "integrator.h"
#include "verlet.h"
using namespace std;
using namespace verlet;
using namespace integrator;

const double GM = 2.0; //Global GM - declared in euler.h but defined here

int main(int argc, const char * argv[]) {
    
    //open output file
    ofstream data;
    data.open("data.csv");
    
    //initial conditions
    const double c = 1./3;
    const double dt = 0.01;
    const double PI = M_PI;
    double x = 1 - c, y = 0.0, u = 0.0;
    double v = sqrt(GM*(1.0+c)/(1.0-c));
    
    //print initial conditions
    printXYUV(data, x, y, 0.0, energy(x, y, u, v));
    
    //integrate one cycle
    for (double step=0.0; step < 2*PI; step+=dt) {
        integrate(x, y, u, v, dt);
        printXYUV(data, x, y, step, energy(x, y, u, v));
    }
    
    //close output file
    data.close();

    return 0;
}
