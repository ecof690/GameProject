#pragma once

//Headers..
#include "rlutil.h"
#include <iostream>
#include "SpaceShip.h"
#include "Asteroit.h"
#include "Large_ast.h"
#include "Medium_ast.h"
#include "Small_ast.h"
#include "Menu.h"
#include "Mortar.h"
#include "Turret.h"

using namespace std;

class Map {
public:
	Map();
	void print();
	void setWalls();
	int hitWall(int, int);
	int hitAsteroid(Asteroit&, int, int);
	void MortarFire(Asteroit&, int, int);
private:
	int row;
	int col;
	int score;
};




