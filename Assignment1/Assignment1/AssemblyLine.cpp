#include "AssemblyLine.h"
#include <string>
#include<iostream>
AssemblyLine::AssemblyLine(std::string path)
{
	o.createOrder(path);
	
	if (bm.takeOrder(o.getOrders()))
		std::cout << "New Order received" << std::endl;
	
}