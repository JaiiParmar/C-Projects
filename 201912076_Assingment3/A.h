
#pragma once
#include <string>
class B;

class A
{

private: 
	std::string title;
	B* contactB;	

public:
	A();
	void setTitle(std::string);
	std::string getTitle() const ;
	void setContactB(B*);
	B* getContactB() const;
};

