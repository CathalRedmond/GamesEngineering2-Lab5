#include "NumberCheck.h"
int main()
{
	int numbers[6];
	std::cout << "Please Enter different 6 Numbers Between 1 and 46" << std::endl;
	for (int index = 0; index < 6; index++)
	{
		std::cin >> numbers[index];
	}
	NumberCheck numberCheck;
	numberCheck.addNumbers(numbers);
	if (numberCheck.checkNoRepeatedNumbers() || numberCheck.checkNumbersInRange())
		std::cout << "Numbers Entered Succesfully" << std::endl;
	else
		std::cout << "Numbers Entered Incorrectly" << std::endl;
	return EXIT_SUCCESS;
}