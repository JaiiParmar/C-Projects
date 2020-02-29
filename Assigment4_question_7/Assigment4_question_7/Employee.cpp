#include "Employee.h"
#include <string>
#include "Person.h"

Employee::Employee() = default;

Employee::Employee(std::string name, size_t empId, std::string empDes) : Person(name){
	this->empId = empId;
	this->empDes = empDes;
}

void Employee::setEmpId(size_t empId) {
	this->empId = empId;
}

void Employee::setEmpDes(std::string empDes) {
	this->empDes = empDes;
}

size_t Employee::getEmpId()const { 
	return empId; 
}

std::string Employee::getEmpDes()const {
	return empDes; 
}