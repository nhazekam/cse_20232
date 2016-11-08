
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "complex.hpp"

Complex::Complex(){
	this->real = 0.0;
	(*this).imag = 0.0;
}

Complex::Complex(double real, double imag){
	this->real = real;
	(*this).imag = imag;
}

Complex::Complex(const Complex &c){
	this->real = c.real;
	this->imag = c.imag;
}

double Complex::getReal() {return this->real;}

double Complex::getImag() {return imag;}

void Complex::showComplexValues(){
	char sign = '+';
	if (imag < 0) sign = '-';
	std::cout << "The complex number is " << std::setw(5) <<  real << " " << sign << " " << abs(imag) << "i\n";
}

void Complex::setReal(double r) {real = r;}

void Complex::setImag(double i) {imag = i;}

void Complex::assignValues(double real, double imag){
	this->real = real;
	this->imag = imag;
}

Complex Complex::operator+(Complex c){
	Complex b(this->real+c.real, this->imag+c.imag);
	return b;
}

Complex Complex::operator+(double real){
	return Complex(this->real+real, this->imag);
//	Complex b(this->real+real, this->imag);
//	return b;
}

double operator+(double real, Complex c){
	double r = real+c.getReal();
	return r;
}

Complex & Complex::operator=(double real){
	this->real = real;
	this->imag = 0.0;
	return *this;
}
