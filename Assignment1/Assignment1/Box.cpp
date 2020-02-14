#include "Box.h"


Box::Box(double h, double w, double l)
{
	if (h <= 0 || w <= 0 || l <= 0 || color <= 0 )
		return;
	this->h = h;
	this->w = w;
	this->l = l;
}

void Box::setH(double h) {
	if (h > 0) this->h = h;
}

void Box::setW(double w) {
	if (w > 0) this->w = w;
}

void Box::setL(double b) {
	if (b > 0) this->l = l;
}

void Box::setColor(unsigned int color) {
	if (color > 0) this->color = color;
}

double Box::volume()const {
	return (h * w * b);
}

double Box::surfaceArea() const {
	return (l*h * w);
}