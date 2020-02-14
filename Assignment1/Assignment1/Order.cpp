
#include "Order.h"
#include <vector>
#include <fstream>

void Order::createOrder(std::string path) const
{
	std::ifstream fin(path);
	while (!fin.eof())
	{
			// read line by line and store it in the vector or order.		
			// increment total accordingly
	}
	fin.close();
}

std::vector<Order> Order::getOrders() const
{

	std::vector<Order> arr(orders.begin(), orders.end());
	return arr;

}

unsigned int Order::totalQuantity() const
{
	return this->total;
}