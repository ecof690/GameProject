#include "Large_ast.h"

Large_ast::Large_ast() {
	health = 30;
	damage = 30;
	speed = 0;
}

void Large_ast::print() {
	if (x_cor != 70 || y_cor != 15) {
		rlutil::setColor(6);
		rlutil::locate(x_cor, y_cor);
		cout << "@";
		rlutil::setColor(7);
	}
}//End of method.