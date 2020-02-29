#include "Q4AAA.h"

#include <string>
#include "Q4BBB.h"
#include "Q4CCC.h"


Q4AAA::Q4AAA(Q4BBB* const speaker,Q4CCC* const camera)
{
	this->speaker = speaker;
	this->camera = camera;
}

void Q4AAA::spakerOn()
{
	speaker->on();
}
void Q4AAA::cameraOn()
{
	camera->cam();
}
void Q4AAA::flashOn() {
	camera->flash();
}
