#include "q2A.h"
#include "Q2B.h"

#include <iostream>
#include <string>
#include <vector>

q2A::q2A() = default;


void q2A::setBillId(size_t billId)
{
	this->billId = billId;
}

size_t q2A::getBillId() {
	return this->billId;
}
void q2A::addProduct( Q2B* b) {
	//setting bill id to given product.
	b->setBillId(this);
	this->pList.push_back(b);
	
}

void q2A::showProducts() {
	for (auto i =pList.begin(); i != pList.end(); i++)
	{
		std::cout << (*i)->getProductName()<<std::endl; 
	}
}