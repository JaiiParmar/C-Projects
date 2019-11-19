#include<iostream>
#include<queue>
#include<string>
#include<iomanip>
#include<vector>

using namespace std;

template <typename T>
void display(T& pq)
{
	cout << endl << endl << "START :";
	while(!pq.empty()){
		cout << setw(10) << pq.top();
		pq.pop();
	}
}

void main() {
	
	priority_queue<string, vector<string>, greater<string>> pq;
	
	pq.push(string("Manish"));
	pq.push(string("Ajit"));
	pq.push(string("Sanjai"));
	pq.push(string("Priyanka"));
	pq.push(string("Neha"));
	display(pq);
}