#include <iostream>
#include "counter.h"
#include <Windows.h>

int main() {

	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string cmd;
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
	std::cin >> cmd;

		if (cmd == "��") {
			std::cout << "������� ��������� �������� ��������: ";
			int x = 0;
			std::cin >> x;
			Counter count(x);
			do {
				std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
				std::cin >> cmd;
				count.Calculate(cmd);
			} while (cmd != "x");
		}
	
		else {
			Counter count;
			do {
				std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
				std::cin >> cmd;
				count.Calculate(cmd);
			} while (cmd != "�");
		}
}