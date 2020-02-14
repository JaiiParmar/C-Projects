#pragma once
#include <string>
class Animal
{
private:
	std::string name;
	unsigned int weight;
public:
	Animal();
	Animal(std::string, unsigned int);
	Animal(const Animal&);
protected:std::string who();
};

