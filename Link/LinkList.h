#pragma once
struct Node {	
	int info;
	Node* next;
};
int removeFirst();
int removeLast();
void insert(int);
void remove(int);
void insertAfter(int, int);
void insertBefore(int, int);
Node* find(int);
void displayList();
int getCount();