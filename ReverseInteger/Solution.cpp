#include "Solution.h"
#include <math.h>

Solution::Solution() {};

int Solution::reverse(int x)
{
	bool isNegative = x < 0;

	int numberOfDigits = Solution::numberOfDigits(x);

	int result = 1;

	while (x > 0)
	{
		x = x % 10;

		result = result + x;

		numberOfDigits--;
	}

	return result;
}

int Solution::numberOfDigits(int x)
{
	int i = 0;

	while (x > 0) 
	{
		x = x / 10;
		i++;
	} 

	return i;
}