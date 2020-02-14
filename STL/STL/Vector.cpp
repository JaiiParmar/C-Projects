#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

template <typename X>
void display(X vec) {
	if (vec.empty())
	{
		cout << endl << "CONTAINER IS EMPTY" << endl;
		return;
	}
	cout << endl
		<< "-----------------------" << endl;

	for (auto i{ vec.cbegin() }; i != vec.cend(); i++) {
		cout << setw(10) << *i;
	}

	cout << endl
		<< "-----------------------" << endl;
}
template<typename V>
void sizexx(V& v) {

	cout << endl << "_______________________________________";
	cout << endl << "SIZE :" << v.size();
	cout << endl << "MAX_SIZE :" << v.max_size();
	cout << endl << "CAPACITY :" << v.capacity();
}
//
//int main() {
//
//	std::vector<int> v;
//	sizexx(v);
//	
//	v.push_back(2);
//	v.push_back(20);
//	v.push_back(200);
//	v.push_back(2000);
//	v.push_back(20000);
//
//	display(v);
//	sizexx(v);
//	
//	cout << endl;
//
//	cout << endl << "front :" << v.front();
//	cout << endl << "back :" << v.back();
//	
//	
//	std::vector<int> v2;
//	sizexx(v2);
//
//	for (int i{ 0 }; i < 10; i++)
//		v2.push_back(rand());
//	
//	v2.push_back(11);
//	display(v2);
//	sizexx(v2);
//
//
//	v2.assign(v.begin(), v.end());
//
//	display(v2);
//
//	sizexx(v2);
//
//	v.
//}