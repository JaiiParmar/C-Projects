#include "ComplexArray.h"
#include "Complex.h"
#include <vector>
#include <iostream>

void ComplexArray::push_back(Complex& c) {
	this->complex.push_back(c);
}

Complex& ComplexArray::operator [](const int index) {
	return complex[index];
}

void ComplexArray::displayArray() {
	for (auto it{ complex.begin() }; it != complex.end(); it++) {
		it->Display();
	}
}