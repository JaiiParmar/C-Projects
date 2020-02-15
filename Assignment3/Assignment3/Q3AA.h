#pragma once
#include "Q3BB.h"
#include "Q3CC.h"

class Q3AA
{
private :
	//speaker of the phone
	Q3BB speaker;
	//camera of the phone
	Q3CC camera;
public:
	Q3AA(const Q3BB&, const Q3CC&);
	void spakerOn();
	void cameraOn();
	void flashOn();
};

