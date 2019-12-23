#pragma once
#include "Gun.h"

class Mortar :public Gun {

public:
	Mortar();
	void fire(int, int, int);
	int hitWall(int, int);
	void setLoc(int, int);
private:
	int locx;
	int locy;
};




