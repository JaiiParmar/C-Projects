#pragma once 
struct Node {
	void* info;
	Node* next;
};
extern void(*display)(const void*);

void insert(void* info);
void displayList();