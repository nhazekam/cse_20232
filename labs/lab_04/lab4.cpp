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

using namespace std;

const double GM = 2.0; //Global GM - declared in euler.h but defined here

int main(int argc, const char * argv[]) {
    
	ofstream data;
	data.open("data.csv");
    
    //initial conditions
	//Define c, dt, PI, x, y, u, and v
	double c = 0.5;
	double dt = 0.001;
	double PI = acos(-1.0);
	double x = 1-c, y = 0, u = 0;
	double v = sqrt(GM*(1+c)*(1-c));

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
