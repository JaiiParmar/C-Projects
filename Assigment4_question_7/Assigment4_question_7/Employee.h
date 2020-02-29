#pragma once
#include <string>
#include "Person.h"

class Employee : public Person
{

private:

	size_t empId;
	std::string empDes;

public:
	
	Employee();
	Employee(std::string, size_t, std::string);		
		
	void setEmpId(size_t);
	void setEmpDes(std::string);

	size_t getEmpId() const;
	std::string getEmpDes() const;
};

