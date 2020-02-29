#include "Director.h"

void Director::setSecretry(Secretry* sec) {
	this->sec = sec;
}

void Director::callMeeting(size_t date, size_t time) const{
	sec->arrangeMeeting(date, time);
}