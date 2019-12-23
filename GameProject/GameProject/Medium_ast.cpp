#include "Medium_ast.h"

Medium_ast::Medium_ast(){
	health = 20;
	speed = 0;
}

void Medium_ast::print() {
	if (x_cor != 70 || y_cor != 15) {
		rlutil::setColor(10);
		rlutil::locate(x_cor, y_cor);
		cout << "@";
		rlutil::setColor(7);
	}
}//End of method.