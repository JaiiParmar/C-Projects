#include "DebitCard.h"

DebitCard::DebitCard(long card_number, unsigned int valid_month, unsigned int valid_year, unsigned int PIN) : Card(card_number, valid_month, valid_year, PIN) {
	max_trans_limit = 20000;
}

void DebitCard::setMaxTransLimit(unsigned int max_trans_limit) {
	this->max_trans_limit = max_trans_limit;
}

unsigned int DebitCard::getMaxTransLimit()const {
	return this->max_trans_limit;
}



