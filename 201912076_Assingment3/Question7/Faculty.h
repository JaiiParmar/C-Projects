#pragma once
#include "Meeting.h"
#include "Calender.h"
#include "Employee.h"

class Faculty : public Employee
{
private:
	Calender mCal;
public:
	void addMeeting(const Meeting&);
};

