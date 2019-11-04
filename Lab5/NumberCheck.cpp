#include "NumberCheck.h"

void NumberCheck::addNumbers(int numbers[6])
{
	for (int index = 0; index < NUMBER_OF_NUMBERS; index++)
	{
		m_numbers[index] = numbers[index];
	}
}

bool NumberCheck::checkNumbersInRange()
{
	bool numbersInRange = true;
	if (m_numbers != NULL)
	{
		for (int index = 0; index < NUMBER_OF_NUMBERS; index++)
		{
			if (m_numbers[index] < 1 || m_numbers[index] > 46)
			{
				numbersInRange = false;
			}
		}
	}
	else
	{
		numbersInRange = false;
	}
	return numbersInRange;
}

bool NumberCheck::checkNoRepeatedNumbers()
{
	bool noRepeatedNumbers = true;
	if (m_numbers != NULL)
	{
		for (int index = 0; index < NUMBER_OF_NUMBERS; index++)
		{
			for (int index2 = 0; index2 < NUMBER_OF_NUMBERS; index2++)
			{
				if (index != index2)
				{
					if (m_numbers[index] == m_numbers[index2])
					{
						noRepeatedNumbers = false;
					}
				}
			}
		}
	}
	else
	{
		noRepeatedNumbers = false;
	}
	return noRepeatedNumbers;
}
