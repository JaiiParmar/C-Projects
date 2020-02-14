#include "Animal.h"
#include <string>

Animal::Animal() = default;

Animal::Animal(std::string name, unsigned int weight) {
	this->name = name;
	this->weight = weight;
}

Animal::Animal(const Animal& animal) {
	this->name = animal.name;
	this->weight = animal.weight;
}

std::string Animal::who() {
	return "Name : " + name + " \nWeight : " + std::to_string(weight);
}