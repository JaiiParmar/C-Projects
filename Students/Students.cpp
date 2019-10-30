// Students.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

struct Student {     
	int id;
	float cpi;
	char* name;
};

/*
	Reading the data from the file.
*/
void readData() {
	char data[100];  // for storing name temporary 
	char tab;			

	ifstream f("StudentsData.txt", ios::in);		// open file.

	if (f.is_open()) {						// if file is open

		while (!f.eof()) {					// till end of file.
			Student* s = new Student;		
			f >> s->id >> s->cpi;			// I don't know how it is working.
			f.get(tab);						// and this alos.
			f.getline(data, 100);			
			s->name = new char[strlen(data) + 1];
			strcpy_s(s->name, strlen(data) + 1, data);
			cout << endl
				<< s->id << " " << s->name << s->cpi << endl;
		}

	}

	else {							// if file is not open
		cout << endl << "Error while opening file" << endl;
	}

	f.close();
}

/*
	Writing the data.
*/

void writeData() {
	ofstream fout("MScIt.txt", ios::out);

	if (!fout.is_open()) {		// if failed to open the file.
		cout << endl << "Error while opening file." << endl;
		return;
	}

	fout << "HelloWorld";  // wring in the file.
	fout.close();
	cout << endl << "Successfully written the data!" << endl;
}


int main()
{
	//readData();
	writeData();		
	return 0;
}

