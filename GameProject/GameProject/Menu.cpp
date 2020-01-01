//Headers..
#include "Menu.h"
#include "Map.h"

#define waitkey rlutil::anykey("Press any key to continue...\n")


void Menu::menu() {
	int choice=0, choice_gamemode;
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
	while(true){    // Menu while
		rlutil::showcursor();
		int choose=0,key;
		rlutil::hidecursor();
		rlutil::cls();
		rlutil::setColor(2);
		rlutil::locate(50, 10); cout << "Play" << endl;
		rlutil::setColor(6);
		rlutil::locate(50, 12); cout << "About" << endl;
		rlutil::setColor(5);
		rlutil::locate(50, 14); cout << "Exit" << endl;
		rlutil::setColor(8);
		rlutil::locate(30, 24);
		cout << "Use arrow keys, and press enter to choice." << endl;
		rlutil::setColor(7);
		while (true) {  // Main menu while
			key = rlutil::getkey();
			if(key == rlutil::KEY_DOWN){ // Move in main menu
				choose +=1;
			}
			else if(key==rlutil::KEY_UP){ // Move in main menu
				choose -=1;
			}
			if(key==rlutil::KEY_ENTER){ // Choose the selection
				choice==choose;
				rlutil::cls();
				break;

			}


			if(choose==1){ // If choose is Play set background
				rlutil::setColor(2);
				rlutil::setBackgroundColor(4);
				rlutil::locate(50, 10);  cout << "Play";
				rlutil::setColor(6);
				rlutil::setBackgroundColor(0);
				rlutil::locate(50, 12);  cout << "About";
				rlutil::setColor(5);
				rlutil::setBackgroundColor(0);
				rlutil::locate(50, 14);  cout << "Exit";
				rlutil::setBackgroundColor(0);
			}
			if(choose==2){ // If choose is About set background
				rlutil::setColor(2);
				rlutil::setBackgroundColor(0);
				rlutil::locate(50, 10);  cout << "Play";
				rlutil::setColor(6);
				rlutil::setBackgroundColor(4);
				rlutil::locate(50, 12);  cout << "About";
				rlutil::setColor(5);
				rlutil::setBackgroundColor(0);
				rlutil::locate(50, 14);  cout << "Exit";
				rlutil::setBackgroundColor(0);
			}
			if(choose==3){  // If choose is Exit set background
				rlutil::setColor(2);
				rlutil::setBackgroundColor(0);
				rlutil::locate(50, 10);  cout << "Play";
				rlutil::setColor(6);
				rlutil::setBackgroundColor(0);
				rlutil::locate(50, 12);  cout << "About";
				rlutil::setColor(5);
				rlutil::setBackgroundColor(4);
				rlutil::locate(50, 14);  cout << "Exit";
				rlutil::setBackgroundColor(0);
			}
			if(choose<=0)  // If user try to go down or up in menu set choose 
				choose=1;
			if(choose>3)
				choose=3;

			choice=choose;

		}//End of Main menu while-loop.




		if(choice == 1){  // If user select play , select gamemode

			rlutil::setColor(8);
			rlutil::locate(50,10);
			cout << "Please select a gamemode :" << endl;
			rlutil::setColor(3);
			rlutil::locate(50,12);
			cout << "Levels" << endl;
			rlutil::setColor(3);
			rlutil::locate(50,14);
			cout << "Survive Forever !" << endl;
			choose=0;
			while (true) { // Gamemode while
				key = rlutil::getkey();
				if(key == rlutil::KEY_DOWN){  // Move in Gamemode menu
					choose +=1;
				}
				else if(key==rlutil::KEY_UP){  // Move in Gamemode menu
					choose -=1;
				}
				if(key==rlutil::KEY_ENTER){  // Choose the gamemode
					choice_gamemode==choose;
					rlutil::setColor(7);
					break;
				}  

				if(choose==1){ //If user's choose is gamemode 1
					rlutil::setBackgroundColor(0);
					rlutil::setColor(8);
					rlutil::locate(50,10);
					cout << "Please select a gamemode :" << endl;
					rlutil::setBackgroundColor(4);
					rlutil::setColor(3);
					rlutil::locate(50,12);
					cout << "Levels" << endl;
					rlutil::setBackgroundColor(0);
					rlutil::setColor(3);
					rlutil::locate(50,14);
					cout << "Survive Forever !" << endl;
					rlutil::setBackgroundColor(0);
				} // End of gamemode 1 if

				else if(choose==2){  // If user's choose is gamemode 2
					rlutil::setBackgroundColor(0);
					rlutil::setColor(8);
					rlutil::locate(50,10);
					cout << "Please select a gamemode :" << endl;
					rlutil::setBackgroundColor(0);
					rlutil::setColor(3);
					rlutil::locate(50,12);
					cout << "Levels" << endl;
					rlutil::setBackgroundColor(4);
					rlutil::setColor(3);
					rlutil::locate(50,14);
					cout << "Survive Forever !" << endl;	 
					rlutil::setBackgroundColor(0);
				} // end of gamemode2 if

				if(choose<=0)   // If user try to go down or up in menu set choose 
					choose=1;   
				if(choose>2)    
					choose=2;

				choice_gamemode=choose;  // Set user's choose to gamemode

			}//End of Gamemode while-loop.
			if (choice_gamemode == 1) { //Gamemode 1
				rlutil::cls();
				Map m;
				m.print();

			} // End of Gamemode 1
			else if (choice_gamemode == 2) {  // Gamemode 2
				rlutil::setBackgroundColor(0);
				rlutil::cls();
				rlutil::locate(40,15); rlutil::setColor(4); cout << "It will be added as soon as possible!"<<endl; rlutil::setColor(7);
				rlutil::setColor(2); rlutil::locate(70,29); cout << "Ana menuye donmek icin ESC basiniz."; rlutil::setColor(7);
				key = rlutil::getkey();
				if(key==rlutil::KEY_ESCAPE){ //Exit from Gamemode 2 with ESC
					rlutil::cls();
					menu();
				}  
			}// End of Gamemode 2
		} // End of Choose Gamemode 
		else if(choice==2){  // About 
			rlutil::setColor(4); rlutil::locate(50, 1); cout << "Oyun Amaci:" << endl; rlutil::setColor(7);
			cout << "   Dunyaya karsi gelen yaratik ve astroid saldirisina karsi tek umut sensin! Uzay gemine atla ve evini savun!!" << endl;
			rlutil::setColor(4); rlutil::locate(48, 4); cout << "Oyun Kontrolleri" << endl; rlutil::setColor(7);
			rlutil::setColor(2); rlutil::locate(47,6); cout << "Klavye yon tuslari  "<<endl; rlutil::setColor(7);
			rlutil::locate(44,8); cout << "Yukari ok tusu ile yukari";
			rlutil::locate(45,9); cout << "Asagi ok tusu ile asagi";
			rlutil::locate(17,9); cout << "Sol ok tusu ile sola";
			rlutil::locate(77,9); cout << "Sag ok tusu ile saga"<<endl;
			rlutil::setColor(2);	rlutil::locate(51,11); cout << "Enter Tusu"; rlutil::setColor(7);
			rlutil::locate(18,13); cout << "Enter Tusuna bastiginizda mortari ateslemek istediginiz kordinatlari giriniz. ";
			rlutil::locate(21,14); cout << "Mortar girdiginiz kordinatlara otomatik olarak bir fuze yollayacaktir.";
			rlutil::setColor(2);	rlutil::locate(51,16); cout << "Space  Tusu"; rlutil::setColor(7);
			rlutil::locate(15,18); cout << "Space tusu ile 1 mermi atesleyebilirsiniz.Basili tutarsaniz seri atis yapabilirsiniz."<<endl;
			rlutil::setColor(4);	rlutil::locate(52,20); cout << "Harita Alani"; rlutil::setColor(7);
			rlutil::locate(15,22); cout << "Bulundugunuz bolge radyasyon ile cevreli oldugundan radyasyon bolgelerinden(#) uzak durun."<<endl;
			rlutil::setColor(4);	rlutil::locate(55,24); cout << "Asteroitler"; rlutil::setColor(7);
			rlutil::setColor(4);	rlutil::locate(20,26); cout << "Kirmizi Asteroit"; rlutil::setColor(7);
			rlutil::setColor(2);	rlutil::locate(54,26); cout << "Yesil Asteroit"; rlutil::setColor(7);
			rlutil::setColor(6);	rlutil::locate(90,26); cout << "Sari Asteroit"; rlutil::setColor(7);
			rlutil::locate(1,27); cout << "Can: "<<endl;
			rlutil::locate(1,28); cout << "Benzin Kutusu: "<<endl;
			rlutil::locate(1,29); cout << "Hasar: "<<endl;
			rlutil::locate(25,27); cout << "10 (1 vurus)"<<endl;
			rlutil::locate(59,27); cout << "20 (2 vurus)"<<endl;
			rlutil::locate(95,27); cout << "30 (3 vurus)"<<endl;
			rlutil::locate(25,28); cout << "Dusmez"<<endl;
			rlutil::locate(59,28); cout << "Duser"<<endl;
			rlutil::locate(95,28); cout << "Duser"<<endl;
			rlutil::locate(25,29); cout << "10 Can eksiltir."<<endl;
			rlutil::locate(59,29); cout << "20 Can eksiltir."<<endl;
			rlutil::locate(95,29); cout << "30 Can eksiltir."<<endl;
			rlutil::setColor(2); rlutil::locate(70,30); cout << "Hakkinda kismindan cikmak icin ESC basiniz."; rlutil::setColor(7);
			key = rlutil::getkey();  
			if(key==rlutil::KEY_ESCAPE){  // Exit from About with escape
				rlutil::cls();
				menu();
			}
		}  // End of About
		else if(choice==3){   // Exit
			rlutil::locate(50,15); cout << "THANKS FOR PLAYING!";
			rlutil::setColor(2);
			rlutil::locate(80,27); cout << "Press enter to exit!";
			rlutil::setColor(7);
			exit(0);  // stop the program
		}   // End of Exit

	}  // End of Menu while
}//End of method.


void Menu::setlang(string language_choice) {
	if (language_choice == "tur")
		lang = "tur";
	else if (language_choice == "eng")
		lang = "eng";
}//End of set-method.
