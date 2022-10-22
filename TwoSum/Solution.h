#pragma once
#include <vector>

class Solution 
{
public:
	Solution();

	std::vector<int> twoSum(std::vector<int>& nums, int target);

	// Only for solution print at the end
	void printResults(std::vector<int>& results);
};