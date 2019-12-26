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
	Asteroit();
	int getDamage();
	int* getCoordinates(void);
	virtual void calculater(void);
	virtual void print()=0;
	void setCor(int,int);
};
