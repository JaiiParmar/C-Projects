#pragma once
#include "Card.h"
class CreditCard : protected Card
{
	//Card Properties and method.
private:
	unsigned int max_limit;
	unsigned int spent;

public:
	/*
		
	*/	
	         //cardNO, valid_month, valid_year,   PIN,         
	CreditCard(long, unsigned int, unsigned int, unsigned int);
	
	void setMaxLimit(unsigned int);
	unsigned int getMaxLimit()const;
	
};

