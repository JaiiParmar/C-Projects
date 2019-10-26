#include<iostream>
#include"LinkList.h"

using namespace std;

struct Student {
	int id;
	char* name;
};

void displayItem(const void* s) {
	Student* sobj = (Student*)s;
	cout << endl
		<< "ID : " << sobj->id << endl;
		//<< "NAME : " << sobj->name<< endl<< endl;
}

int main()
{
	display = displayItem;
	Student* s = new Student;
	s->id = 10;
	s->name = new char[10] {"Jayesh"};
	insert(reinterpret_cast<void*>(&s));
	Student* s2= new Student;
	s2->id = 20;
	s2->name = new char[10] {"manish"};
	insert(reinterpret_cast<void*>(&s2));
	displayList();
	return 0;
}