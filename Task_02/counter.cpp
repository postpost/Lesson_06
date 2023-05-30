#include <iostream>
#include "counter.h"


Counter::Counter() {
	this->x = 1;
};

Counter::Counter(int x) {
	this->x = x;
};

int Counter:: Increment() {
	return x++;
};
int Counter::Decrement() {
	return x--;
};

int Counter::Result() {
	return x;
};

void Counter::Close() {
	std::cout << "До свидания!";
};

void Counter::Calculate(std::string cmd) {
	if (cmd == "+") {
		Increment();
	}
	else if (cmd == "-") {
		Decrement();
	}
	else if (cmd == "=") {
		std:: cout << Result() << std:: endl;
	}
	else if (cmd == "х") {
		Close();
	}
};