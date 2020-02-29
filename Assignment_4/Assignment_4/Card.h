#pragma once
#include"Account.h"

class Card
{

private:
	Account* ac;
	long card_number;
	unsigned int valid_month;
	unsigned int valid_year;
	unsigned int PIN;
	bool status;

public:

	Card(long, unsigned int, unsigned int, unsigned int);

	void setValidYear(unsigned int);
	void setValidMonth(unsigned int);

	void setPIN(unsigned int);
	void setAcNo(Account*);

	unsigned int getPIN()const;
	Account* getAcNo()const;

	unsigned int getValidYear()const;
	unsigned int getValidMonth()const;

	bool is_valid();

private:
	bool getStatus()const;
};


