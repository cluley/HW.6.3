#include "eTriangle.h"

E_Triangle::E_Triangle(int a, int A) : Triangle(a, a, a, A, A, A) {
	intro = "Равносторонний треугольник: ";
	side_a = a;
	side_b = a;
	side_c = a;
	angle_A = A;
	angle_B = A;
	angle_C = A;
}

bool E_Triangle::check() {
	if (side_a == side_c && side_c == side_b && angle_A == angle_C && angle_C == angle_B) {
		return true;
	}
	else {
		return false;
	}
}