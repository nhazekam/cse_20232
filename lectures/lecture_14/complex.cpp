
#include <iostream>
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

Complex::Complex(Complex &c){
	this->real = c.getReal();
	this->imag = c.imag;
}

double Complex::getReal() {return this->real;}

double Complex::getImag() {return imag;}

void Complex::showComplexValues(){
	char sign = '+';
	if (imag < 0) sign = '-';
	std::cout << "The complex number is " << real << " " << sign << " " << abs(imag) << "i\n";
}

void Complex::setReal(double r) {real = r;}

void Complex::setImag(double i) {imag = i;}

void Complex::assignNewValues(double real, double imag){
	this->real = real;
	this->imag = imag;
}



