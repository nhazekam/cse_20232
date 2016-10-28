// Compute Area of a Cylinder
// Using formula A = 2 * PI * r * h + 2 * PI * R^2
// Where r is radius and h is height
// Author: Jesus Izaguirre

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    double r, h, A;
    double PI = acos(-1.0);
    cout << "This program computes the area of a cylinder" << endl;
    cout << "Please enter the radius r of the cylinder: ";
    
    cin >> r;
    cout << endl << "Please enter the height h of the cylinder: ";
    cin >> h;
    cout << endl << "Thank you" << endl;

	if(!((r >0) && (h > 0))){
		cout << "Use positive number"<< endl;
		return 1;
	}
    
    A = 2 * PI*r*(r+h);
    //A = 2 * PI*r*h + 2 * PI*pow(r, 2);

    cout << "The Area is: " << A << endl; // default format
    cout << "The Area is: " << setw(7) << fixed << setprecision(2) << A << endl;
    cout << "The Area is: " << scientific << A << endl;
    cout << "The Area is: " << scientific << setprecision(4) << A << endl;
    cout << "Area again: " << A << endl;
    return 0;
    
}
