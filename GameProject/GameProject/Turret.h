#pragma once
#include "Gun.h"
#include "Asteroit.h"

class Turret :public Gun {

public:
	Turret();
	void fire(int, int, int);
	int hitWall(int, int);
        int  hitAsteroit(int , int ,int,Asteroit&);
private:
	int dist;
};




