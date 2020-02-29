
#include "PoS.h"
#include "BankServer.h"
#include <iostream>

bool PoS::Debit()const{
	BankServer bankServer;
	//ask number and also verify.
	long cNo = askCardNum();
	if (bankServer.is_valid(cNo)) {

		//ask pin and also verify.
		if (BankServer.is_valid(askPin())) {
			int totAmont = askSaleTotalAmount();
			BankServer.startDebit(totAmont);
			mm->addTransaction(cNo, totAmont);
		}
		else
		{
			//if PIN is not valid
			return false;
		}

	}
	else {
			//if Card No. is not valid.
		return false;
	}
	//if everything goes well.
	return true;
}

long PoS::askCardNum()const {
	//get card num form user.

}

unsigned int PoS::askPin()const {
	//get pin from user.
}

unsigned int PoS::askSaleTotalAmount()const {
	//fetch total amount from sale.
}

