#include "Complex.h"
#include <iostream>
#include <string_view>

Complex::Complex() {
	real = 0;
	img = 0;
}

Complex::Complex(double real, double img) {
	this->real = real;
	this->img = img;
}

Complex::Complex(const Complex& c) {
	this->real = c.real;
	this->img = c.img;
}

void Complex::setComplex(double real, double img) {
	this->real = real;
	this->img = img;
}

Complex Complex::getComplex() {
	return *this;
}


// Do it later.

//Complex::Complex(std::string_view complex) {
//
//	//Extract Real and Img part
//
//	//Assing the values;
//
//}

Complex Complex::operator +(const Complex& c) {
	
	Complex res;
	res.real = this->real + c.real;
	res.img = this->img + c.img;
	return res;
}
Complex Complex::operator -(const Complex& c) {

	Complex res;
	res.real = this->real - c.real;
	res.img = this->img - c.img;
	return res;
}
Complex Complex::operator *(const Complex& c) {

	Complex res;
	res.real = (this->real * c.real) - (this->img * c.img);
	res.img = (this->real * c.img) + (this->real * c.img);
	return res;
}

void Complex::operator +=(const Complex& c) {
	this->real = this->real + c.real;
	this->img =  this->img + c.img;
}


void Complex::operator -=(const Complex& c) {
	this->real = this->real - c.real;
	this->img = this->img - c.img;
}

void Complex::operator *=(const Complex& c) {
	
	this->real = (this->real * c.real) - (this->img * c.img);
	this->img = (this->real * c.img) + (this->real * c.img);

}
//preincrement
Complex Complex::operator ++() {
	Complex c;
	c.real = ++(this->real);
	c.img = ++(this->img);
	return c;
}
//predecrement
Complex Complex::operator --() {
	Complex c;
	c.real = --(this->real);
	c.img = --(this->img);
	return c;
}
//post-increment
Complex Complex::operator ++(int) {
	Complex c;
	c.real = this->real++;
	c.img = this->img++;
	return c;
}
//post-decrement
Complex Complex::operator --(int) {
	Complex c;
	c.real = this->real--;
	c.img = this->img--;
	return c;
}

Complex Complex::operator +(double x) {
	Complex c;
	c.real = this->real + x;
	c.img = this->img + x;
	return c;
}

Complex Complex::operator -(double x) {
	Complex c;
	c.real = this->real - x;
	c.img = this->img - x;
	return c;
}
// for "XXX + OBJ"
Complex operator +(const double& n, const Complex& c)
{
	Complex cc;
	cc.real = c.real + n;
	cc.img = c.img + n;
	return cc;
}

// just to display the number in format "x + iy"
void Complex::Display() {
	std::cout << std::endl << real << " + i" << img << std::endl;
}	