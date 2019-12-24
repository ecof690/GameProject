#include "Asteroit.h"
#include <time.h>

Asteroit::Asteroit() {
	health = 0;
	speed = 0;
}//End of default constructor.

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
	
