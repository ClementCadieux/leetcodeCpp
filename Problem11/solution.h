#include <vector>
#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {   
        int left = 0, right = height.size() - 1;
        int max = (right - left) * min(height[left], height[right]);

        while (left < right)
        {
            /* code */
            if (height[left] > height[right]){
                right--;
            } else {
                left++;
            }

            int area = (right - left) * min(height[left], height[right]);

            if (area > max){
                max = area;
            }
        }

        return max;
    }
};
#endif // SOLUTION_H