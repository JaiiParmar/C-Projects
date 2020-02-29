

#include <iostream>
#include "PoS.h"
#include "Account.h"
#include "BankServer.h"
#include "Card.h"
#include "Transact.h"

int main()
{
	PoS PaymentSystem;
	bool res =  PaymentSystem.Debit();
	if (res) {
		std::cout << "Good" << std::endl;
	}
	else {
		std::cout << "Try la." <<std::endl;
	}
}
