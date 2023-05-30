#include <iostream>
#include "calculator.h"



int main(int argc, char** argv ) 
{
	setlocale(LC_ALL, "ru");

	Calculator calc;
	int x, y;
	std::cout << "������� ������ �����: ";
	std::cin >> x;
	std::cout << "������� ������ �����: ";
	std::cin >> y;

	std::string cmd;
	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
	std::cin >> cmd;

	if (cmd == "1") {
		std::cout << x << " ���� " << y << " = " << calc.Sum(x, y);
	}
	else if (cmd == "2") {
		std::cout << x << " ����� " << y << " = " << calc.Divide(x, y);
	}
	else if (cmd == "3") {
		std::cout << x << " �������� �� " << y << " = " << calc.Mult(x, y);
	}
	else if (cmd == "4") {
		std::cout << x << " ��������� �� " << y << " = " << calc.Divide(x, y);
	}
	else if (cmd == "5") {
		std::cout << x << " � ������� " << y << " = " << calc.Power(x, y);
	}

	
}