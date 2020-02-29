#include "Card.h"

//constructor..
Card::Card(long card_number,  int valid_month,  int valid_year,  int PIN) {

	this->card_number = card_number;
	this->valid_month = valid_month;
	this->valid_year = valid_year;
	this->PIN = PIN;
	this->status = true;
}


void Card::setAcNo(Account* ac) { this->ac = ac; }
//getters..

unsigned int Card::getValidYear()const {
	return this->valid_year;
}

unsigned int Card::getValidMonth()const {
	return this->valid_month;
}
unsigned int Card::getPIN()const {
	return this->PIN;
}

Account* Card::getAcNo()const {
	return this->ac;
}

bool Card::is_valid()
{
	return getStatus();
}

//private;
bool Card::getStatus()const {
	return this->status;
}