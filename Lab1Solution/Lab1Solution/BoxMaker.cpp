#include <vector>
#include <tuple>
#include "Common.h"
#include "Box.h"
#include "BoxMaker.h"

void BoxMaker::setCostPerUnitVolume(double cost)
{
	rate = cost;
}

void BoxMaker::takeOrder(TupleVec order)
{
	this->order = order;
}

Boxes BoxMaker::buildBoxes()
{
	Boxes boxes;
	for (auto& t : order) {
		/*create object of Box kind.*/
		Box bBox{ std::get<0>(t), //l
				  std::get<1>(t), //w
				  std::get<2>(t)  //h
		};
		
		for(int i = 0; i < std::get<3>(t); i++) // number of boxes of same l,w,h
			boxes.push_back(bBox);
		
		/*calculate the rate.*/
		totalCost += bBox.volume() * rate * std::get<3>(t);
	
	}

	return boxes;
}

double BoxMaker::totalOrderCost() const
{
	return this->totalCost;
}
