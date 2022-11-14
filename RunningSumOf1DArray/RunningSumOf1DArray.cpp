#include <iostream>
#include "Solution.h"

int main()
{
    Solution* sln = new Solution();

    std::vector<int> input = { 1, 2, 3, 4 };

    std::vector<int> output = { };

    output = sln->runningSum(input);
}