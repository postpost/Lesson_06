#include <iostream>
#include "shape.h"
#include "print.h"
#include "triangle.h"
#include "right_tr.h"
#include "isosceles.h"
#include "equilateral.h"
#include "tetragon.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"

int main() {

	setlocale(LC_ALL, "ru");

	Triangle tr(10, 20, 30, 50, 60, 70);
	Shape* shape = &tr;
	printInfo(shape);

	std::cout << std::endl;

	RightTriangle r_tr(10, 20, 30, 50, 60);
	Shape* shape_01 = &r_tr;
	printInfo(shape_01);

	std::cout << std::endl;

	Isosceles isoTr(10, 20, 50, 60);
	Shape* shape_02 = &isoTr;
	printInfo(shape_02);

	std::cout << std::endl;

	Equilateral eqTr(20);
	Shape* shape_03 = &eqTr;
	printInfo(shape_03);

	std::cout << std::endl;

	Tetragon tetra(10, 20, 30, 40, 50, 60, 70, 80);
	Shape* shape_04 = &tetra;
	printInfo(shape_04);

	std::cout << std::endl;

	Rectangle rect(10, 20);
	Shape* shape_05 = &rect;
	printInfo(shape_05);

	std::cout << std::endl;

	Square sq(20);
	Shape* shape_06 = &sq;
	printInfo(shape_06);

	std::cout << std::endl;

	Parallelogram paral(20, 30, 30, 40);
	Shape* shape_07 = &paral;
	printInfo(shape_07);

	std::cout << std::endl;

	Rhombus rhomb(30, 30, 40);
	Shape* shape_08 = &rhomb;
	printInfo(shape_08);


}