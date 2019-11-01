// Students.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "LinkList.h"

using namespace std;

struct Student {
	int id;
	char* name;
};

struct Scientist {
	int id;
	float cpi;
	char* name;
};

bool cmprById(const void* x, const void* y) {
	Student* s1 = (Student*)(x);
	Student* s2 = (Student*)(y);

	if (s1->id == s2->id) {
		return true;
	}
	return false;
}

void displayItem(const void* s) {
	Student* sobj = (Student*)s;
	cout << endl
		<< "ID : " << sobj->id << endl
		<< "NAME : " << sobj->name << endl << endl;
}

void testLinkList() {
	display = displayItem;
	compare = cmprById;
	Student* s1 = new Student;
	s1->id = 10;
	s1->name = new char[20]{ "JAYESH" };

	insert(reinterpret_cast<void*>(s1));

	Student* s2 = new Student;
	s2->id = 20;
	s2->name = new char[20]{ "MANISH" };

	insert(reinterpret_cast<void*>(s2));

	Student* s3 = new Student;
	s3->id = 200;
	s3->name = new char[20]{ "SANJAI" };

	insert(reinterpret_cast<void*>(s3));

	Student* s4 = new Student;
	s4->id = 400;
	s4->name = new char[20]{ "AJIT" };

	insert(reinterpret_cast<void*>(s4));

	displayList();

	cout << endl << "Count : " << getCount() << endl;

	void* s = find(s2);

	if (s != nullptr)
		cout << endl << " FOUND at " << s << " MEMORY ADDRESS" << endl << endl;

	remove(s2);

	cout << endl << "Count : " << getCount() << endl;


	displayList();

	Student* s5 = new Student;
	s5->id = 4000;
	s5->name = new char[20]{ "MOHIT" };

	insertBefore(reinterpret_cast<void*>(s3), reinterpret_cast<void*>(s5));

	displayList();

	cout << endl << "Count : " << getCount() << endl;


	Student* s6 = new Student;
	s6->id = 5000;
	s6->name = new char[20]{ "PRIYANKA" };

	insertAfter(reinterpret_cast<void*>(s4), reinterpret_cast<void*>(s6));

	displayList();

	cout << endl << "Count : " << getCount() << endl;

}

int main()
{
	//xyz
	testLinkList();
}