#pragma once

//Headers..
#include <iostream>
#include <string>
#include "rlutil.h"

using namespace std;

class Asteroit {
protected:
	int health;
	double speed;
	int* calculater(int);
public:
	Asteroit();
	virtual void print(int);

};
