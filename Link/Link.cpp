// Link.cpp : Defines the functions for the static library.
//
#include "pch.h"
#include<iostream>

#include"LinkList.h"
#include"LinkListBackend.h"

using namespace std;


void countManip(bool val) {
	if (val) 
		list_head->info++;
	else
		list_head->info--;
	
}

Node* creatNode(int info) {

	Node* newNode = new Node();
	newNode->info = info;
	newNode->next = nullptr;

	if (list_head == nullptr) {
		list_head = new Node();
		list_head->info = 0;
		list_head->next = nullptr;
	}
	return newNode;
}

int getCount() {
	return list_head->info;
}

void insert(int info) {

	Node* t_node = creatNode(info);
	if (list_head->next == nullptr){
		list_head->next = t_node;
		return;
	}
	Node* curr = list_head->next;
	while (curr->next != nullptr)
		curr = curr->next;
	curr->next = t_node;
	countManip(true);
}


void remove(int info) {

		Node* curr_node = list_head->next;
	
		if (info == curr_node->info)
			removeFirst();
		
		while (curr_node->next->next != nullptr)
		{
			if (curr_node->next->info == info)
				break;
			curr_node = curr_node->next;
		}
		
		Node* t = curr_node->next->next;
		curr_node->next->next = nullptr;
		delete curr_node->next;
		curr_node->next = t;
		countManip(false);
	
}

int removeFirst() {
	Node* t = list_head->next->next;
	auto x = list_head->next->info;
	delete list_head->next;
	list_head->next = t;
	countManip(false);
	return x;
}
int removeLast() {
	Node* curr = list_head->next;
	while (curr->next->next != nullptr)
		curr = curr->next;

	auto x = curr->next->info;

	delete curr->next;

	curr->next = nullptr;
	countManip(false);
	return x;
}

void insertAfter(int source, int info) {
	Node* t = creatNode(info);
	Node* curr = list_head->next;
	while (curr->next != nullptr && curr->info != source)
		curr = curr->next;

	t->next = curr->next;
	curr->next = t;
	countManip(true);
}

void insertBefore(int source, int info) {
	Node* curr = list_head->next;
	Node* t = creatNode(info);
	while (curr->next->next != nullptr && curr->next->info != source){
		curr = curr->next;
	}
	t->next = curr->next;
	curr->next = t;
	countManip(true);
}

Node* find(int info){
	Node* curr_node = list_head->next;
	if (curr_node->info == info)
		return list_head->next;

	while (curr_node->next != nullptr)
	{
		if (curr_node->info == info)
			return curr_node;
		curr_node = curr_node->next;
	}
	return nullptr;
}

void displayList() {
	Node* curr_node = list_head->next;
	cout << endl << "List :   ";
	for (; curr_node != nullptr; ) {
		cout << "  "<< curr_node->info << " ---> ";
		curr_node = curr_node->next;
	}
}