#pragma once
#include<vector>
#include<iostream>
#include "Complex.h"

class ComplexArray
{
private:
	std::vector<Complex> complex;

public:		
	
	void push_back(Complex&);
	
	Complex& operator [](int);
	
	void displayArray();
};

