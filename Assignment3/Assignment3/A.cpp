#include "A.h"
#include "B.h"
#include <string>

A::A() = default;

void A::setTitle(std::string title) {
	this->title = title;
	contactB = nullptr;
}

void A::setContactB(B* b) {
	contactB = b;
}

std::string A::getTitle()const {
	return title;
}
B* A::getContactB() const {
	return contactB;
}


