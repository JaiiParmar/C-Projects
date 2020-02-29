#pragma once
#include<string>
class q2A;


/*
	Assume Product class
	ProductName, BillId.
*/
class Q2B
{
private:
	std::string productName;
	q2A* billId;

public:	

	Q2B(std::string);
	void setBillId( q2A*);
	std::string getProductName();
	q2A* getBillId();
};


