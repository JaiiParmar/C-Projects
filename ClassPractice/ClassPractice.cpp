// ClassPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

void print_name(string name);

int getRandomNum();

void functionPointerEx() 
{
	void (*fp)(string);
	int (*p)();
	fp = print_name;
	fp("jai");
	p = getRandomNum;
	cout << endl << p();
}

void MDarray() 
{
	int* (*(*arr)) { nullptr };

	arr = new int** [2]{};

	for (size_t i = 0; i < 2; i++)
	{
		*(arr + i) = new int* [3]{};
		for (size_t j = 0; j < 3; j++)
		{
			*(*(arr + i) + j) = new int[3]{};
		}
	}

	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			for (size_t k = 0; k < 3; k++)
			{
				(*(*(*(arr + i) + j) + k)) = 10;
			}
		}
	}

	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			for (size_t k = 0; k < 3; k++)
			{
				cout << endl << *(*(*(arr + i) + j) + k);
			}
		}
	}
}



bool init_array(int*** a)
{
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			for (size_t k = 0; k < 2; k++)
			{
				*(*(*(a + i) + j) + k) = rand();
			}
		}
	}
	return true;
}

void display_array(int*** a) {
	for (size_t i = 0; i < 2; i++)
	{
		cout << endl << "page :" << i + 1;
		for (size_t j = 0; j < 2; j++)
		{
			cout << endl;
			for (size_t k = 0; k < 2; k++)
			{
				cout << "\t" << *(*(*(a + i) + j) + k);
			}
		}
	}
}

void MDArrayFPointer()
{
	int*** a{ nullptr };

	a = new int** [2]{};
	for (size_t i = 0; i < 2; i++)
	{
		*(a + i) = new int* [2]{};
		for (size_t j = 0; j < 2; j++)
		{
			*(*(a + i) + j) = new int[2]{};
		}
	}

	bool (*init)(int***);
	void (*dis)(int***);

	if (!init_array(a))
		cout << endl
		<< "Sorry! Array initilization failed.";

	display_array(a);

	init = init_array;
	dis = display_array;

	if (!init(a))
		cout << endl
		<< "Sorry! Array initilization failed.";

	dis(a);
}

struct Student
{
	unsigned int id;
	unsigned int cpi;
	char* name;
};

void display(Student* s)
{
	cout <<endl
		<< s->id << "  "<< s->name << "  " << s->cpi ;
}

void fileEx()
{
	
	char data[100];
	char tab;
	ifstream f("Students.txt", ios::in);
	void (*disPo)(Student*) = display;
	if (f.is_open())
	{
		while (!f.eof())
		{
			Student* s = new Student;
			f >> s->id >> s->cpi;
			f.get(tab);
			f.getline(data, 100);
			s->name = new char[strlen(data) + 1];
			strcpy_s(s->name, strlen(data) + 1, data);
			disPo(s);
		}
	}
}
void filePointerEx()
{
	void (*filep)();
	filep = fileEx;
	fileEx();
}
union ucolor
{
	int x;
	char y;
	float z;
};
void disu(ucolor uu)
{
	cout << endl << uu.x;
	cout << endl << uu.y;
	cout << endl << uu.z;
	cout << endl << "---------------------";
}
void unionEx() {
	ucolor	uu;
	ucolor* u = new ucolor{};
	uu.x = 10;
	disu(uu);
	uu.y = 'r';
	disu(uu);
	uu.z = 343.54;
	disu(uu);
}
int MDAarrayDeletion() {

	int*** arr{ nullptr };

	arr = new int** [2];

	for (size_t i = 0; i < 2; i++)
	{
		*(arr + i) = new int* [3];
		for (size_t j = 0; j < 3; j++)
		{
			*(*(arr + i) + j) = new int[3];
		}
	}
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			for (size_t k = 0; k < 3; k++)
			{
				*(*(*(arr + i) + j) + k) = rand();
			}
		}
	}
	for (size_t i = 0; i < 2; i++)
	{
		cout << endl << " page - " << i + 1;
		for (size_t j = 0; j < 3; j++)
		{
			cout << endl << "row - " << j + 1;
			for (size_t k = 0; k < 3; k++)
			{
				cout << "\t" << *(*(*(arr + i) + j) + k);
			}
		}
	}
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			delete[] * (*(arr + i) + j);
			*(*(arr + i) + j) = nullptr;
		}
		delete[] * (arr + i);
		*(arr + i) = nullptr;
	}
	delete[] arr;
	arr = nullptr;
	cout << endl << "DELETED";
	return 1;
}

void DynamicMemory();

void setting(unsigned char& settings, unsigned char& musk) {
	
}
int main()
{	
	return 0;
}	

void print_name(string name) 
{
	cout << endl << "Hello " << name;
}

void DynamicMemory() {
	size_t max{};

	std::cout << "How many primes would you like?";
	std::cin >> max;

	if (max == 0) return;

	auto* primes{ new unsigned[max] };

	size_t count{ 1 };
	primes[0] = 2;
	
	unsigned trial{ 3 };

	while (count < max) {
		bool isprime{ true };

		const auto limit = static_cast<unsigned>(std::sqrt(trial));
		
		for ( size_t i {}; primes[i] <= limit && isprime;i++)
		{
			isprime = trial % primes[i] > 0;
		}
		
		if (isprime) {
			primes[count++] = trial;
		}

		trial += 2;
	}

	// Output primes 10 to a line
	for (size_t i = 0; i < max; i++)
	{
		std::cout << std::setw(10) << primes[i];
		if ((i + 1) & 10 == 0)
			std::cout << std::endl;
	}
	std::cout << std::endl;
	delete[] primes;
	primes = nullptr;
}

void swap(int& x, int& y) {
	int t{ x };
	x = y;
	y = t;
}
void bubbleSort(int arr[], int n) {
	for (size_t i = 0; i < n - 1; i++)

		for (size_t j = 0; j < j - i - 1; j++)
		
			if (arr[j] > arr[j + 1]) 
				swap(arr[j], arr[j + 1]);

}

void selectionSort(int arr[], int n) {
	for (size_t i = 0; i < n; i++)
	{
		int min = i;
		bool flag = false;
		for (size_t j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min]) {
				min = j;
				flag = true;
			}
		}
		if (flag) {
			swap(arr[i], arr[min]);
		}
	}
}

int getRandomNum()
{
	return rand();
}