#pragma once

//Headers..
#include <iostream>
#include <string>
#include "rlutil.h"

using namespace std;

class Asteroit {
protected:
	int health, x_cor, y_cor;
	double speed;
public:
	Asteroit();
	int* getCoordinates(void);
	virtual void calculater(void);
	virtual void print(void) = 0;
};
