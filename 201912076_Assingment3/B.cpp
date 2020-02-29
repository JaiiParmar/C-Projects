#include "B.h"
#include "A.h"
#include <string>

B::B() = default;

void B::setTitle(std::string title) {
	this->title = title;
	contactA = nullptr;
}


void B::setContactA(A* a) {
	this->contactA = a;
}

std::string B::getTitle()const {
	return title;
}
A* B::getContactA()const {
	return contactA;
}


