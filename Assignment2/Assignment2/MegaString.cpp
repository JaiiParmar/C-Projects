
#include "MegaString.h"
#include <string>
#include <iostream>

// Defualt
MegaString::MegaString() {
	p = nullptr;
	len = 0;
}

// Overloaded.
MegaString::MegaString(const char* s, size_t l)
{
	len = l + 1;
	p = new char[len];
	strcpy_s(p, len, s);
}

// Copy
MegaString::MegaString(const MegaString& sc)
{
	Allocate(sc);
}

// Overload =
MegaString& MegaString::operator=(const MegaString& sc)
{
	Allocate(sc);
	return *this;
}

void MegaString::Allocate(const MegaString& sc)
{
	len = sc.len;
	p = new char[len];
	strcpy_s(p, len, sc.p);
}

void MegaString::display()
{
	std::cout << p << std::endl;
}

size_t MegaString::getLen()
{
	return this->len;
}

MegaString::~MegaString() 
{
	delete(p);
	p = nullptr;
	len = 0;
}


// TODO :: 5 Operators.

// ==	
bool operator ==(const MegaString& m, const MegaString& n)
{
	if (strcmp(m.p, n.p) == 0)
		return true;
	return false;
}

// != 
bool operator !=(const MegaString& m, const MegaString& n)
{
	if (strcmp(m.p, n.p) != 0)
		return true;
	return false;
}

// < 
bool operator <(const MegaString& m, const MegaString& n)
{
	if (strcmp(m.p, n.p) == -1)
		return true;
	return false;
}

// >
bool operator >(const MegaString& m, const MegaString& n)
{
	if (strcmp(m.p, n.p) == 1)
		return true;
	return false;
}

// +
MegaString MegaString::operator +(const MegaString& m)
{
	/*
		I tried it using Allocate Method. But there was a seriou error
	*/
	MegaString mm;
	mm.len = (this->len + m.len)-1;
	mm.p = new char[mm.len]; 
		// first copy first string.
	strcpy_s(mm.p, this->len, this->p);
		// concat second string.
    strcat_s(mm.p, mm.len, m.p);
	return mm;
}

// +=
void MegaString::operator +=(const MegaString& m)
{
		// store current data on temp memory
	char* tp = this->p;
	size_t llen = this->len;
		// allocate new memory
	this->len = (this->len + m.len) - 1;
	this->p = new char[this->len];
		//copy old data + additional data.
	strcpy_s(this->p, this->len, tp);
	strcat_s(this->p, this->len, m.p);

}






