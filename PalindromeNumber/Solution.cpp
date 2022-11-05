#include "Solution.h"
#include <math.h>
#include <iostream>

Solution::Solution() { };

bool Solution::isPalindrome(int x)
{
	if (x < 0) return false;
	if (x < 10) return true;

	int reverted_x = reverseInteger(x);
	bool isPalindrome = reverted_x == x;

	return isPalindrome;
}

int Solution::reverseInteger(int x)
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
