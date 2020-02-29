#pragma once
#include"Card.h"

class DebitCard : protected Card
{
	//Card Properties and method.
private:
	unsigned int max_trans_limit;

public:
	/*

	*/
		//    card_no,  month,	     year,			PIN
	DebitCard(long, unsigned int, unsigned int, unsigned int);

	void setMaxTransLimit(unsigned int);

	unsigned int getMaxTransLimit()const;

};

