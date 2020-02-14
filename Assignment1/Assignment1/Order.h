#include "Box.h"
#include <vector>
#include <string>

#ifndef ORDER_H
#define ORDER_H

class Order
{
private: 
	TupleVec orders;

public:

	void createOrder(std::string) const;
	/*collection*/std::vector<Order> getOrders() const;
	unsigned int totalQuantity() const; // sum of quantity of all orders to be made
};

// Rule of Thumb Apply here.
#endif // !1



