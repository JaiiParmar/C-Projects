#pragma once
#include"PoS.h"
#include "Transaction.h"
#include <vector>
class Marchant
{

private:

	std::vector<Transaction> mTransctions; // all the transactions

public:
	
	void addTransaction(Transaction tt);
	
};

