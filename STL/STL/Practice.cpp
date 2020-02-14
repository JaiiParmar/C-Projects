#include<iostream>
#include<string>
#include<utility>
#include <string_view>
#include<array>
#include<vector>
#include<iomanip>

using namespace std;


struct Student {
	unsigned int id;
	std::string name;
	double cpi;
};

template <typename T>
void meta(T& v) {
	cout << endl << "SIZE : " << v.size();
	cout << endl << "CAPACITY : " << v.capacity();
}

template<typename T> 
void display(T& o) {
	cout << endl;
	for (auto i{o.begin()}; i != o.end() ; i++)
	{
		cout << setw(10) << *i;
	}
	cout << endl;
}

void fillRandom(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		v[i] = rand() %  10 ;
	}
	cout << endl << "Filled "<< endl;
}
void check(vector<int>& v) {
	meta(v);
	display(v);
}/*
int main()
{
	vector<int> v{2,3,4,5,6};
	
	check(v);

	v.push_back(10);
	v.push_back(30);
	
	v[0]= 1000;
	
	v.at(3) = 10;
	
	int* p = v.data();
	
	check(v);

	v.insert(v.cbegin() + 5, 5, 100);
	check(v);
	v.resize(5);
	check(v);

	v.shrink_to_fit();
	check(v);


	v.erase(v.begin() + 1, v.begin() + 1 + 3);
	check(v);

	v.insert(v.begin() + 1, 5, 200000);
	check(v);

	vector<int> v2(v.size());
	fillRandom(v2);
	check(v2);

	v.swap(v2);
	check(v2);

	v.assign(10, 909090);
	check(v);

	cout << "front ::" <<v2.front();
	cout << endl;
	cout << "back :  "<< v2.back();
	
	v2.pop_back();
	check(v2);


}*/




	