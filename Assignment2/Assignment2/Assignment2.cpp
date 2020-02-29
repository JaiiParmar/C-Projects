// Assignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Complex.h"
#include "ComplexArray.h"
#include <vector>
#include "MegaString.h"
#include <string>


void question3() 
{
	std::string str;
	std::cout << "Enter a line : " << std::endl;
	std::getline(std::cin, str);
	MegaString ms1(str.c_str(), str.size());
	ms1.display();
	MegaString ms2;
	ms2 = ms1;
	ms1.display();
	MegaString ms3(ms2);
	ms3.display();
	
	MegaString m("ABC", 3);
	MegaString n("ABC", 3);		
	MegaString k("XYZ", 3);
	
	// check == operator
	if (m == n)
		std::cout << "M and N are equal." << std::endl;
	else
		std::cout << "M and N are not equal." << std::endl;

	if (m == k)
		std::cout << "M and K are equal." << std::endl;
	else
		std::cout << "M and K are not equal." << std::endl;

	// Check < operator
	if (m < k)
		std::cout << "M is smaller then K." << std::endl;
	else
		std::cout << "M is Greter then K." << std::endl;
	// check > operator
	if (k > n)
		std::cout << "K is Greter then N" << std::endl;
	else
		std::cout << "K is Smaller then N." << std::endl;

	// check + operator

	auto x = m + k;

	std::cout << m.getLen() << std::endl;
	std::cout << n.getLen() << std::endl;
	std::cout << m.getLen() + n.getLen();
	
	x.display();
	std::cout << x.getLen();
	// check += operator
	x += k;
	x.display();
}

void quesion2() {
	ComplexArray cn;
	Complex c1;
	cn.push_back(c1);
	Complex c2(3, 3);
	cn.push_back(c2);
	cn.displayArray();
	cn[1].Display();
	Complex c3(5, 6);
	cn[0] = c3;
	cn.displayArray();
}


void quesion1()
{

	Complex c1;
	c1.Display();
	Complex c2(4, 6);
	c2.Display();
	Complex c3(2, 4);
	c3.Display();
	Complex c5;
	c5.Display();
	//Check Addition.
	c5 = c2 + c3;
	c2.Display();
	c5.Display();
	//Check Substrction.
	c5 = c2 - c3;
	c2.Display();
	c5.Display();
	//Check Multiply.
	c5 = c2 * c3;
	c2.Display();
	c5.Display();

	Complex c6;
	c6 += c3;
	c6.Display();

	Complex c7;
	//c7 = 5 + c6;
	//c7 = c6 + 5;
	Complex c8(2, 2);
	c8.Display();
	c5 = c8++;
	c5.Display();
	c8.Display();
	c5 = ++c8;
	c5.Display();
	c8.Display();

}


int main()
{
	quesion1();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
