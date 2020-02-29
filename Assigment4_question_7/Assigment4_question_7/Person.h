#pragma once
#include<string>

class Person
{
private: 
	std::string name;

public:
	Person();
	Person(std::string);
	std::string getName() const;
	void setName(std::string);

};

