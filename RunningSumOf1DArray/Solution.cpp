#include <iostream>
#include "Solution.h"

Solution::Solution() { };

std::vector<int> Solution::runningSum(std::vector<int>& nums)
{
	int sum = 0;

	std::vector<int> result = { };

	for (int i : nums)
	{
		sum += i;
		result.push_back(sum);
	}

	return result;
}

void Solution::printSolution(std::vector<int>& nums)
{
	std::cout << "{ ";

	for (int i : nums)
	{
		std::cout << i << " ";
	}

	std::cout << "}";
};