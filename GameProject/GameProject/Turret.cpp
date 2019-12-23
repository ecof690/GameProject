#include <iostream>
#include "rlutil.h"
#include "Turret.h"

using namespace std;

Turret ss;

Turret::Turret(){

dist=10;  // fire distance

}

void Turret::fire(int j , int x , int y) {
	int i=0,ax,ay,hit=-1;

if(j==rlutil::KEY_LEFT){  // If spaceshp going left fire to the left.
				   rlutil::hidecursor();
	while(true) {
		ax=x-i;
		ay=y;
		hit=hitWall(ax,ay);
		if( i== dist || hit !=-1)
			break;
		gotoxy(x-i,y);
				rlutil::setColor(6);
		cout << "-";
		rlutil::resetColor();
		rlutil::msleep(20);
		gotoxy(x-i,y);
		cout << " ";
		i++;
		
		
	}
                }
					if(j==rlutil::KEY_RIGHT){ // If spaceshp going right fire to the left.
				  rlutil::hidecursor();
	while(true) {
		ax=x+i;
		ay=y;
		hit=hitWall(ax,ay);
		if( i== dist || hit !=-1)
			break;
		gotoxy(x+i,y);
				rlutil::setColor(5);
		cout << "-";
		rlutil::resetColor();
		rlutil::msleep(20);
		gotoxy(x+i,y);
		cout << " ";
		i++;
		
		
	}
                }
					if(j==rlutil::KEY_UP){ // If spaceshp going up fire to the left.
				   rlutil::hidecursor();
	while(true) {
		ax=x;
		ay=y-i;
		hit=hitWall(ax,ay);
		if( i== dist || hit !=-1)
			break;
		gotoxy(x,y-i);
				rlutil::setColor(5);
		cout << "|";
		rlutil::resetColor();
		rlutil::msleep(20);
		gotoxy(x,y-i);
		cout << " ";
		i++;
		
		
	}
                }
					if(j==rlutil::KEY_DOWN){ // If spaceshp going down fire to the left.
	rlutil::hidecursor();
	while(true) {
		ax=x;
		ay=y+i;
		hit=hitWall(ax,ay);
		if( i== dist || hit !=-1)
			break;
		gotoxy(x,y+i);
				rlutil::setColor(5);
		cout << "|";
		rlutil::resetColor();
		rlutil::msleep(20);
		gotoxy(x,y+i);
		cout << " ";
		i++;
		
		
	}
                }
				



}

int Turret::hitWall(int x , int y){
	int i;
       if ( y== 1 ){
		   return(0);
		   rlutil::locate(x,y); rlutil::setColor(7); cout<<"#";
	}

	
        else if( y==29){
			rlutil::locate(x,y); rlutil::setColor(7); cout<<"#";
		   return(0);
	 
	}

	
		else if  (x==1){
		 rlutil::locate(x,y); rlutil::setColor(7); cout<<"#";
		return(0);
	}

	
		else if(x== 118){
			rlutil::locate(x,y); rlutil::setColor(7); cout<<"#";
		   return(0);
	}
		else 
			return(-1);
	




}
