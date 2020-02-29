#pragma once
typedef std::vector<Box> Boxes;

class BoxMaker
{

private:
	double rate;
	double totalCost;
	TupleVec order;

public:
	void setCostPerUnitVolume(double cost);
	void takeOrder(TupleVec order);
	Boxes buildBoxes();
	double totalOrderCost() const;

};

