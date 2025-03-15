#include "solution.h"
#include <iostream>
#include <vector>
#include <cassert>

class SolutionTest {
public:
    void runTests() {
        test1();
        test2();
        std::cout << "All tests passed!" << std::endl;
    }

private:
    void test1() {
        Solution solution;
        std::vector<int> nums1 = {1, 3};
        std::vector<int> nums2 = {2};
        double result = solution.findMedianSortedArrays(nums1, nums2);
        assert(result == 2.0);
    }

    void test2() {
        Solution solution;
        std::vector<int> nums1 = {1, 2};
        std::vector<int> nums2 = {3, 4};
        double result = solution.findMedianSortedArrays(nums1, nums2);
        assert(result == 2.5);
    }
};

int main() {
    SolutionTest test;
    test.runTests();
    return 0;
}