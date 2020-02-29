#pragma once
#include"Marchant.h"

class PoS
{

private:
	Marchant* mm;

private:

	long askCardNum()const;
	unsigned int askPin()const;
	unsigned int askSaleTotalAmount()const;
	void recordTranction(unsigned int, std::string);

public:
	bool Debit() const;

};

