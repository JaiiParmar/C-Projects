
#include "Singleton.h"

Singleton:: Singleton(){};

Singleton* Singleton::getInstance() 
{
	if (this->obj == nullptr) {
		obj = new Singleton();
	} 
	return this->obj;
}