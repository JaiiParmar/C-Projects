#include "Faculty.h"
#include "Meeting.h"
#include "Calender.h"

void Faculty::addMeeting(const Meeting& met) {
	mCal.saveMeetingDay(met);
}