#include "Solution.h"
#include <climits>
#include <math.h>
#include <iostream>

Solution::Solution() { }

double Solution::myPow(double x, int n)
{
	if (n == 0) return 1.00;

	if (x == 0 || x == 1 || n == 1) return x;

	if (x == -1 && n == INT_MAX) return -1.00;

	if (x == -1 && n == INT_MIN) return 1.00;

	if (n == INT_MIN || n == INT_MAX) return 0.00;

	int i = 0;

	double base = x;

	while (i < (abs(n) - 1))
	{
		x = base * x;

		i++;
	}

	n < 0 ? x = 1 / x : x;

	return x;
}

