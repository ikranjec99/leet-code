#include "Solution.h"
#include <math.h>
#include <iostream>

Solution::Solution() {};

int Solution::reverse(int x)
{
	long number = abs(x);

	long new_number = 0;

	bool isNegative = x < 0;

	while (number)
	{
		new_number = new_number * 10 + number % 10;
		number /= 10;
	}

	if (new_number > INT_MAX)
	{
		return 0;
	}

	return isNegative ? new_number * -1 : new_number;
}