#pragma once

#include <iostream>
#include "rlutil.h"

using namespace std;

class Gun {
public:
	Gun();
	virtual void fire(int, int, int) = 0;
	virtual int hitWall(int, int) = 0;
protected:
	int damage;
};

