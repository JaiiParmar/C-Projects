#include<iostream>
#include<list>
#include<forward_list>
#include<string>

using namespace std;
//
//template <typename T>
//void display(T& l, std::string title) {
//	std::cout << std::endl << std::endl << "----------------------------------------" << std::endl;
// 	std::cout << std::endl << title; 
//	for (auto i = l.begin(); i != l.end(); i++) {
//		std::cout << " --> " << *i;
//	}
//	std:: cout << std::endl << std::endl << "----------------------------------------";
//
//}
//
//void singleLinkList() {
//	std::forward_list<int> fl;
//	for (size_t i = 0; i < 10; i++)
//		fl.push_front(rand());
//
//	display(fl, "Original");
//
//	fl.reverse();
//	display(fl, "REVERSE :");
//
//	fl.sort();
//	display(fl, "SORTED :");
//
//	std::list<std::string> ll;
//
//	ll.push_back("JAYESH");
//	std::cout << std::endl << ll.size();
//
//	display(ll, "ORIGINAL : ");
//
//}
//
//struct Student {
//	int id;
//	string name;
//};
//struct idComparer {
//	bool operator()(Student& s1, Student& s2) {
//		return s1.id < s2.id;
//	}
//};
//struct nameComparer {
//	bool operator()(Student& s1, Student& s2) {
//		return s1.name < s2.name;
//	}
//};
//
//
//
//void display(Student s) {
//	cout << endl << "ID : " << s.id << "          NAME : " << s.name;
//}
//
//template <typename T>
//void fillRandom(T& q) {
//	for (int i = 0; i < 10; i++)
//	{
//		Student s;
//		s.id = rand();
//		s.name = "XYA";
//		q.push(s);
//	}
//	cout << endl << "FILLED";
//}
//
//template <typename T>
//void display(T& pq)
//{
//	cout << endl << endl << "START :";
//
//	while (!pq.empty()) {
//		display(pq.top());
//		pq.pop();
//	}
//}
//
//void list() {
//
//	std::list<Student> idlist;
//	//fillRandom(idlist);
//	display(idlist);
//	std::list<Student> namelist;
//	//fillRandom(namelist);
//	display(namelist);
//
////}
//template <typename rt, typename t1, typename t2>
// rt check(t1 t, t2 tt) {
//	return t > tt ? t : tt;
//}
//
//void main() {
//	cout << check<size_t, int, char>(10, 'a');
//}
