#include<iostream>
#include<list>
#include<forward_list>
#include<string>

template <typename T>
void display(T& l, std::string title) {
	std::cout << std::endl << std::endl << "----------------------------------------" << std::endl;
 	std::cout << std::endl << title; 
	for (auto i = l.begin(); i != l.end(); i++) {
		std::cout << " --> " << *i;
	}
	std:: cout << std::endl << std::endl << "----------------------------------------";

}
//
//void main() {
//
//	std::forward_list<int> fl;
//	for (size_t i = 0; i < 10; i++)
//		fl.push_front(rand());
//	display(fl, "Original");
//
//	fl.reverse();
//	display(fl, "REVERSE :");
//
//	fl.sort();
//	display(fl, "SORTED :");
//
//	std::list<std::string> ll;
//	ll.push_back("JAYESH");
//	std::cout << std::endl <<  ll.size();
//	display(ll , "ORIGINAL : " );
//}
