	
#include "Box.h"
#include <iostream>

Box::Box() {}

Box::Box(double h, double w, double b)
{
	this->h = h; 
	this->w = w;	
	this->b = b;
	std::cout << "Constructor called. " << std::endl;
}

Box::Box(double s) : Box{ s,s,s }
{
	//h = w = b = s;
	std::cout << "Constructor Deligation called. " << std::endl;

}


Box::Box(const Box& box) : Box{box.b, box.h, box.w}
{
	//this->b = box.b;
	//this->h = box.h; 
	//this->w = box.w;
	std::cout << "Copy Constructor called. " << std::endl;
}
Box::~Box()
{
	std::cout << "Destructor hahaha...." << std::endl;
}

void Box::setH(const double h) { this->h = h ; }
void Box::setB(const double b) { this->b = b ; }
void Box::setW(const double w) { this->w = w ; }

double Box::getH() { return this->h;  }
double Box::getB() { return this->b;  }
double Box::getW() { return this->w;  }

double Box::volume()const
{
	return(h * b * w);
}