#pragma once
#include <string>

class Shape {
protected:
	std::string shapeName;
	int a, b, c;
	int A, B, C;
public:
	Shape();

	std::string get_name();

	int get_a();
	int get_b();
	int get_c();
	
	int get_A();
	int get_B();
	int get_C();

	virtual void printInfo();

};
