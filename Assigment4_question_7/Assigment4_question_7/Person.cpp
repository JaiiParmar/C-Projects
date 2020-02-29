#include "Person.h"

#include<string>


Person::Person() = default;

Person::Person(const std::string  name) {
	this->name = name;
}

std::string Person::getName() const {
	return name;
}
void Person::setName(std::string name) {
	this->name = name;
}