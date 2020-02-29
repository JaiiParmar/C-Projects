#include "Secretry.h"
#include "Meeting.h"

void Secretry::arrangeMeeting(size_t date, size_t time ) const{
	adminOffice->setMeeting(date, time);
}

