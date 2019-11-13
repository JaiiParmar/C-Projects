#include<iostream>
#include<list>
#include<forward_list>

void main() {
	std::forward_list<int> fl;
	for (size_t i = 0; i < 10; i++)
		fl.push_front(rand());
	for (auto i = fl.begin(); i != fl.end(); i++) {
		std::cout << " -- " << *i;
	}
}
