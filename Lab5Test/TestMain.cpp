#include <iostream>
#include <assert.h>
#include "../Lab5/NumberCheck.h"

int main()
{
	NumberCheck numberCheck;
	NumberCheck failNumberCheck;
	int testNumber[6] = { 1,2,3,4,5,6 };
	int wrongTestNumbers[6] = { -1,0, 47,47,100, 5 };

	numberCheck.addNumbers(testNumber);
	failNumberCheck.addNumbers(wrongTestNumbers);

	assert(numberCheck.checkNoRepeatedNumbers() == true);
	assert(numberCheck.checkNumbersInRange() == true);
	assert(failNumberCheck.checkNoRepeatedNumbers() == false);
	assert(failNumberCheck.checkNumbersInRange() == false);

	return EXIT_SUCCESS;
}