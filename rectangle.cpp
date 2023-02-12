#include "rectangle.h"

Rectangle::Rectangle(int a, int b) : Quadrangle(a, a, a, a, 90, 90, 90, 90) {
	intro = "Прямоугольник: ";
	side_a = a;
	side_b = b;
	side_c = a;
	side_d = b;
	angle_A = 90;
	angle_B = 90;
	angle_C = 90;
	angle_D = 90;
}

bool Rectangle::check() {
	if (side_a == side_c && side_b == side_d && angle_A == 90 && angle_B == 90 && angle_C == 90 && angle_D == 90) {
		return true;
	}
	else {
		return false;
	}
}