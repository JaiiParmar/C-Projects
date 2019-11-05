// Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

template <typename T> T larger(T a, T b);
int main()
{
	std::cout << "Larger of 1.5 and 2. 5 is " << larger(1.5, 2.5) << std::endl;
}

template <typename T> 
T larger(T a, T b) {
	return a > b ? a : b;
}