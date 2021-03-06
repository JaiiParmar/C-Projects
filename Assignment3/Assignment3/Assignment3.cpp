// 201912076    
// Jayesh Parmar
// OPP
// Assignment3  

#include <iostream>

//question 1;
#include "A.h"
#include "B.h"
//question 2;
#include "q2A.h"
#include "Q2B.h"
//question 3;
#include "Q3AA.h"
#include "Q3BB.h"
#include "Q3CC.h"
#include "Q3DD.h"
//question 4;
#include "Q4AAA.h"
#include "Q4BBB.h"
#include "Q4CCC.h"
#include "Q4DDDD.h"

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
	//
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

/*Tightly coupled*/

void question3() {
	/*
	**************************************
		 ->PHONE(A)
				->SPEAKER(B)
				-----------------------
				->CAMERA(C)
						->FLASHLIGHT(D)
				-----------------------
	***************************************
	*/

	Q3DD mFlash;
	Q3CC mCamera(mFlash);
	Q3BB mSpeaker;
	Q3AA mPhone( mSpeaker, mCamera);

	mPhone.spakerOn();
	mPhone.cameraOn();
	mPhone.flashOn();
}

/*loosely coupled*/

void question4() {
	/*
	**************************************
		 ->PHONE(A)
				->SPEAKER(B)
				-----------------------
				->CAMERA(C)
						->FLASHLIGHT(D)
				-----------------------
	***************************************
	*/

	Q4DDDD mFlash;

	Q4CCC mCamera(&mFlash);

	Q4BBB mSpeaker;

	Q4AAA mPhone(&mSpeaker, &mCamera);

	mPhone.spakerOn();
	mPhone.cameraOn();
	mPhone.flashOn();
}

int main()
{
	
	//question1();
	//question2();
	//question3();
	question4();
}
