#include<iostream>
#include<set>
#include<string>
#include<vector>
#include<unordered_set>

using namespace std;

struct Employee
{
	string name;
	unsigned int salary;
};
// advantage of separate comparer class is that we can have multiple comparers.
// if we overload () operator in Employee itself, we don't have easy way of comparing
// by salary or name.
struct EmployeeSalaryComparer
{
	bool operator()(const Employee& e1, const Employee& e2) const
	{
		return e1.salary < e2.salary;
	}
};
struct EmployeeNameComparer
{
	bool operator()(const Employee& e1, const Employee& e2) const
	{
		return e1.name > e2.name;
	}
};
struct EmployeeNameLengthComparer
{
	bool operator()(const Employee& e1, const Employee& e2) const
	{
		return e1.name.length() < e2.name.length();
	}
};
vector<Employee> CreateSomeEmployees()
{
	vector<Employee> v;
	v.push_back({ "Boris Malan", 390000 });
	v.push_back({ "Yaroniti Mesker", 300000 });
	v.push_back({ "Sonit Zombber", 290000 });
	v.push_back({ "Sisi Peti", 490000 });
	v.push_back({ "Mark Vehrunvich", 440000 });
	v.push_back({ "Sorisa Baleik", 190000 });
	v.push_back({ "Boalist Moriti", 600000 });
	v.push_back({ "Aron Xaverit", 590000 });
	v.push_back({ "Michele Sam", 790000 });
	v.push_back({ "Rose Maline", 500000 });
	v.push_back({ "Beth Vichir", 590000 });
	v.push_back({ "Roberto Mora", 290000 });
	v.push_back({ "Monica Kuto", 290000 });
	v.push_back({ "Albert Victor", 190000 });
	v.push_back({ "Yesis Mordan", 190000 });
	v.push_back({ "Kep Jemia", 290000 });
	v.push_back({ "Amur Kahn", 190000 });

	return v;
}
void Set() {

	auto es = CreateSomeEmployees();

	set<Employee, EmployeeNameComparer> s;
	for (auto e : es) {
		s.insert(e);
	}

	string searchFor = "Sisi Peti";
	auto eptr = s.find({ searchFor, 0 });
	if (eptr == s.end()) {
		cout << " Not Found " << endl;
	}
	else {
		cout << "Found. " << endl
			<< "Name " << eptr->name << ", Salary = " << eptr->salary << endl;
	}

	cout << endl << endl;

	cout << "Employees Sorted by name : " << endl;
	auto reptr = s.rbegin();
	while (reptr != s.rend()) {
		cout << (reptr++)->name << endl;
	}
}
void UnorderedSet() {
	auto es = CreateSomeEmployees();
	unordered_set<string> ss;

	for (auto e : es) {
		ss.insert(e.name);
	}

	string searchFor = "Sisi Peti";

	auto eptr = ss.find({ searchFor, 0 });
	if (eptr == ss.end()) {
		cout << "Not Found" << endl;
	}
	else {
		cout << " Found " << endl
			<< "Name : " << *eptr << endl;
	}

	cout << " Employeesin unordered set -" << endl;
	auto reptr = ss.begin();
	while (reptr != ss.end())
		cout << *(reptr++) << endl;
}
void MultiSets() {
	auto es = CreateSomeEmployees();
	multiset<Employee, EmployeeSalaryComparer> ms;
	unordered_set<int> ums;

	for (auto e : es) {
		ms.insert(e);
		ums.insert(e.salary);
	}
	cout << "Employees with salary 29000 = " << ms.count({ "", 290000 }) << endl;
	cout << "Employees with salary 59000 = " << ums.count(590000) << endl;
}


int main() {
	MultiSets();
}

