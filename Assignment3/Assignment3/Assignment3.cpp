// 201912076    
// Jayesh Parmar
// OPP
// Assignment3  

#include <iostream>

#include "A.h"
#include "B.h"
#include "q2A.h"
#include "Q2B.h"

void question1() 
{
	A myA;
	B myB;

	myA.setTitle("Hello from A");
	std::cout << myA.getTitle() << std::endl;

	myB.setTitle("Hello from B");
	std::cout << myB.getTitle() << std::endl;


	myA.setContactB(&myB);
	//accessing B title by A obj.
	std::cout << myA.getContactB()->getTitle() << std::endl;

	myB.setContactA(&myA);
	//accessing A title by B obj
	std::cout << myB.getContactA()->getTitle() << std::endl;
}

void question2()
{
	//create a bill
	q2A bill1;
	bill1.setBillId(101);
	std::cout << bill1.getBillId() << std::endl;

	//create Products
	Q2B p1("Phone");
	Q2B p2("Laptop");
	Q2B p3("book");
	Q2B p4("bottle");
	Q2B p5("pen");

		//add procuct to into bill list
	bill1.addProduct(&p1);
	bill1.addProduct(&p2);
	bill1.addProduct(&p3);
	bill1.addProduct(&p4);
	bill1.addProduct(&p5);
	
	//assinging bill id to each product is done in the addProduct Method itself.

	//show product list in the with same bill id using any product obj
	p1.getBillId()->showProducts();
}

int main()
{
	
	//question1();
	question2();
}
