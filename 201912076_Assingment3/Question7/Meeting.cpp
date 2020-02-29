#include "Meeting.h"

Meeting::Meeting(size_t date, size_t time) {
	this->date = date;
	this->startTime = time;
}

void Meeting::setMetVen(Venue* ven) {
	this->metVen = ven;
}

void Meeting::setTimeDur(size_t timeDur) {
	this->timeDur = timeDur;
}