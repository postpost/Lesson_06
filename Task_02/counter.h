#pragma once

class Counter {
private:
	int x = 1;
public:
	//counstructors
	Counter();
	Counter(int x);
	//methods
	int Increment();
	int Decrement();
	int Result();
	void Close();
	void Calculate(std::string cmd);
};
