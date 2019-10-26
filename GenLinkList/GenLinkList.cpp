// GenLinkList.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include"LinkList.h"
#include"BackEndLinkList.h"

void (*display)(const void* s) = nullptr;

Node* createNode(void* info) {
	Node* newNode = new Node;
	newNode->info = info;
	newNode->next = nullptr;

	if (head == nullptr) {
		head = new Node;
		head->info = 0;
		head->next = nullptr;
	}
	return newNode;
}

void insert(void* info) {

	auto newNode = createNode(info);
	if (head->next == nullptr) {
		head->next = newNode;
		return;
	}
	auto curr = head->next;
	while (curr->next != nullptr)
		curr = curr->next;

	curr->next = newNode;
	incrementCount();
}

void displayList() {
	Node* curr = head->next;
	while (curr != nullptr)
	{
		display(curr->info);
		curr = curr->next;
	}
}
void incrementCount() {	
	auto x =(int)head->info;
	head->info = reinterpret_cast<void*>(++x);
}

void decrementCount() {
	auto x = (int)head->info;
	head->info = reinterpret_cast<void*>(--x);
}


