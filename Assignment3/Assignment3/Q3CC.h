#pragma once
#include "Q3DD.h"
class Q3CC
{
private:

	Q3DD mFlash;

public:
	Q3CC();
	Q3CC(const Q3DD&);
	void cam();
	void flash();
};

