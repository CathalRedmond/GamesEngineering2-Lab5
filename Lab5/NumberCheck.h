#pragma once
#include <iostream>
#include <vector>
class NumberCheck
{
public:
	NumberCheck(std::vector<int> t_numbers);
	bool checkNumbersInRange();
	bool checkNoRepeatedNumbers();
	std::vector<int> getNumbers();
private:
	std::vector<int> m_numbers;
};

