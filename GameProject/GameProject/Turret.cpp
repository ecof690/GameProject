#include "Turret.h"

Turret::Turret() {
	dist = 10;  // fire distance
	damage = 10; //Fire damage of turret.
}

void Turret::fire(int j, int x, int y) {
	int i = 0, ax, ay, hit = -1;

	if (j == rlutil::KEY_LEFT) {  // If spaceship going left fire to the left.
		rlutil::hidecursor();
		while (true) {
			ax = x - i;
			ay = y;
			hit = hitWall(ax, ay);
			if (i == dist || hit != -1)
				break;
			gotoxy(x - i, y);
			rlutil::setColor(6);
			cout << "-";
			rlutil::resetColor();
			rlutil::msleep(20);
			gotoxy(x - i, y);
			cout << " ";
			i++;

		}
	}
	if (j == rlutil::KEY_RIGHT) { // If spaceship going right fire to the left.
		rlutil::hidecursor();
		while (true) {
			ax = x + i;
			ay = y;
			hit = hitWall(ax, ay);
			if (i == dist || hit != -1)
				break;
			gotoxy(x + i, y);
			rlutil::setColor(5);
			cout << "-";
			rlutil::resetColor();
			rlutil::msleep(20);
			gotoxy(x + i, y);
			cout << " ";
			i++;

		}
	}
	if (j == rlutil::KEY_UP) { // If spaceship going up fire to the left.
		rlutil::hidecursor();
		while (true) {
			ax = x;
			ay = y - i;
			hit = hitWall(ax, ay);
			if (i == dist || hit != -1)
				break;
			gotoxy(x, y - i);
			rlutil::setColor(5);
			cout << "|";
			rlutil::resetColor();
			rlutil::msleep(20);
			gotoxy(x, y - i);
			cout << " ";
			i++;

		}
	}
	if (j == rlutil::KEY_DOWN) { // If spaceship going down fire to the left.
		rlutil::hidecursor();
		while (true) {
			ax = x;
			ay = y + i;
			hit = hitWall(ax, ay);
			if (i == dist || hit != -1)
				break;
			gotoxy(x, y + i);
			rlutil::setColor(5);
			cout << "|";
			rlutil::resetColor();
			rlutil::msleep(20);
			gotoxy(x, y + i);
			cout << " ";
			i++;

		}
	}
}

int Turret::hitWall(int x, int y) {
	int i;

	if (y == 1) {
		return(0);
		rlutil::locate(x, y); rlutil::setColor(7); cout << "#";
	}
	else if (y == 29) {
		rlutil::locate(x, y); rlutil::setColor(7); cout << "#";
		return(0);

	}
	else if (x == 1) {
		rlutil::locate(x, y); rlutil::setColor(7); cout << "#";
		return(0);
	}
	else if (x == 118) {
		rlutil::locate(x, y); rlutil::setColor(7); cout << "#";
		return(0);
	}
	else
		return(-1);

}

int Turret::hitAsteroit(int j, int x, int y, Asteroit& a) {  //control the gun hit the asteriot

	int i = 0, ax, ay, hit = -1, random_x;

	int *arr;


	if (j == rlutil::KEY_LEFT) {  // If spaceship going left fire to the left.
		rlutil::hidecursor();
		while (true) {
			ax = x - i;
			ay = y;
			arr = a.getCoordinates();
			if (i == dist)
				break;
			if (arr[0] == ax && arr[1] == ay) {
				a.setHealth(damage);
				if (a.getHealth() <= 0) {
					random_x = rand() % 2;
					if (random_x == 1) {
						a.createFuel();
					}
					a.setCor(-1, -1);
					return -1;
				}
				else {
					return 0;
				}
			}
			i++;
		}
	}
	else if (j == rlutil::KEY_RIGHT) { // If spaceship going right fire to the right.
		rlutil::hidecursor();
		while (true) {
			ax = x + i;
			ay = y;
			arr = a.getCoordinates();
			if (i == dist)
				break;
			if (arr[0] == ax && arr[1] == ay) {
				a.setHealth(damage);
				if (a.getHealth() <= 0) {
					random_x = rand() % 2;
					if (random_x == 1) {
						a.createFuel();
					}
					a.setCor(-1, -1);
					return -1;
				}
				else {
					return 0;
				}
			}
			i++;
		}
	}
	else if (j == rlutil::KEY_UP) { // If spaceship going up fire to the up.
		rlutil::hidecursor();
		while (true) {
			ax = x;
			ay = y - i;
			arr = a.getCoordinates();
			if (i == dist)
				break;
			if (arr[0] == ax && arr[1] == ay) {
				a.setHealth(damage);
				if (a.getHealth() <= 0) {
					random_x = rand() % 2;
					if (random_x == 1) {
						a.createFuel();
					}
					a.setCor(-1, -1);
					return -1;
				}
				else {
					return 0;
				}
			}
			i++;
		}
	}
	else if (j == rlutil::KEY_DOWN) { // If spaceship going down fire to the down.
		rlutil::hidecursor();
		while (true) {
			ax = x;
			ay = y + i;
			arr = a.getCoordinates();
			if (i == dist)
				break;
			if (arr[0] == ax && arr[1] == ay) {
				a.setHealth(damage);
				if (a.getHealth() <= 0) {
					random_x = rand() % 2;
					if (random_x == 1) {
						a.createFuel();
					}
					a.setCor(-1, -1);
					return -1;
				}
				else {
					return 0;
				}
			}
			i++;
		}
	}



}
