#pragma once
#include "Animal.h"
#include <string>
class Aardvark :
	public Animal
{
public:
	Aardvark();
	Aardvark(std::string, unsigned int);
	Aardvark(const Aardvark&);
};

