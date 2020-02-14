#pragma once
#pragma once 
struct Node {
	void* info;
	Node* next;
};

extern void(*display)(const void*);
extern bool(*compare)(const void*, const void*);

void insert(void*);

void insertAfter(void*, void*);

void insertBefore(void*, void*);

void remove(void*);

void* find(void*);


int getCount();

void displayList();