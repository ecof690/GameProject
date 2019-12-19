#include "Asteroit.h"
#include <time.h>

Asteroit::Asteroit(){
	health = 0;
	speed = 0;
}//End of default constructor.

void Asteroit::print(int num){
	int ast_cor_x, ast_cor_y, i;
	int *arr;

	arr = calculater(num);

	for (i = 0; i < num*2; i++) {
		ast_cor_x = arr[i];
		ast_cor_y = arr[i + 1];
		i++;
		rlutil::locate(ast_cor_x, ast_cor_y);
		cout << "@";
	}//End of for-loop.
}//End of method.

int* Asteroit::calculater(int num) {
	int ast_cor_x, ast_cor_y, i;
	int *ast_cor;

	srand(time(0));
	
	ast_cor = new int[2*num];
	
	for (i = 0; i < num*2; i++) {
		ast_cor_x = (rand() % 116)+2;
		ast_cor_y = (rand() % 27)+2;
		ast_cor[i] = ast_cor_x;
		ast_cor[i + 1] = ast_cor_y;
		i++;
	}//End of for-loop.
		
	return(ast_cor);
}//End of method.

