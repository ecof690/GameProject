#include "Map.h"

SpaceShip vu;

Map::Map() {  //Set map's row and coluom
	row = 120;
	col = 30;
	score = 0;
}

void Map::print() {
	int mlocx, mlocy, fuel, armor, coin;
	int x = 70;  //Set SpaceShip' x coordinate
	int y = 15;  //Set SpaceShip' y coordinate

	//For creating random number of Asteroids.
	int num0, num1, num2, i_c;
	num0 = rand() % 20;
	num1 = rand() % 30;
	num2 = rand() % 40;
	//..

	setWalls(); // print Map's walls

	//Creating part for Asteroids.
	Asteroit *A[90];
	for (i_c = 0; i_c < num0; i_c++) {
		A[i_c] = new Large_ast();
		A[i_c]->calculater();
		A[i_c]->print();
	}//End of first for loop.
	for (i_c = num0; i_c < (num0 + num1); i_c++) {
		A[i_c] = new Medium_ast();
		A[i_c]->calculater();
		A[i_c]->print();
	}//End of second for loop.
	for (i_c = num0 + num1; i_c < (num0 + num1 + num2); i_c++) {
		A[i_c] = new Small_ast();
		A[i_c]->calculater();
		A[i_c]->print();
	}//End of third for loop.
	//..



	vu.setArmor(100);
	fuel = vu.getFuel();
	armor = vu.getArmor();
	//coin = vu.getCoin(); -> 	//This feature will be added later.
	rlutil::locate(45, 30); cout << "Fuel : " << fuel; // show the first fuel amount
	rlutil::locate(60, 30); cout << "Armor : " << armor; // show the first armor amount
	//rlutil::locate(75, 30); cout << "Coin : " << coin; // show the first armor amount ->	//This feature will be added later.

	//Spaceship Move.
	Turret g;
	Mortar mor;
	Menu menu;
	int collision, j, temp, temp33 = 0, temp34 = 0, hit = -1, rad, i, morx, mory;
	int methel = 0;


	gotoxy(x, y); rlutil::setColor(2);  cout << '^' << endl; // Show player
	while (true) {
		if (kbhit()) {
			int k = rlutil::getkey(); // Input character
			gotoxy(x, y); cout << " "; // Delete player


			if (k == rlutil::KEY_LEFT) {
				--x; gotoxy(x, y);
				rlutil::setColor(2);
				cout << '<';
				rlutil::setColor(7);
				fuel--;
				vu.setFuel(fuel);
				rlutil::locate(45, 30);
				cout << "Fuel : " << fuel << " ";
				j = k;
				rlutil::locate(60, 30); cout << "Armor : " << armor << " ";
				for (i_c = 0; i_c < (num0 + num1 + num2); i_c++) {
					collision = hitAsteroid(*A[i_c], x, y);
					if (collision != 0) {
						armor -= collision;
						vu.setArmor(armor);
						rlutil::locate(60, 30); cout << "Armor : " << armor << " ";
					}

					if (A[i_c]->fuel_x == x && A[i_c]->fuel_y == y) {
						fuel += 30;
						vu.setFuel(fuel);
						A[i_c]->fuel_x = -1;
						A[i_c]->fuel_y = -1;
					}
				}
				hit = hitWall(x, y);
				if (hit != -1)
					x = hit;
			}
			else if (k == rlutil::KEY_RIGHT) {
				++x;
				rad = 0; gotoxy(x, y);
				rlutil::setColor(2);
				cout << '>';
				rlutil::setColor(7);
				fuel--; vu.setFuel(fuel);
				rlutil::locate(45, 30);
				cout << "Fuel : " << fuel << " ";
				j = k;
				rlutil::locate(60, 30); cout << "Armor : " << armor << " ";
				for (i_c = 0; i_c < (num0 + num1 + num2); i_c++) {
					collision = hitAsteroid(*A[i_c], x, y);
					if (collision != 0) {
						armor -= collision;
						vu.setArmor(armor);
						rlutil::locate(60, 30); cout << "Armor : " << armor << " ";
					}

					if (A[i_c]->fuel_x == x && A[i_c]->fuel_y == y) {
						fuel += 30;
						vu.setFuel(fuel);
						A[i_c]->fuel_x = -1;
						A[i_c]->fuel_y = -1;
					}
				}
				hit = hitWall(x, y);
				if (hit != -1)
					x = hit;
			}  // Turn Right
			else if (k == rlutil::KEY_UP) {
				--y;
				gotoxy(x, y);
				rlutil::setColor(2);
				cout << '^';
				rlutil::setColor(7);
				fuel--;
				vu.setFuel(fuel);
				rlutil::locate(45, 30);
				cout << "Fuel : " << fuel << " ";
				j = k;
				rlutil::locate(60, 30); cout << "Armor : " << armor << " ";
				for (i_c = 0; i_c < (num0 + num1 + num2); i_c++) {
					collision = hitAsteroid(*A[i_c], x, y);
					if (collision != 0) {
						armor -= collision;
						vu.setArmor(armor);
						rlutil::locate(60, 30); cout << "Armor : " << armor << " ";
					}

					if (A[i_c]->fuel_x == x && A[i_c]->fuel_y == y) {
						fuel += 30;
						vu.setFuel(fuel);
						A[i_c]->fuel_x = -1;
						A[i_c]->fuel_y = -1;
					}
				}
				hit = hitWall(x, y);
				if (hit != -1)
					y = hit;
			}
			else if (k == rlutil::KEY_DOWN) {
				++y; gotoxy(x, y);
				rlutil::setColor(2);
				cout << 'v';
				rlutil::setColor(7);
				fuel--;
				vu.setFuel(fuel);
				rlutil::locate(45, 30);
				cout << "Fuel : " << fuel << " ";
				j = k;
				rlutil::locate(60, 30); cout << "Armor : " << armor << " ";  //show the armor amount
				for (i_c = 0; i_c < (num0 + num1 + num2); i_c++) {
					collision = hitAsteroid(*A[i_c], x, y);
					if (collision != 0) {
						armor -= collision;
						vu.setArmor(armor);
						rlutil::locate(60, 30); cout << "Armor : " << armor << " ";
					}

					if (A[i_c]->fuel_x == x && A[i_c]->fuel_y == y) {
						fuel += 30;
						vu.setFuel(fuel);
						A[i_c]->fuel_x = -1;
						A[i_c]->fuel_y = -1;
					}
				}
				hit = hitWall(x, y);
				if (hit != -1)
					y = hit;

			}
			else 	if (k == rlutil::KEY_SPACE) { // Space to fire
				int didhit;
				for (i_c = 0; i_c < (num0 + num1 + num2); i_c++) {
					didhit = g.hitAsteroit(j, x, y, *A[i_c]);
					if (didhit == -1) {
						temp33 = 0;
						score += 10;
					}
					else if (didhit == 0) {
						temp33 = 1;
						temp34 = i_c;
					}
				}
				rlutil::locate(100, 30);
				cout << "Score: " << score;
				g.fire(j, x, y);
				if (temp33) {
					A[temp34]->print();
				}
				else {
					if (A[temp34]->fuel_x != -1) {
						A[temp34]->printFuel();
					}
				}

			}
			else     if (k == rlutil::KEY_ENTER) { // activate mortar
				rlutil::locate(70, 30);
				cout << "Enter the locations: ";
				cin >> morx >> mory;
				rlutil::locate(70, 30);
				cout << "                                  ";
				mor.setLoc(morx, mory);
				mor.fire(j, morx, mory);
				for (i_c = 0; i_c < (num0 + num1 + num2); i_c++) // If mortar hit the Asteroit delete this Asteroit
					MortarFire(*A[i_c], morx, mory);
			}
			else if (k == rlutil::KEY_ESCAPE) { rlutil::locate(76, 30); cout << "Thanks for playing!!"; break; menu.menu(); } // End of the game


			if (fuel <= 0) { // Fuel checking statement.
				for (i = 0; i < 4; i++) {
					rlutil::locate(80, 30); rlutil::setColor(4); cout << "!! OUT OF FUEL !!"; rlutil::setColor(7);
					rlutil::msleep(500);
					rlutil::locate(70, 30); cout << "                                               ";
					rlutil::msleep(500);
				}
				rlutil::cls();
				rlutil::locate(45, 15);
				cout << "Your score is : " << score << endl;
				rlutil::setColor(2);
				rlutil::locate(75, 27);
				cout << "Wait! You will automatically direct to menu." << endl;
				rlutil::setColor(7);
				rlutil::msleep(5000);
				break;
			}

			if (armor <= 0) { // Armor checking statement.
				for (i = 0; i < 4; i++) {
					rlutil::locate(60, 30); cout << "Armor : " << "0" << " ";
					rlutil::locate(80, 30); rlutil::setColor(4); cout << "!! You have been DESTROYED !!"; rlutil::setColor(7);
					rlutil::msleep(500);
					rlutil::locate(70, 30); cout << "                                               ";
					rlutil::msleep(500);
				}
				rlutil::cls();
				rlutil::locate(45, 15);
				cout << "Your score is : " << score << endl;
				rlutil::setColor(2);
				rlutil::locate(75, 27);
				cout << "Wait! You will automatically direct to menu." << endl;
				rlutil::setColor(7);
				rlutil::msleep(5000);
				break;
			}

			int* fin;    // Control does gamer finish the game (destroy all the asteroits)
			int fincount = 0;
			for (i = 0; i < num0 + num1 + num2; i++) {
				fin = A[i]->getCoordinates();
				if (fin[0] == -1 && fin[1] == -1)
					fincount++;
				if (fincount == (num0 + num1 + num2)) {
					rlutil::locate(60, 15);
					cout << "Congrats! You destroy all asteroits.";
					rlutil::msleep(1000);
					rlutil::locate(45, 20);
					cout << "Your score is : " << score << endl;
					rlutil::setColor(2);
					rlutil::locate(75, 27);
					cout << "Wait! You will automaticly direct to menu." << endl;
					rlutil::msleep(4000);
					menu.menu();
					break;

				}

			}

		} // end of kbhit if

	} // end of while 

}

void Map::setWalls() {
	int i;
	int *walls;

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


int Map::hitWall(int x, int y) {
	int i, armor;

	if (y == 1) { // If Space ship hit the wall decrease armor
		armor = vu.getArmor();
		armor = armor - 10;
		vu.setArmor(armor);
		//..

		rlutil::setColor(7); rlutil::locate(x, y); cout << "#";
		rlutil::locate(x, y + 1);  rlutil::setColor(2); cout << "v";
		y++;
		for (i = 0; i < 4; i++) { // Radiation warning
			rlutil::locate(70, 30); rlutil::setColor(4); cout << " IT is radiation area turn back to SAFE AREA!!!"; rlutil::resetColor();
			rlutil::msleep(500);
			rlutil::locate(70, 30); cout << "                                               ";
			rlutil::msleep(500);

		}
		return(y);
	}
	else if (y == 29) { // If Space ship hit the wall decrease armor
		armor = vu.getArmor();
		armor = armor - 10;
		vu.setArmor(armor);
		//..

		rlutil::setColor(7); rlutil::locate(x, y); cout << "#";
		rlutil::locate(x, y - 1); rlutil::setColor(2); cout << "^";
		y--;
		for (i = 0; i < 4; i++) { // Radiation warning
			rlutil::locate(70, 30); rlutil::setColor(4); cout << " IT is radiation area turn back to SAFE AREA!!!"; rlutil::resetColor();
			rlutil::msleep(500);
			rlutil::locate(70, 30); cout << "                                               ";
			rlutil::msleep(500);

		}
		return(y);
	}
	else if (x == 1) {
		// If Space ship hit the wall decrease armor
		armor = vu.getArmor();
		armor = armor - 10;
		vu.setArmor(armor);
		//..

		rlutil::setColor(7); rlutil::locate(x, y); cout << "#";
		rlutil::setColor(2); rlutil::locate(x + 1, y); cout << ">";
		x++;
		for (i = 0; i < 4; i++) { // Radiation warning
			rlutil::locate(70, 30); rlutil::setColor(4); cout << " IT is radiation area turn back to SAFE AREA!!!"; rlutil::resetColor();
			rlutil::msleep(500);
			rlutil::locate(70, 30); cout << "                                               ";
			rlutil::msleep(500);

		}
		return(x);
	}
	else if (x == 118) { // If Space ship hit the wall decrease armor
		armor = vu.getArmor();
		armor = armor - 10;
		vu.setArmor(armor);
		//..

		rlutil::setColor(7); rlutil::locate(x, y); cout << "#";
		rlutil::setColor(2); rlutil::locate(x - 1, y); cout << "<";
		x--;
		for (i = 0; i < 4; i++) { // Radiation warning
			rlutil::locate(70, 30); rlutil::setColor(4); cout << " IT is radiation area turn back to SAFE AREA!!!"; rlutil::resetColor();
			rlutil::msleep(500);
			rlutil::locate(70, 30); cout << "                                               ";
			rlutil::msleep(500);
		}
		return(x);
	}
	else
		return(-1);
}



int Map::hitAsteroid(Asteroit& a, int x, int y) {
	int *arr, ast_damage;
	arr = a.getCoordinates();
	if (arr[0] == x && arr[1] == y) {
		ast_damage = a.getDamage();
		a.setCor(-1, -1);
		return ast_damage;
	}
	else
		return 0;
}//End of method.

void Map::MortarFire(Asteroit& a, int x, int y) {

	int *arr;
	arr = a.getCoordinates();
	if (arr[0] == x && arr[1] == y) {
		a.setCor(-1, -1);
		score += 10;
		rlutil::locate(100, 30);
		cout << "Score: " << score;
	}

}//End of method.
