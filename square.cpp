#include "square.h"

Square::Square(int a) {
	intro = "Квадрат: ";
	side_a = a;
	side_b = a;
	side_c = a;
	side_d = a;
	angle_A = 90;
	angle_B = 90;
	angle_C = 90;
	angle_D = 90;
}

bool Square::check() {
	if (side_a == side_c && side_b == side_d && side_a == side_b && angle_A == angle_C && angle_B == angle_D && angle_A == angle_B) {
		return true;
	}
	else {
		return false;
	}
}