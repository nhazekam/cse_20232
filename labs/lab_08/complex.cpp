
#include <iostream>
#include <string>
#include <cmath>
#include "complex.hpp"

//Add Constructors here
Complex::Complex(){
	this->real = 0.0;
	this->imag = 0.0;
}

Complex::Complex(double real, double imag){
	this->real = real;
	this->imag = imag;
}

Complex::Complex(const Complex &c) {
	this->real = c.real;
	this->imag = c.imag;
}

//Add Accessors here
double Complex::getReal(){
	return real;
}

double Complex::getImag(){
	return imag;
}

void Complex::showComplexValues(){
	char sign = '+';
	if (imag < 0) sign = '-';
	std::cout << "The complex number is " << real << " " << sign << " " << abs(imag) << "i\n";
}

//Add Mutators here
void Complex::setReal(double real) { 
	this->real = real;
}

void Complex::setImag(double imag) { 
	this->imag = imag;
}

void Complex::assignValues(double real, double imag) { 
	this->real = real;
	this->imag = imag;
}

//Add Operator Functions here
Complex Complex::operator+(Complex c){
	Complex r(real+c.real, imag+c.imag);
	return r;
}

Complex Complex::operator+(double r){
	Complex n(real+r, imag);
	return n;
}

double operator+(double r, Complex c){
	double val = r + c.real;
	return val;
}

Complex Complex::operator=(double real){
	this->real = real;
	this->imag = 0.0;
	return *this;
}







