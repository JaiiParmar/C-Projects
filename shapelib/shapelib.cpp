// shapelib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "shape.h"
#include "LinkList.h"


// create shape node - not exposed to client
Node* CreateNode(void* info)
{
	// implement
	auto newNode = new Node;
	newNode->shape = info;
	newNode->next = nullptr;
	return newNode;
}
// create callback node - note exposed to client
CBs* CreateCBNode(double (*info)(float, float))
{
	// implement
}
// exposed to client - for inserting shape nodes to list
void InsertAtEnd(TwoDShape* shape)
{

	// param is parameter in the blank above
	if (head == nullptr) {
		cbHead = CreateNode(param);
		return;
	}
	auto cbNode = cbHead;
	while (cbNode->next != nullptr)
		cbNode = cbNode->next;
	cbNode->next = CreateCBNode(param);
}
// exposed to client - for setting the callback pointer
void SetAreaCalculator(double(*param)(float, float))
{
	// param is parameter in the blank above
	if (cbHead == nullptr) {
		cbHead = CreateCBNode(param);
		return;
	}
	auto cbNode = cbHead;
	while (cbNode->next != nullptr)
		cbNode = cbNode->next;
	cbNode->next = CreateCBNode(param);
}
// exposed to client - for calculating areas of all shapes in the list
void CalculateArea()
{
	auto cbNode = cbHead;
	auto p = head;
	while (cbNode != nullptr) {
		// call the area calculator function through function pointer
		// and store the returned result in shape’s area field
		//…………………………………………………………………………………………………………………………
		
		cbNode = cbNode->next;
	}
}