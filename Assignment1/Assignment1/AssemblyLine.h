#pragma once
#include<string>
#include"Order.h"
#include"BoxMaker.h"

class AssemblyLine
{
private:
	Order o;
	BoxMaker bm;

public:
	AssemblyLine(std::string);
};

