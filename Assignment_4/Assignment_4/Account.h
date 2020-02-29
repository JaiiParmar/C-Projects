#pragma once
#include"CreditCard.h"
#include"DebitCard.h"
#include"Transaction.h"
#include"Statement.h"
#include <vector>

class Account
{

private:
		//account has CreditCard Or DebitCard or Both.
	long AcNo; 
	unsigned int balance;
	CreditCard* cc;
	DebitCard* dc;
	std::vector<Transaction> mTransaction;

public:
	
	long getAcNo()const;
	unsigned int getBalance()const;
	bool Debit(unsigned int);
	bool hasSufficientBalance()const;

};

