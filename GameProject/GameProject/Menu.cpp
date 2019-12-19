//Headers..
#include "Menu.h"
#include "Map.h"
#include "Asteroit.h"

#define waitkey rlutil::anykey("Press any key to continue...\n")


void Menu::menu() {
	int choice, choice_gamemode;
	bool test = true;

	rlutil::setConsoleTitle("World Defender");

	//Welcome text.
	rlutil::hidecursor();
	rlutil::setColor(11);
	rlutil::locate(18, 8);
	cout << "\\__|__/";
	rlutil::locate(17, 7);
	cout << "\\   |   /";
	rlutil::locate(16, 6);
	cout << "\\    |    /";
	//End of text.

	rlutil::msleep(4200);
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
			m.setWalls();
			
		}
		else if (choice_gamemode == 2) {

		}//End of if-statement.
		break;
	case 2:
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
