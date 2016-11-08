
#ifndef __complex_hpp__
#define __complex_hpp__

#include <iostream>

class Complex
{
	private:
		//Data members here
		double real;
		double imag;

	public:
		//Constructors here
		Complex(); // Default Constructor
		Complex(double real, double imag); // Constructor with values
		Complex(const Complex &c); // Copy Constructor

		//Accessors here
		double getReal();
		double getImag();
		void showComplexValues();

		//Mutators here
		void setReal(double real);
		void setImag(double imag);
		void assignValues(double real, double imag);

		Complex operator+(Complex c);
		Complex operator+(double r);
		friend double operator+(double r, Complex c);

		Complex operator=(double real);
};

#endif




