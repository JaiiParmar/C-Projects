#include "Q4CCC.h"
#include "Q4DDDD.h"
#include <iostream>

Q4CCC::Q4CCC() = default;
Q4CCC::Q4CCC( Q4DDDD* const flash)
{
	mFlash = flash;
}

void Q4CCC::cam() {
	std::cout << "Smile Please, Camera is on" << std::endl;
}

void Q4CCC::flash() {
	std::cout << "turning on the flash." << std::endl;
	mFlash->flash();
}
