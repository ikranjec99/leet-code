#include "Solution.h"
#include <numeric>

Solution::Solution() {}

int Solution::pivotIndex(std::vector<int>& nums)
{
	int rightSum = std::accumulate(nums.begin(), nums.end(), 0);

	int leftSum = 0;

	int counter = 0;

	for (int num : nums)
	{
		rightSum -= num;

		if (leftSum == rightSum)
			return counter;

		leftSum += num;
		counter++;
	}

	return -1;
}

