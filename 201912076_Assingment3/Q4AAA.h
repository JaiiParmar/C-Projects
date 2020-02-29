#pragma once
#include "Q4BBB.h"
#include "Q4CCC.h"

class Q4AAA
{

private:
	//speaker of the phone
	Q4BBB* speaker;
	//camera of the phone
	Q4CCC* camera;

public:
	Q4AAA(Q4BBB* const,Q4CCC* const);
	void spakerOn();
	void cameraOn();
	void flashOn();
};
