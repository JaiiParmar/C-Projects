

#pragma once
#include <string>
class B
{

private:
	std::string title;
	A *contactA;

public:
	B();
	void setTitle(std::string);
	void setContactA(A*);


	std::string getTitle() const;
	A* getContactA() const;
};