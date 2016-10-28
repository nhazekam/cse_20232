/*  
 * CSE 20232 Lab 2: Approximating Derivatives
 *
 * Complete the code as directed in the comments below. 
 * 
 */  
#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

const double PI = acos(-1.0);

int main() {

	double x, dx;
	cout << "Please input:";
	cout << endl << "x : ";
	cin >> x;
	cout << endl << "dx : ";
	cin >> dx;

	double cosx = cos(x);

	double forward = sin(x+dx);
	double backward = sin(x + dx);
	double sinx = sin(x);
	double output = (forward - sinx)/((x+dx)-x);
	// ADD CODE TO COMPUTE FORWARD DIFFERENCE OF sin(x)



	double error = abs((cosx - output)/cosx);

	// ADD CODE TO PRINT OUT x, f(x), f`(x), cos(x), error
		cout << showpoint << fixed << setprecision(15) << x << endl;
		cout << sin(x) << endl;
		cout << output << endl;
		cout << cosx << endl;
		cout << error << endl;	
	return 0;
}
