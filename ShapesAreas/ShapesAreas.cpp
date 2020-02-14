#include<iostream>
#include"shape.h"

using namespace std;

// squares
double SquareArea(float d1, float d2)
{
	return d1 * d2;
}
void Squares()
{
	auto s1 = new TwoDShape;
	s1->dim1 = 5.4;
	s1->dim2 = 5.4;
		auto s2 = new TwoDShape;
	s2->dim1 = 6.0;
	s2->dim2 = 6.0;
	InsertAtEnd(s1);
	// set area calculator to SquareArea Function
	SetAreaCalculator(SquareArea);
	InsertAtEnd(s2);
	// set area calculator to SquareArea Function
	SetAreaCalculator(SquareArea);
}
// Triangles
double TriangleArea(float b, float h)
{
	return 0.5 * b * h;
}
void Triangles()
{
	auto t1 = new TwoDShape;
	t1->dim1 = 3;
	t1->dim2 = 5;
	auto t2 = new TwoDShape;
	t2->dim1 = 4;
	t2->dim2 = 8;
	InsertAtEnd(t1);
	// set area calculator to TriangleArea Function
	SetAreaCalculator(TriangleArea);
	InsertAtEnd(t2);
	// set area calculator to TriangleArea Function
	SetAreaCalculator(TriangleArea);
}
// Circles
double CircleArea(float r, float nop)
{
	return 3.14159 * r * r;
}
void Circles()
{
	auto c1 = new TwoDShape;
		c1->dim1 = 5;
	c1->dim2 = 0;
	auto c2 = new TwoDShape;
	c2->dim1 = 2.4;
	c2->dim2 = 0;
	InsertAtEnd(c1);
	// set area calculator to CircleArea Function
	SetAreaCalculator(CircleArea);
	InsertAtEnd(c2);
	// set area calculator to CircleArea Function
	SetAreaCalculator(CircleArea);
}
void Run()
{
	// Inside app - add some shapes
	Squares();
	Triangles();
	Circles();
	// Inside app - calculate areas of all type of shapes
	CalculateArea();
}
int main()
{
	Run();
}