#pragma once
class Order
{

private:
	/*typedef std::vector<std::tuple<double, double, double, unsigned int, unsigned int>> TupleVec*/
	TupleVec orders;

public:
	void createOrders(std::string path);
	TupleVec getOrders() const;
	uint totalQuantity() const;

};

