#include "NumberCheck.h"

NumberCheck::NumberCheck(std::vector<int> t_numbers)
{
	for (int index = 0; index < t_numbers.size(); index++)
	{
		m_numbers.push_back(t_numbers[index]);
	}
}

bool NumberCheck::checkNumbersInRange()
{
	if (!m_numbers.empty())
	{
		for (int index = 0; index < m_numbers.size(); index++)
		{
			if (m_numbers[index] < 1 || m_numbers[index] > 46)
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool NumberCheck::checkNoRepeatedNumbers()
{
	if (!m_numbers.empty())
	{
		for (int index = 0; index < m_numbers.size(); index++)
		{
			for (int index2 = index + 1; index2 < m_numbers.size(); index2++)
			{
				if (m_numbers[index] == m_numbers[index2])
				{
					return false;
				}
			}
		}
	}
	else
	{
		return false;
	}
	return true;
}

std::vector<int> NumberCheck::getNumbers()
{
	return m_numbers;
}
