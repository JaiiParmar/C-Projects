#include<iostream>
#include<queue>
#include<string>
#include<iomanip>

using namespace std;

template <typename T>
void display(T& q, std::string title) {
	cout << endl << endl;
	cout << title;
	while (!q.empty()) {
		cout << setw(10) << q.front();
		q.pop();
	}

}
//
//int main() {
//
//	std::queue<int>	q;
//	
//	q.push(100);
//	q.push(200);
//	q.push(300);
//	q.push(400);
//
//	std::queue<int> q2;
//	q.swap(q2);
//
//	std::cout << std::endl << "SIZE : " << q.size();
//	
//	display(q, "Q :");
//
//	cout << std::endl << "SIZE :" << q2.size();
//
//	cout <<endl << "BACK :  "<<q2.back();
//	cout << endl << "FRONT:  " << q2.front();
//
//
//}