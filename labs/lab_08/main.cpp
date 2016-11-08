
#include <iostream>
#include <iomanip>
#include <string>
#include "complex.hpp"

using namespace std;

int main() {
	Complex c1, c2, c3;
	c1.showComplexValues();

	c2.assignValues(2.0, 0.0);
	c2.showComplexValues();

	c3 = c1;
	c1 = 5.5;
	c3.showComplexValues();
	c1.showComplexValues();

	c2.assignValues(4.0, 2.0);
	c2.showComplexValues();

	c3 = (c1 + c2);
	c3.showComplexValues();

	Complex c4 = (c3 + 2.0);
	c4.showComplexValues();
	double val = -1.0 + c4;
	cout << "The double  number is " << setw(5) << val << endl;

	Complex c5(c3);
	c5.showComplexValues();
	return 0;
}




