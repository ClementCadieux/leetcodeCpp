#include <map>
#include <vector>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::map<int, int> numMap = {};

        for (int i = 0; i < nums.size(); i++)
        {
            int gap = target - nums[i];

            if (numMap.count(gap) == 1)
            {
                return {numMap[gap], i};
            }

            numMap[nums[i]] = i;
        }

        return {-1, -1};
    }
};