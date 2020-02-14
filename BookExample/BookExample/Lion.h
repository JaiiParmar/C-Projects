#pragma once
#include "Animal.h"
#include <string>
class Lion : public Animal
{
public:
	Lion();
	Lion(std::string, unsigned int);
	Lion(const Lion&);
};

