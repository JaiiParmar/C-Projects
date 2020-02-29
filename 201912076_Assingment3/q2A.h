#pragma once
#include<vector>

class Q2B;
/*
	
	Suppose bill class
	billId, ProductId

*/

class q2A 
{

private:
	size_t billId;
	std::vector<Q2B*> pList; //vector of products

public:
	void setBillId(size_t);
	size_t getBillId();
	q2A();
	void addProduct( Q2B* b);
	void showProducts();
};

