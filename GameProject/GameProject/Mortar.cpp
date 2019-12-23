#include <iostream>
#include "Mortar.h"
#include "rlutil.h"

using namespace std;


Mortar::Mortar(){

locx=10;  // x location of mortar
locy=10;   // y location of mortar

}

void Mortar::fire(int a , int b , int c) {
	int i,hit;
	
	rlutil::locate(70,30);
	cout << "Mortar fired to "<< locx <<","<<locy ;


	for(i=0;i<3;i++){
		rlutil::msleep(500);
		rlutil::setColor(4);
		rlutil::locate(locx,locy);
		cout << (char)220;
		rlutil::msleep(500);
		rlutil::locate(locx,locy);
		cout << " ";		
	}
	rlutil::setColor(7);
	hit= hitWall(locx,locy);

	if(hit == -1){
	rlutil::locate(locx , locy);
	cout << " "; 
	}

	rlutil::locate(70,30);
	cout << "                                  ";

}

int Mortar::hitWall(int x , int y){
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

void Mortar::setLoc(int x , int y){

	locx=x;
	locy=y;


}