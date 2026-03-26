#pragma once
#include "Actor.h"


class AWall: public AActor
{

public:
	AWall(char InMesh = '*');
	virtual ~AWall();


	void Render();
};

