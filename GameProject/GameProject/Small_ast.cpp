#include "Small_ast.h"

Small_ast::Small_ast() {
	health = 10;
	damage = 10;
	speed = 0;
}//End of constructor.

void Small_ast::print() {
	if (x_cor != 70 || y_cor != 15) {
		rlutil::setColor(4);
		rlutil::locate(x_cor, y_cor);
		cout << "@";
		rlutil::setColor(7);
	}
}//End of method.
