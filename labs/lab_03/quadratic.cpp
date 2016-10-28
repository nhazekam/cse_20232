/*  
 * CSE 20232 Lab 2: Evaluate Quadratic
 *
 * Complete the code as directed in the comments below. 
 * 
 */  
#include <iostream>
#include <iomanip>
#include <cmath> 
#include <fstream>

using namespace std;

int main() {

	double a = -1, b, c;
	double under_sqrt = 0;
	do {
		if(a==0){
	
		} else if(under_sqrt < 0) { 
			cout << endl << "The value under the sqrt is negative" << endl;
		}
		cout << "Please input:";
		cout << endl << "a : ";
		cin >> a;
		cout << endl << "b : ";
		cin >> b;
		cout << endl << "c : ";
		cin >> c;
		double under_sqrt = pow(b, 2) - (4*a*c);
	}
	while((a == 0) || (under_sqrt < 0);

	double under_sqrt = pow(b, 2) - (4*a*c);
	double outputa, outputb;
	ofstream data;
	data.open("output.txt");
	// ADD CODE TO COMPUTE QUADRATIC FORMULA
	outputa = (-b + sqrt(under_sqrt))/(2*a);
	outputb = (-b - sqrt(under_sqrt))/(2*a);
	// ADD CODE TO PRINT OUT BOTH x OUTPUTS IF INPUT IS VALID
	data << showpoint << fixed << setprecision(15) << outputa << endl << outputb << endl;	
	return 0;
}
