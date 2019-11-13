#pragma once
// TwoDShape is exposed to the clients

#include "shapeback.h"

struct TwoDShape {
	float dim1;
	float dim2;
	double area;
};


struct CBs {
	double (*cb)(float, float);
	CBs* next;
};

Node* head = nullptr; // start pointer to TwoDShapes list

CBs* cbHead = nullptr; // start pointer to call-back function nodes
