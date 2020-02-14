#include "BoxMaker.h"
#include <vector>
#include "Order.h"
#include "Common.h"


BoxMaker::BoxMaker() {
	this->cost = 10; // default cost
}

void BoxMaker::takeOrder(TupleVec order) 
{		
	this->orders = order;
}

std::vector<Box> BoxMaker::buildBoxes()
{	
	std::vector<Box> Boxes;
	for (auto& o : orders) {
		Box myBox{ std::get<0>(o),
				   std::get<1>(o),
				   std::get<2>(o)
		};
		for (size_t i = 0; i < std::get<3>(o); i++)
		{
			Boxes.push_back(myBox);
		}
		totalCost += myBox.volume() * cost * std::get<3>(o);

	}
}

double BoxMaker::tatalCost() {
	return totalCost;
}