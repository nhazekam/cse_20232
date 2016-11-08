
#include <iostream>
#include <string>
#include "complex.hpp"

using namespace std;

int main() {
	Complex c1();
	c1.showComplexValues();

	Complex c2(2.0, 0.0);
	c2.showComplexValues();

	c2.assignNewValues(4.0, 2.0);
	c1.showComplexValues();
	c2.showComplexValues();

	Complex c3(c2);
	c3.showComplexValues();
	return 0;
}




