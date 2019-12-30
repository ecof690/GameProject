#pragma once

//Headers..
#include <iostream>
#include <string>
#include "rlutil.h"

using namespace std;

class Asteroit {
protected:
	int health, damage, x_cor, y_cor;
	double speed;
public:
	int fuel_x, fuel_y;
	Asteroit();
	int getDamage();
	int getHealth();
	void createFuel();
	void printFuel();
	int* getCoordinates(void);
	virtual void calculater(void);
	virtual void print() = 0;
	void setCor(int, int);
	void setHealth(int);
};
