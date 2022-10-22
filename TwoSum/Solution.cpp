#include <iostream>
#include "Solution.h"
#include <map>
#include <unordered_map>

Solution::Solution() { }

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target)
{
	std::unordered_map<int, int> unordered_map;

	for (int i = 0; i < (int)nums.size(); i++)
	{
		int complement = target - nums[i];

		if (unordered_map.count(complement)) 
		{
			return { i, unordered_map[complement] };
		}

		unordered_map[nums[i]] = i;
	}

	return { };
}
