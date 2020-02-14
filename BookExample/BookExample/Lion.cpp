#include "Lion.h"
#include <string>
#include "Animal.h"

Lion::Lion() = default;

Lion::Lion(std::string name, unsigned int weight) : Animal{name, weight}
{

}

Lion::Lion(const Lion & lion) : Animal(lion) 
{

}