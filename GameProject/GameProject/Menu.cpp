//Headers..
#include "Menu.h"
#include "Map.h"

#define waitkey rlutil::anykey("Press any key to continue...\n")


void Menu::menu() {
	int choice, choice_gamemode;
	bool test = true;

	rlutil::setConsoleTitle("World Defender");

	//Welcome text.
	rlutil::hidecursor();
	rlutil::setColor(11);
	rlutil::locate(18, 8);  // W
	cout << "\\__|__/";
	rlutil::locate(17, 7);
	cout << "\\   |   /";
	rlutil::locate(16, 6);
	cout << "\\    |    /";   // W

	rlutil::msleep(100);

	rlutil::locate(28, 6);   //O
	cout << "|";
	rlutil::locate(28, 7);
	cout << "|";
	rlutil::locate(28, 8);
	cout << "|";
	rlutil::locate(29, 5);
	cout << "____";
	rlutil::locate(33, 6);
	cout << "|";
	rlutil::locate(33, 7);
	cout << "|";
	rlutil::locate(33, 8);
	cout << "|";
	rlutil::locate(29, 8);
	cout << "____";       // O

	rlutil::msleep(100);

	rlutil::locate(35, 6);  //R
	cout << "|";
	rlutil::locate(35, 7);
	cout << "|";
	rlutil::locate(35, 8);
	cout << "|";
	rlutil::locate(36, 5);
	cout << "__";
	rlutil::locate(38, 6);
	cout << "|";
	rlutil::locate(39, 7);
	cout << (char)92;
	rlutil::locate(40, 8);
	cout << (char)92;
	rlutil::locate(36, 6);
	cout << "__";           //R

	rlutil::msleep(100);

	rlutil::locate(42, 6);  //L
	cout << "|";
	rlutil::locate(42, 7);
	cout << "|";
	rlutil::locate(42, 8);
	cout << "|";
	rlutil::locate(43, 8);
	cout << "___";         //L

	rlutil::msleep(100);

	rlutil::locate(47, 6);  //D
	cout << "|";
	rlutil::locate(47, 7);
	cout << "|";
	rlutil::locate(47, 8);
	cout << "|";
	rlutil::locate(48, 8);
	cout << "__";
	rlutil::locate(50, 8);
	cout << "/";
	rlutil::locate(51, 7);
	cout << "|";
	rlutil::locate(50, 6);
	cout << (char)92;
	rlutil::locate(48, 5);
	cout << "__";          //D

	rlutil::msleep(100);

	rlutil::locate(30, 12);  //D
	cout << "|";
	rlutil::locate(30, 13);
	cout << "|";
	rlutil::locate(30, 14);
	cout << "|";
	rlutil::locate(31, 14);
	cout << "__";
	rlutil::locate(33, 14);
	cout << "/";
	rlutil::locate(34, 13);
	cout << "|";
	rlutil::locate(33, 12);
	cout << (char)92;
	rlutil::locate(31, 11);
	cout << "__";           //D

	rlutil::msleep(100);

	rlutil::locate(36, 12);  //E
	cout << "|";
	rlutil::locate(36, 13);
	cout << "|";
	rlutil::locate(36, 14);
	cout << "|";
	rlutil::locate(37, 11);
	cout << "___";
	rlutil::locate(37, 13);
	cout << "---";
	rlutil::locate(37, 14);
	cout << "___";         //E

	rlutil::msleep(100);

	rlutil::locate(41, 12);  //F
	cout << "|";
	rlutil::locate(41, 13);
	cout << "|";
	rlutil::locate(41, 14);
	cout << "|";
	rlutil::locate(42, 11);
	cout << "___";
	rlutil::locate(42, 13);
	cout << "---";          //F

	rlutil::msleep(100);

	rlutil::locate(46, 12);   //E
	cout << "|";
	rlutil::locate(46, 13);
	cout << "|";
	rlutil::locate(46, 14);
	cout << "|";
	rlutil::locate(47, 11);
	cout << "___";
	rlutil::locate(47, 13);
	cout << "---";
	rlutil::locate(47, 14);
	cout << "___";          //E

	rlutil::msleep(100);

	rlutil::locate(51, 12);  //N
	cout << "|";
	rlutil::locate(51, 13);
	cout << "|";
	rlutil::locate(51, 14);
	cout << "|";
	rlutil::locate(52, 12);
	cout << (char)92;
	rlutil::locate(53, 13);
	cout << (char)92;
	rlutil::locate(54, 14);
	cout << (char)92;
	rlutil::locate(55, 14);
	cout << "|";
	rlutil::locate(55, 12);
	cout << "|";
	rlutil::locate(55, 13);
	cout << "|";           //N

	rlutil::msleep(100);

	rlutil::locate(57, 12);  //D
	cout << "|";
	rlutil::locate(57, 13);
	cout << "|";
	rlutil::locate(57, 14);
	cout << "|";
	rlutil::locate(58, 14);
	cout << "__";
	rlutil::locate(60, 14);
	cout << "/";
	rlutil::locate(61, 13);
	cout << "|";
	rlutil::locate(60, 12);
	cout << (char)92;
	rlutil::locate(58, 11);
	cout << "__";          //D

	rlutil::msleep(100);

	rlutil::locate(63, 12);   //E
	cout << "|";
	rlutil::locate(63, 13);
	cout << "|";
	rlutil::locate(63, 14);
	cout << "|";
	rlutil::locate(64, 11);
	cout << "___";
	rlutil::locate(64, 13);
	cout << "---";
	rlutil::locate(64, 14);
	cout << "___";          //E

	rlutil::msleep(100);

	rlutil::locate(68, 12);  //R
	cout << "|";
	rlutil::locate(68, 13);
	cout << "|";
	rlutil::locate(68, 14);
	cout << "|";
	rlutil::locate(69, 11);
	cout << "__";
	rlutil::locate(71, 12);
	cout << "|";
	rlutil::locate(72, 13);
	cout << (char)92;
	rlutil::locate(73, 14);
	cout << (char)92;
	rlutil::locate(69, 12);
	cout << "__";            //R

	rlutil::msleep(700);

	rlutil::setColor(7);

	rlutil::cls();

	rlutil::showcursor();

	while (test) {
		test = false;
		rlutil::setColor(8);
		cout << "Please select your choice from menu." << endl;
		rlutil::setColor(2);
		cout << "1. Play" << endl;
		rlutil::setColor(6);
		cout << "2. About" << endl;
		rlutil::setColor(4);
		cout << "3. Exit" << endl;
		rlutil::setColor(8);
		cout << "Your choice : ";
		rlutil::setColor(7);
		cin >> choice;
		if (choice != 1 && choice != 2 && choice != 3) {
			cout << "Your choice wrong. Try to use only menu numbers." << endl;
			test = true;
		}//Test if statement.
	}//End of while-loop.

	rlutil::msleep(100);
	rlutil::cls();

	switch (choice) {
	case 1:
		test = true;
		while (test) {
			test = false;
			rlutil::setColor(8);
			cout << "Please select a gamemode :" << endl;
			rlutil::setColor(3);
			cout << "1. Levels" << endl;
			rlutil::setColor(13);
			cout << "2. Survive Forever !" << endl;
			rlutil::setColor(8);
			cout << "Your choice : ";
			rlutil::setColor(7);
			cin >> choice_gamemode;
			if (choice != 1 && choice != 2 && choice != 3) {
				cout << "Your choice wrong. Try to use only menu numbers." << endl;
				test = true;
			}//Test if statement.
		}//End of while-loop.
		if (choice_gamemode == 1) {
			rlutil::cls();
			Map m;
			m.print();
			

			//deneme 'bitiş
		}
		else if (choice_gamemode == 2) {

		}//End of if-statement.
		break;
	case 2:
		rlutil::locate(50, 1); cout << "Oyun Amaci:" << endl;
		cout << "   Dunyaya karsi gelen yaratik ve astroid saldirisina karsi tek umut sensin! Uzay gemine atla ve evini savun!!" << endl;
		rlutil::locate(47, 3); cout << "Oyun Kontrolleri:" << endl;
		cout << "<- : Move your ship to the left " << endl;
		cout << "^" << endl << "|" << " : Move your ship to up." << endl;

		break;
	case 3:
		break;
	}//End of switch-case statement.

}//End of method.

void Menu::setlang(string language_choice) {
	if (language_choice == "tur")
		lang = "tur";
	else if (language_choice == "eng")
		lang = "eng";
}//End of set-method.