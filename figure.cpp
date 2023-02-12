#include "figure.h"

bool Figure::check() {
	if (sides == 0) {
		return true;
	}
	else {
		return false;
	}
}

void Figure::print_info() {
	std::cout << intro << std::endl;

	if (check()) {
		std::cout << "Правильная" << std::endl;
	}
	else {
		std::cout << "Неправильная" << std::endl;
	}

	std::cout << "Колличество сторон: " << sides << '\n' << std::endl;
}