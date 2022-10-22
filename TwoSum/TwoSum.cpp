#include <iostream>
#include "Solution.h"

int main()
{
    Solution solution;
    
    std::vector<int> values = { 3, 2, 4 };
    int target = 6;
    
    std::vector<int> vector = solution.twoSum(values, target);

    solution.printResults(vector);
}
