#include "SpaceShip.h"

SpaceShip::SpaceShip() {
	fuel = 100;
	armor = 100;
}

void SpaceShip::setFuel(int a){
	fuel = a;
}

void SpaceShip::setArmor(int a){
	armor = a;
}

void SpaceShip::setCoin(int a){
	coin = a;
}

int SpaceShip::getFuel() {
	return(fuel);
}

int SpaceShip::getArmor() {
	return(armor);
}

int SpaceShip::getCoin(){
	return coin;
}

