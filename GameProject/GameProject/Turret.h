#pragma once
#include "Gun.h"

class Turret :public Gun {

public:
	Turret();
	void fire(int, int, int);
	int hitWall(int, int);

private:
	int dist;



};




