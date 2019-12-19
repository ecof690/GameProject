#include "Map.h"

Map::Map() {

}

void Map::setWalls() {

	int i;

	for (i = 0; i < 117; i++) {
		rlutil::locate(0, i);
		cout << "#";
	}
	for (i = 1; i < 29; i++) {
		rlutil::locate(i, 0);
		cout << "#";
		cout << endl;
	}
	for (i = 1; i < 29; i++) {
		rlutil::locate(118, i);
		cout << "#";
	}
	for (i = 1; i < 119; i++) {
		rlutil::locate(i, 29);
		cout << "# ";
	}

	rlutil::locate(1, 30); cout << "Made by Ercan COS & Tolga KALAYCIOGLU";
}