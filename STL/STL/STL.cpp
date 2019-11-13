// STL.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <iomanip>

using namespace std;

/*
1. For an array arr, arr[0] is actually syntactic shorthand for *(arr+0).
Write a program that prints all elements of an integer array using this alternative notation (i.e. pointer notation).
*/

void question1() {
	
	vector<int> arr;
	
	arr.push_back(10);
	arr.push_back(22);
	arr.push_back(44);
	arr.push_back(66);
	arr.push_back(111);
	arr.push_back(222);
	arr.push_back(333);

	cout << endl;
	int* p = &arr[0];
	for (int i = 0; i < arr.size(); i++) {
		cout << setw(10) << *(p + i);
	}
	/*
		OR
	*/
	cout << endl << endl;
	for (auto i = arr.begin(); i != arr.end(); i++) {
		cout << endl << *i;
	}
}
/*
2. Repeat the first exercise for a two dimetional array twoD[3][4]
*/
void question2() {
	unsigned int n = 3;
	vector<  vector<int>	> arr(n);
	for (int i = 0; i < n; i++) {
		vector<int> temp;
		temp.push_back(rand());
		temp.push_back(rand());
		temp.push_back(rand());
		
		arr[i] = temp;

	}
	for (auto i = arr.begin(); i != arr.end(); i++) {
		for (auto j = (*i).begin(); j != (*i).end(); j++) {
			cout <<setw(10) << *j;
		}
		cout << endl;
	}
}

/*
3. Repeat the first exercise for a three dimentional array threeD[2][3][4]
*/
void question3() {
	
	unsigned int page = 2, row = 3, col = 3;
	
	vector<vector<vector<int>>> arr(2);
	
	for (int p = 0; p < page; p++) {

		vector<vector<int>> tempRow(row);
		
		for (int r = 0; r < row; r++) {

			vector<int> tempCol(col);
		
			tempCol.push_back(rand());   
			tempCol.push_back(rand());
			tempCol.push_back(rand());
		}

		arr[p] = tempRow;
	}

	for (auto i = arr.begin(); i != arr.end(); i++) {
		for (auto j = (*i).begin(); j != (*i).end(); j++) {
			for (auto k = (*j).begin(); k != (*j).end(); k++) {
				cout << setw(10) << *k;
			}
			cout << endl;
		}
		cout << endl;
	}
}

/*
4. Write a program that calculates the number of the meaningful values in array using subtraction of pointers. 
Assume that array is of +ve integers, and 0 is used as flag signalling end of the meaningful elements of array 
and that the meaningful values are contiguous. 
Like: An array with 3,4,5,6,0,0,0 should return 4.
*/
void question4() {
	vector<int> arr{ 11,22,33,44,55,66,0,0,0 };
	int* start = &arr[0];
	int* end = &arr[0];
	while (*end != 0) {
		end++;
	}
	cout << endl << endl << "MEANIGNFUL : " << end - start;
	cout << endl;
}

void question5() {
	
	vector<int> arr{ 3,4,5,6,7,8,9 };

	cout << endl << endl << " ORIGINAL :  " << endl;
	for (auto i = arr.begin(); i != arr.end(); i++) {
		cout << setw(10) << *i;
	}

	cout << endl << endl << " REVERSE :  " << endl;
	for (auto i = arr.rbegin(); i != arr.rend(); i++) {
		cout << setw(10) << *i ;
	}
	cout << endl;

}


//int main()
//{
	//question1();
	//question2();
	//question3();
	//question5();
	//question4();
	//basic();
	//vectorWithPushPop();
	//usingArra();
//}


void basic() {
	vector<float> myvec(5);
	float x = 1.1f;
	for (auto i = myvec.begin(); i != myvec.end(); i++)
	{
		*i = x + 0.1;
		x += 0.1;
	}
	for (auto i = myvec.begin(); i != myvec.end(); i++) {
		cout << endl << *i;
	}
}

void vectorWithPushPop()
{

	string name;

	vector<string> names;

	for (size_t i = 0; i < 5; i++)
	{
		cout << "Enter your name : ";
		cin >> name;
		names.push_back(name);
	}

	for (auto i = names.begin(); i != names.end(); i++)
	{
		cout << endl << *i;
	}


	cout << endl << endl << "Reverse" << endl << endl;


	for (auto ii = names.rbegin(); ii != names.rend(); ii++) {
		cout << endl << *ii;
	}


	cout << endl << "Size : " << names.size();
	cout << endl << "Capacity : " << names.capacity();
	names.shrink_to_fit();
	cout << endl << endl << "Shrinking complete" << endl << endl;
	cout << endl << "Size " << names.size();
	cout << endl << "Capacity : " << names.capacity();

	vector<string>::iterator i1 = names.begin();
	vector<string>::iterator i2 = names.end();
	++i1;
	--i2;
	names.erase(i1, i2);
	cout << endl << endl << "After Erase() : " << endl << endl;
	for (auto it = names.begin(); it != names.end(); it++) {
		cout << " " << *it;
	}

	cout << endl << endl << " using \" Empty \" " << endl << endl;
	cout << names.empty() << endl;

	names.clear();


	cout << endl << endl << " using \" Empty \" " << endl << endl;
	cout << names.empty() << endl;

}

void usingArra()
{
	const unsigned int MAX = 100;
	const unsigned int MIN = 50;
	array<int, MAX> arr;
	array<int, MAX> arr2;

	for (size_t i = 0; i < (MAX); i++)
	{
		arr[i] = rand();
		arr2[i] = rand();
	}
	cout << endl << endl << "INITILIZES  " << endl;


	cout << endl << "ARRAY 1 :: Printing using at() function" << endl;
	for (size_t i = 0; i < arr.size(); i++)
	{
		cout << " " << arr.at(i);
	}

	cout << endl << " SIZE :  " << arr.size() << endl;
	cout << endl << " MAX SIZE :  " << arr.max_size() << endl;

	cout << endl << "ARRAY 2 :: Printing using at() function" << endl;
	for (size_t i = 0; i < arr2.size(); i++)
	{
		cout << " " << arr2[i];
	}

	cout << endl << " SIZE :  " << arr2.size() << endl;
	cout << endl << " MAX SIZE :  " << arr2.max_size() << endl;

	arr.swap(arr2);


	cout << endl << "ARRAY 1 :: Printing using at() function" << endl;
	for (size_t i = 0; i < arr.size(); i++)
	{
		cout << " " << arr.at(i);
	}

	cout << endl << " SIZE :  " << arr.size() << endl;
	cout << endl << " MAX SIZE :  " << arr.max_size() << endl;

	cout << endl << "ARRAY 2 :: Printing using at() function" << endl;
	for (size_t i = 0; i < arr2.size(); i++)
	{
		cout << " " << arr2[i];
	}

	cout << endl << " SIZE :  " << arr2.size() << endl;
	cout << endl << " MAX SIZE :  " << arr2.max_size() << endl;

	arr.fill(0);
	cout << endl << "ARRAY 1 :: Printing using at() function" << endl;
	for (size_t i = 0; i < arr.size(); i++)
	{
		cout << " " << arr.at(i);
	}

}