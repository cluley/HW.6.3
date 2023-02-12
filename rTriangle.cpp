#include "rTriangle.h"

R_Triangle::R_Triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
	intro = "Прямоугольный треугольник: ";
	side_a = a;
	side_b = b;
	side_c = c;
	angle_A = A;
	angle_B = B;
	angle_C = 90;
}

bool R_Triangle::check() {
	if (angle_C == 90) {
		return true;
	}
	else {
		return false;
	}
}