#pragma once
#include<vector>
#include "Meeting.h"

class Calender
{
private:
	size_t currDay;
	size_t currMon;
	size_t currYear;
	std::vector<Meeting> meetings;
public:
	void saveMeetingDay(const Meeting&);
};

