#pragma once
#include "Venue.h"

class Meeting
{
private:

	size_t startTime;
	size_t timeDur;
	size_t date;
	Venue* metVen;

public:
	Meeting(size_t, size_t);
	void setTimeDur(size_t);
	void setMetVen(Venue*);

};

