#include <iostream>
#include "shape.h"

Shape::Shape() {
	shapeName = " ";
	this->a = 0;
	this->b = 0;
	this->c = 0;
	this->A = 0;
	this->B = 0;
	this->C = 0;
};

std::string Shape:: get_name() {
	return shapeName;
};
int Shape::get_a() {
	return a;
};
int Shape::get_b() {
	return b;
};
int Shape::get_c() {
	return c;
};

int Shape::get_A() {
	return A;
};
int Shape::get_B() {
	return B;
};
int Shape::get_C() {
	return C;
};

 void Shape::printInfo() {
	std::cout << get_name() << ":" << '\n'
		<< "Стороны: a=" << get_a() << " b=" << get_b() << " c=" << get_c() << '\n'
		<< "Углы: A=" << get_A() << " B=" << get_B() << " C=" << get_C() << std::endl;
};