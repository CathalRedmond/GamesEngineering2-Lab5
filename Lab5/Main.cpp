#include "NumberCheck.h"
int main()
{
	std::vector<int> numbers;
	std::cout << "Please Enter different 6 Numbers Between 1 and 46" << std::endl;
	for (int index = 0; index < 6; index++)
	{
		int num;
		std::cin >> num;
		numbers.push_back(num);
	}
	NumberCheck numberCheck(numbers);
	if (numberCheck.checkNoRepeatedNumbers() && numberCheck.checkNumbersInRange())
	{
		std::cout << "Numbers Entered Succesfully" << std::endl;
	}
	else
	{
		std::cout << "Numbers Entered Incorrectly" << std::endl;
	}
	system("Pause");
	return EXIT_SUCCESS;
}