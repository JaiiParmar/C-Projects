// Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

template <typename T> T larger(T a, T b);
int main()
{
	std::cout << "Larger of 1.5 and 2. 5 is " << larger(1.5, 2.5) << std::endl;

	int big_int{ 390803}, small_int{ 10 };
	std::cout << "Larger of " << big_int << " and " << small_int << " is "
		<< larger(big_int, small_int) << std::endl;
	
	std::string a_string{ "A" }, z_string{ "Z" };
	std::cout << "Larger of " << a_string << " and " << z_string << " is "
		<< larger(a_string, z_string) << std::endl;
}
	

template <typename T> 
T larger(T a, T b) {
	return a > b ? a : b;
}