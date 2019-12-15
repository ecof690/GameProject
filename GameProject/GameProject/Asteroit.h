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
public:
	Asteroit();
	virtual void color(string);


};