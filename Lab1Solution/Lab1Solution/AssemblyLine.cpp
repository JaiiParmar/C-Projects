#include <vector>
#include <tuple>
#include <iostream>
#include <string>
#include <map>
#include "Common.h"
#include "Box.h"
#include "Order.h"
#include "BoxMaker.h"
#include "BoxPainter.h"
#include "AssemblyLine.h"

/*Assign colors*/
AssemblyLine::AssemblyLine()
{
	colorCodeToColorName[101] = "Red";
	colorCodeToColorName[102] = "Green";
	colorCodeToColorName[103] = "Blue";
	colorCodeToColorName[104] = "Black";
	colorCodeToColorName[105] = "Yellow";
}

void AssemblyLine::Start() const
{
	/*Create Order and get Order*/
	Order order;
	order.createOrders("C:\\Users\\Jayesh\\source\\repos\\Lab1Solution\\Lab1Solution\\Orders.txt");
	auto toProcess = order.getOrders();
	std::cout << "New order received" << std::endl;
	std::cout << "Manufacturing " << order.totalQuantity() << " boxes"<< std::endl;
	
	BoxMaker boxMaker;
	boxMaker.setCostPerUnitVolume(5.0);
	std::cout << "\n" << "Phase 1: Building " << order.totalQuantity() << " boxes" << std::endl;
	/*take order by passing taking the toProcess-Vector of orders.*/
	boxMaker.takeOrder(toProcess);
	auto boxes = boxMaker.buildBoxes();
	std::cout << "Box building completed" << std::endl;
	std::cout << "Total cost of box building is INR " << boxMaker.totalOrderCost() << "\n" << std::endl;

	auto unpainted = preparePaintOrder(boxes, toProcess);

	auto painter = BoxPainter::GetInstance();
	std::cout << "\n" << "Phase 2: Painting " << boxes.size() << " boxes" << std::endl;
	painter->setCostPerUnitArea(4.0);
	auto finishedBoxes = painter->paintBoxes(unpainted);
	std::cout << "Painting boxes completed" << std::endl;
	std::cout << "Total cost of painting is INR " << painter->totalPaintCost() << std::endl;

	std::cout << "\n" << "Order completed" << std::endl;
	std::cout << "Total production cost is INR " << boxMaker.totalOrderCost() + painter->totalPaintCost() << std::endl;
	std::cout << "Total volume created is " << getTotalVolume(boxes) <<" cubic units" << std::endl;
	std::cout << "Total paint surface area is " << getTotalSurfaceArea(boxes) << " square units" << std::endl;

	displayColorWiseInfo(finishedBoxes);
}

std::vector<std::pair<Box, uint>> AssemblyLine::preparePaintOrder(Boxes boxes, TupleVec order) const
{
	std::vector<std::pair<Box, uint>> unpainted;

	for (int i = 0; i < order.size(); i++) {

		for (int j = 0; j < (std::get<3>(order[i])); j++)
			unpainted.push_back(std::make_pair(boxes[i+j], std::get<4>(order[i])));
	
	}
	return unpainted;
}

double AssemblyLine::getTotalVolume(Boxes boxes) const
{
	double totalVolume = 0.0;
	for (const auto& box : boxes) {
		totalVolume += box.volume();
	}
	return totalVolume;
}

double AssemblyLine::getTotalSurfaceArea(Boxes boxes) const
{
	double totalSurfaceArea = 0.0;
	for (const auto& box : boxes) {
		totalSurfaceArea += box.surfaceArea();
	}
	return totalSurfaceArea;
}

void AssemblyLine::displayColorWiseInfo(Boxes finished) const
{
	std::map<std::string, uint> colorToBoxCount;
	for (const auto& box : finished) {
		auto colorName = colorCodeToColorName.at(box.colorForPaint());
		if (colorToBoxCount.find(colorName) == colorToBoxCount.end()) {
			// create new key
			colorToBoxCount[colorName] = 1;
		}
		else
			colorToBoxCount[colorName]++;
	}
	std::cout << "\nColor --------- Boxes" << std::endl;
	std::string c{ "           " };
	for (const auto& p : colorToBoxCount) {
		std::string b = c;
		b.replace(0, p.first.length(), p.first);
		std::cout << b << "       " << p.second << std::endl;
	}
}
