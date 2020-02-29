#pragma once
#include "Employee.h"
#include "Meeting.h"
#include "Secretry.h"

class Director : public Employee
{

private:
	Secretry* sec;

public:
	void callMeeting(size_t, size_t) const;
	void setSecretry(Secretry* sec);
};


