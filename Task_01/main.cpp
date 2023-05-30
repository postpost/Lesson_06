#include <iostream>
#include "calculator.h"



int main(int argc, char** argv ) 
{
	setlocale(LC_ALL, "ru");

	Calculator calc;
	int x, y;
	std::cout << "Введите первое число: ";
	std::cin >> x;
	std::cout << "Введите второе число: ";
	std::cin >> y;

	std::string cmd;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> cmd;

	if (cmd == "1") {
		std::cout << x << " плюс " << y << " = " << calc.Sum(x, y);
	}
	else if (cmd == "2") {
		std::cout << x << " минус " << y << " = " << calc.Divide(x, y);
	}
	else if (cmd == "3") {
		std::cout << x << " умножить на " << y << " = " << calc.Mult(x, y);
	}
	else if (cmd == "4") {
		std::cout << x << " разделить на " << y << " = " << calc.Divide(x, y);
	}
	else if (cmd == "5") {
		std::cout << x << " в степени " << y << " = " << calc.Power(x, y);
	}

	
}