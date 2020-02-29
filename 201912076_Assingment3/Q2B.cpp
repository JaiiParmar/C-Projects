#include "Q2B.h"
#include<string>

Q2B::Q2B(std::string productName) {
	this->productName = productName;
}

std::string Q2B::getProductName() {
	return this->productName;
} 

void Q2B::setBillId( q2A* billId) {
	this->billId = billId;
}

q2A* Q2B::getBillId() {
	return billId;
}