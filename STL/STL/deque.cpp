#include<iostream>
#include<deque>
template <typename T>
void showDeque(T& d) {

	std::cout << std::endl << " DEQUE :" << std::endl << std::endl;
	for (auto i = d.begin(); i != d.end(); i++) {
		std::cout << " --> " << *i;
	}
}
template <typename T>
void FillUp(T& dq, int size) {
	for (size_t i = 0; i < size; i++)
	{
		//dq.push_back(rand());
		//dq[i] = rand();
		dq.at(i) = rand();
	}

	std::cout << std::endl << "FILLED UP" << std::endl << std::endl;
}


void main() {
	
	std::deque<int> dq(10);

	FillUp(dq, 9);
	showDeque(dq);
	dq.push_back(11111);
	dq.emplace_front(121212);
	showDeque(dq);
	std::cout << std::endl << "SIZE : " << dq.size();
	dq.resize(5);	
	showDeque(dq);
	std::cout << std::endl << "SIZE : " << dq.size();

	dq.resize(10);
	showDeque(dq);
	std::cout << std::endl << "SIZE : " << dq.size();

	dq.push_back(1000000);
	showDeque(dq);
	std::cout << std::endl << "SIZE : " << dq.size();

	dq.erase(dq.begin() + 5, dq.end() - 1);
	showDeque(dq);
	std::cout << std::endl << "SIZE : " << dq.size();

	dq.insert(dq.cbegin() + 5, 4 ,9999999);
	showDeque(dq);
	std::cout << std::endl << "SIZE : " << dq.size();

}

