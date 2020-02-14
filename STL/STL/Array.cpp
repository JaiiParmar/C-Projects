#include<iostream>
#include<iomanip>
#include<array>

using namespace std;

template <typename T > 
void display(T arr) {
	cout << endl
		<< "--------------------------" <<endl;
	for (auto i{ arr.cbegin() }; i != arr.cend(); i++) {
		cout <<setw(10)<< *i;
	}
	cout << endl
		<< "--------------------------";
}
//
//void main() {	
//
//	std::array<int, 5> arr{ 41,2,33,334 };
//	std::array<int, 5> arr2{ 6,7,8,9,0 };
//
//	display(arr);
//
//	cout << endl << "SIZE :  " << arr.size();
//	cout << endl << "MAX SIZE : " << arr.max_size();
//
//	std::sort(arr.begin(), arr.end());
//
//	display(arr);
//
//	std::reverse(arr.begin(), arr.end());
//
//	display(arr);
//
//	std::array<int, arr.size()> dummy{0};
//	display(dummy);
//	int j = 0;
//	for (auto i{ arr.rbegin() }; i != arr.rend(); i++) {
//		dummy[j++] = *i;
//	}
//
//	display(dummy);
//
//	arr.swap(arr2);
//
//	display(arr);
//	display(arr2);
//
//	cout << endl << arr.front();
//	cout << endl << arr.back();
//
//	int* p = arr.data();
//	cout << endl << *p;
//	cout << endl << *(++p);
//
//	array<int, 5>::iterator it = arr.begin();
//
//	while (it != arr.end()) {
//		cout << setw(20) << *it++;
//	}
//
//	for (auto i = arr.cbegin(); i != arr.cend(); i++) {
//
//		cout << endl << *i;
//	}
//
//
//	cout << endl << endl;
//
//	const std::array<int, 4> carr{ 3, 4, 5, 6 };
//
//	display(carr);
//	
//	std::get<0>(arr) = 5000;
//	std::get<2>(arr) = 4000;
//
//	display(arr);
//}
