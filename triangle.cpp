#include "triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
	sides = 3;
	intro = "Треугольник: ";
	side_a = a;
	side_b = b;
	side_c = c;
	angle_A = A;
	angle_B = B;
	angle_C = C;
}

bool Triangle::check() {
	if (sides == 3 && (angle_A + angle_B + angle_C) == 180) {
		return true;
	}
	else {
		return false;
	}
}

void Triangle::print_info() {
	std::cout << intro << std::endl;

	if (check()) {
		std::cout << "Правильная" << std::endl;
	}
	else {
		std::cout << "Неправильная" << std::endl;
	}

	std::cout << "Колличество сторон: " << sides << std::endl;
	std::cout << "Стороны: a = " << side_a << " b = " << side_b << " c = " << side_c << std::endl;
	std::cout << "Углы: A = " << angle_A << " B = " << angle_B << " C = " << angle_C << std::endl;
	std::cout << std::endl;
}