#include "CreditCard.h"

CreditCard::CreditCard(long card_number, unsigned int valid_month, unsigned int valid_year, unsigned int PIN) : Card(card_number, valid_month, valid_year, PIN) {
	max_limit = 100000;
	spent = 0;
}

void ::CreditCard::setMaxLimit(unsigned int max_limit) {
	this->max_limit = max_limit; 
}

unsigned int CreditCard::getMaxLimit()const {
	return this->max_limit;
}