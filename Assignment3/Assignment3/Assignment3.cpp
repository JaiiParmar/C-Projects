// 201912076    
// Jayesh Parmar
// OPP
// Assignment3  

#include <iostream>
#include "A.h"
#include "B.h"

int main()
{
	A myA;	
	B myB;

	myA.setTitle("Hello from A");
	std::cout << myA.getTitle() << std::endl;

	myB.setTitle("Hello from B");
	std::cout << myB.getTitle();
	
	
	myA.setContactB(&myB);
		// accessing B title by A obj.
	std::cout << myA.getContactB()->getTitle() << std::endl;
	
}
