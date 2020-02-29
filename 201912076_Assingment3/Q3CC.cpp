#include "Q3CC.h"
#include "Q3DD.h"
#include <iostream>

Q3CC::Q3CC() = default;
Q3CC::Q3CC(const Q3DD& flash)
{
	mFlash = flash;
}

void Q3CC::cam() {
	std::cout << "Smile Please, Camera is on" << std::endl;
}

void Q3CC::flash() {
	std::cout << "turning on the flash." << std::endl;
	mFlash.flash();
}



