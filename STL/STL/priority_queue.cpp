#include<iostream>
#include<queue>
#include<string>
#include<iomanip>
#include<vector>

#include<string>

using namespace std;

struct Student {

	int id;
	string name;


};
void display(Student s) {
	cout << endl << "ID : " << s.id << "          NAME : " << s.name;
}

struct idComparer {
	bool operator()(const Student& s1, const Student& s2)
	{
		return  s1.id < s2.id;
	}
};

struct nameComparer {
	bool operator()(const Student& s1, const Student& s2) {
		return s1.name < s2.name;
	}
};
template <typename T> 
void fillRandom(T& q) {
	for (int i = 0; i < 10; i++)
	{
		Student s;
		s.id = rand();
		s.name = "XYA";
		q.push(s);
	}
	cout << endl << "FILLED";
}

template <typename T>
void display(T& pq)
{
	cout << endl << endl << "START :";

	while(!pq.empty()){
		display(pq.top());
		pq.pop();
	}
}

//int main() {
//
//	priority_queue<Student,  vector<Student>,	nameComparer> pq;
//	fillRandom(pq);
//	display(pq);
//	return 0;
//}

