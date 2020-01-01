#pragma once
#include "rlutil.h"

class SpaceShip {
public:
	SpaceShip();
	void setFuel(int);
	void setArmor(int);
	void setCoin(int);
	int getFuel();
	int getArmor();
	int getCoin();

protected:
	int fuel;
	int armor;
	int coin;	//This feature will be added later.
};

