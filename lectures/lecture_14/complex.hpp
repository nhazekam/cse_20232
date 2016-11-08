
#ifndef __complex_hpp__
#define __complex_hpp__

#include <iostream>

class Complex
{
	private:
		double real;
		double imag;

	public:
		Complex();
		Complex(double real, double imag);
		Complex(Complex &c);

		double getReal();
		double getImag();
		void showComplexValues();

		void setReal(double r);
		void setImag(double i);
		void assignNewValues(double, double);
};

#endif




