#include <iostream>
#include "counter.h"
#include <Windows.h>

int main() {

	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string cmd;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> cmd;

		if (cmd == "да") {
			std::cout << "Введите начальное значение счётчика: ";
			int x = 0;
			std::cin >> x;
			Counter count(x);
			do {
				std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
				std::cin >> cmd;
				count.Calculate(cmd);
			} while (cmd != "x");
		}
	
		else {
			Counter count;
			do {
				std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
				std::cin >> cmd;
				count.Calculate(cmd);
			} while (cmd != "х");
		}
}