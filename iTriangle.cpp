#include "iTriangle.h"

I_Triangle::I_Triangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {
	intro = "Равнобедренный треугольник: ";
	side_a = a;
	side_b = b;
	side_c = a;
	angle_A = A;
	angle_B = B;
	angle_C = A;
}

bool I_Triangle::check() {
	if (side_a == side_c && angle_A == angle_C) {
		return true;
	}
	else {
		return false;
	}
}