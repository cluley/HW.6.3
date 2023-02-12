#include "figure.h"
#include "triangle.h"
#include "rTriangle.h"
#include "iTriangle.h"
#include "eTriangle.h"
#include "quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"

int main(int argc, char** argv) {
	Figure figure;

	Triangle triangle(10, 20, 30, 50, 60, 70);
	Figure* triangle_P = &triangle;

	R_Triangle r_triangle(10, 20, 30, 40, 50);
	Figure* r_triangle_P = &r_triangle;

	I_Triangle i_triangle(10, 20, 40, 80);
	Figure* i_triangle_P = &i_triangle;

	E_Triangle e_triangle(30, 60);
	Figure* e_triangle_P = &e_triangle;

	Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Figure* quadrangle_P = &quadrangle;

	Rectangle rectangle(20, 40);
	Figure* rectangle_P = &rectangle;

	Square square(20);
	Figure* square_P = &square;

	Parallelogram parallelogram(20, 30, 40, 50);
	Figure* parallelogram_P = &parallelogram;

	Rhombus rhombus(30, 40, 50);
	Figure* rhombus_P = &rhombus;

	figure.print_info();
	triangle_P->print_info();
	r_triangle_P->print_info();
	i_triangle_P->print_info();
	e_triangle_P->print_info();
	quadrangle_P->print_info();
	rectangle_P->print_info();
	square_P->print_info();
	parallelogram_P->print_info();
	rhombus_P->print_info();

	return 0;
}