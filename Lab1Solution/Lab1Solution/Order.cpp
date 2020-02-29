#include <string>
#include <vector>
#include <tuple>
#include <fstream>

#include "Common.h"
#include "Order.h"

void Order::createOrders(std::string path)
{
	// open file stream.
	std::ifstream ordersFile;
	
	double l, w, h;
	uint q, color;

	/*Open file with read mode*/
	ordersFile.open(path, std::ios::in);
	/*Reading file*/
	while (true) {
		if (ordersFile.eof()) {
				//if end of the file close the file.
			ordersFile.close();
			break;
		}
		/*get the data from the file to variables*/
		ordersFile >> l >> w >> h >> q >> color;
		/*push the data to the vector in the form of tuple.*/
		orders.push_back(std::make_tuple(l, w, h, q, color));
	}
}
/*return the order.*/
TupleVec Order::getOrders() const
{
	return orders;
}

/*returnt he total quntity of the ordered items*/
uint Order::totalQuantity() const
{
	uint total = 0;
	for (auto& t : orders) {
		total += std::get<3>(t);
	}
	return total;
}
