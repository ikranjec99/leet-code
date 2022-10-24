#include "iostream"
#include "Solution.h"

Solution::Solution() {}

int Solution::myAtio(std::string s)
{
	int index = 0;
	int length = Solution::numericalCharactersLength(s);
	int value = 0;
	bool isNegativeNum = Solution::anyCharRepresentsNegativeNumber(s);

	for (char c : s)
	{
		if (Solution::isCharNumber(c))
		{
			int val = Solution::charToInt(c);
			value += (val * pow(10, length - index - 1));
			index++;
		}
	}

	return isNegativeNum ? (-1 * value) : value;
}

bool Solution::anyCharRepresentsNegativeNumber(std::string s)
{
	for (char c : s)
	{
		if ((int)c == 45) return true;
	}

	return false;
}

int Solution::charToInt(char c)
{
	bool isNumber = Solution::isCharNumber(c);

	if (isNumber)
	{
		return (int)c - 48;
	}
	else
	{
		return -1;
	}
}

bool Solution::isCharNumber(char c)
{
	return int(c) >= 48 && int(c) <= 57;
}

int Solution::numericalCharactersLength(std::string s)
{
	int len = 0;

	for (char c : s)
	{
		int val = Solution::charToInt(c);

		if (val > -1)
		{
			len++;
		}
	}

	return len;
}
