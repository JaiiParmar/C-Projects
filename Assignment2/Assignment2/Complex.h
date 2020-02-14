#pragma once
class Complex
{
private:

	double real;
	double img;
	
public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);
	//Complex(std::string_view);
	
	void setComplex(double real, double img);
	Complex getComplex();

	void Display();

	//Operator Overloading.
	Complex operator +(const Complex&);
	Complex operator -(const Complex&);
	Complex operator *(const Complex&);
	//Complex operator /(const Complex&);
	
	void operator +=(const Complex&);
	void operator -=(const Complex&);
	void operator *=(const Complex&);
	//pre
	Complex operator ++();
	Complex operator --();
	//post 
	Complex operator ++(int);
	Complex operator --(int);
	// complex + double/int/float
	Complex operator +(double);
	Complex operator -(double);
	
	
	//double/int/float + complex
	//Done
	friend Complex operator +(const double& , const Complex& );

};


