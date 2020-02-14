#include<vector>
#include "Order.h"
#include "Box.h"
#include "Common.h"

#ifndef BOXMAKER_H

#define BOCMAKER_H
	// does not need to know color code.

class BoxMaker
{

private:
	double cost;
	double totalCost;
	TupleVec orders;

public:
	BoxMaker();
	void setCostPerBox(double cost);
	void takeOrder(TupleVec order);
	std::vector<Box> buildBoxes(); // returns objects of Box class maching the orders;
	double tatalCost() ;	// returns total cost of boxes built in an order. Should return 0 if the order is not processed yet.

};

#endif // !BOXMAKER_H



