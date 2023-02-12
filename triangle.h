#pragma once
#include "figure.h"

class Triangle : public Figure {
public:
	Triangle(int a, int b, int c, int A, int B, int C);
	bool check() override;
	void print_info() override;
protected:
	int side_a;
	int side_b;
	int side_c;
	int angle_A;
	int angle_B;
	int angle_C;
};
