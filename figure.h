#pragma once
#include <string>
#include <iostream>

class Figure {
public:
	bool virtual check();
	void virtual print_info();
	std::string get_intro() { return intro; }
protected:
	int sides = 0;
	std::string intro = "Фигура: ";
};
