#pragma once
#include "Employee.h"
#include "Meeting.h"
#include "AdminOffice.h"
class Secretry : public Employee
{
private:
	AdminOffice* adminOffice;
	Meeting met;
public:
	void arrangeMeeting(const Meeting&) const;
};

