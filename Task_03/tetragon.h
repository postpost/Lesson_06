#pragma once
#include "shape.h"

class Tetragon :public Shape {
protected:
	int d;
	int D;
public:
	Tetragon();
	Tetragon(int a, int b, int c, int d, int A, int B, int C, int D);

	int get_d();
	int get_D();
	void printInfo() override;
};
