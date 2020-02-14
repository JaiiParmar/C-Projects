#include "Aardvark.h"
#include <string>
#include "Animal.h"

Aardvark::Aardvark() = default;

Aardvark::Aardvark(std::string name, unsigned int weight) : Animal{ name, weight }
{

}

Aardvark::Aardvark(const Aardvark& aardvark) : Animal(aardvark)
{

}
