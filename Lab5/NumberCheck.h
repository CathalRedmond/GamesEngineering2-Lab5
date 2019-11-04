#pragma once
#include <iostream>
class NumberCheck
{
public:
	NumberCheck() {}
	void addNumbers(int numbers[6]);
	bool checkNumbersInRange();
	bool checkNoRepeatedNumbers();
private:
	static const int NUMBER_OF_NUMBERS = 6;
	int m_numbers[NUMBER_OF_NUMBERS];
};

