#include "Asteroit.h"
#include <time.h>

Asteroit::Asteroit() {
	health = 0;
	damage = 0;
	speed = 0;
	x_cor = 0;
	y_cor = 0;
	fuel_x = -1;
	fuel_y = -1;
}//End of default constructor.

int Asteroit::getDamage() {
	return damage;
}//End of get-method.


void Asteroit::calculater(void) {
	x_cor = (rand() % 116) + 2;
	y_cor = (rand() % 27) + 2;
}//End of method.


int * Asteroit::getCoordinates(void) {
	int arr[2];
	arr[0] = x_cor;
	arr[1] = y_cor;
	return arr;
}//End of method.

void Asteroit::setCor(int x, int y) {
	x_cor = x;
	y_cor = y;
}

void Asteroit::setHealth(int a) {
	health -= a;
}

int Asteroit::getHealth() {
	return health;
}

void Asteroit::createFuel() {
	fuel_x = x_cor;
	fuel_y = y_cor;
}

void Asteroit::printFuel() {
	rlutil::setColor(8);
	rlutil::locate(fuel_x, fuel_y);
	cout << (char)232;
	rlutil::setColor(7);
}
