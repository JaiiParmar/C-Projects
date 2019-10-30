// GenLinkList.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include"LinkList.h"
#include"BackEndLinkList.h"

void (*display)(const void* ) = nullptr;
bool (*compare)(const void* , const void*) = nullptr;

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

	Node* newNode = createNode(info);
	
	if (head->next == nullptr) {
		head->next = newNode;
		incrementCount();
		return;
	}

	auto curr = head->next;
	while (curr->next != nullptr)
		curr = curr->next;
	curr->next = newNode;

	incrementCount();
}

void insertBefore(void* source, void* info) {
	
	if (head == nullptr)                     // if List is empty.
		return;
	
	if (compare(source, head->next->info)) { // if the source is the very first node.
		auto t = createNode(info);
		t->next = head->next;
		head->next = t;
		incrementCount();
		return;
	}

	auto curr = head->next;
	while (curr->next != nullptr) {            // find the source.
		
		if (compare(source, curr->next->info)) {
			auto t = createNode(info);
			t->next = curr->next;
			curr->next = t;
			incrementCount();
			return;
		}

		curr = curr->next;
	}
}

void insertAfter(void* source, void* info) {
	if (head == nullptr)				// if list is empty.
		return;

	auto curr = head->next;
	
	while (curr != nullptr) {			// find source.
		if (compare(source, curr->info)) {
			auto t = createNode(info);		
			t->next = curr->next;
			curr->next = t;
			incrementCount();
			return;
		}
		curr = curr->next;
	}
}
void remove(void* info) {

	if (head == nullptr)
		return;
	
	if (compare(info, head->next->info)) {
		auto t = head->next->next ;
		delete head->next;
		head->next = t;
		decrementCount();
	}
	
	auto curr = head->next;
	while(curr->next != nullptr){
	
		if (compare(info, curr->next->info)) {
			auto t = curr->next->next;
			delete curr->next;
			curr->next = t;
			decrementCount();
			return;
		}
	}
}

void* find(void* info) {
	
	Node* curr = head->next;
	
	while (curr != nullptr) {
		if (compare(info, curr->info))
			return curr->info;
		curr = curr->next;
	}
	return nullptr;
}

void displayList() {
	Node* curr = head->next;
	while (curr != nullptr)
	{
		display(curr->info);
		curr = curr->next;
	}
}

/*
	Delete the list.
*/

int getCount() {
	return (int)head->info;
}

void incrementCount() {	
	auto x =(int)head->info;
	head->info = reinterpret_cast<void*>(++x);
}

void decrementCount() {
	auto x = (int)head->info;
	head->info = reinterpret_cast<void*>(--x);
}


