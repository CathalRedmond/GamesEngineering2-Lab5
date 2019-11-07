#include <iostream>
#include <assert.h>
#include "../Lab5/NumberCheck.h"

int main()
{
	std::vector<int> testNumbers{ 1,2,3,4,5,6 };
	std::vector<int> wrongTestNumbers{ -1,0,47,47,1000 };

	NumberCheck numberCheck(testNumbers);
	NumberCheck failNumberCheck(wrongTestNumbers);

	assert(numberCheck.getNumbers().size() == 6);
	assert(failNumberCheck.getNumbers().size() != 6);
	assert(numberCheck.checkNoRepeatedNumbers() == true);
	assert(numberCheck.checkNumbersInRange() == true);
	assert(failNumberCheck.checkNoRepeatedNumbers() == false);
	assert(failNumberCheck.checkNumbersInRange() == false);
	return EXIT_SUCCESS;
}