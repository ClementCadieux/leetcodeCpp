#include <vector>
#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> seen = {};
        
        int totalSize = nums1.size() + nums2.size();

        int nums1Idx = 0, nums2Idx = 0;

        while(nums1Idx + nums2Idx <= totalSize / 2.0){
            if (nums1Idx == nums1.size()){
                seen.push_back(nums2[nums2Idx]);
                nums2Idx++;
            } else if (nums2Idx == nums2.size()){
                seen.push_back(nums1[nums1Idx]);
                nums1Idx++;
            } else {
                if (nums1[nums1Idx] < nums2[nums2Idx]){
                    seen.push_back(nums1[nums1Idx]);
                    nums1Idx++;
                } else {    
                    seen.push_back(nums2[nums2Idx]);
                    nums2Idx++;
                }
            }
        }

        int last = seen[seen.size() - 1];

        if (totalSize % 2 != 0){
            return last;
        }

        return (last + seen[seen.size() - 2]) / 2.0;
    }
};

#endif // SOLUTION_H