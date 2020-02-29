
#include "Q3AA.h"
#include <string>
#include "Q3BB.h"
#include "Q3CC.h"


Q3AA::Q3AA(const Q3BB& speaker, const Q3CC& camera)
{
	this->speaker = speaker;
	this->camera = camera;
}

void Q3AA::spakerOn() 
{
	speaker.on();
}
void Q3AA::cameraOn()
{
	camera.cam();
}
void Q3AA::flashOn() {
	camera.flash();
}
