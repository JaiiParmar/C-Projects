#pragma once
// Making BoxPainter a singleton
class BoxPainter
{
public:
	static BoxPainter* GetInstance();
	void setCostPerUnitArea(double cost);
	std::vector<Box> paintBoxes(std::vector<std::pair<Box, uint>> boxesToColor);
	double totalPaintCost() const;

private:
	BoxPainter() { rate = totalCost = 0.0; }	// set default constructor as private

private:
	double rate, totalCost;
	inline static BoxPainter* singleton;
};

