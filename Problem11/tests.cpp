#include "solution.h"
#include <iostream>
#include <cassert>

void test_case_1(Solution *sol) {
    std::vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int expected = 49; // Assuming the function to test is named maxArea
    assert(sol->maxArea(heights) == expected);
    std::cout << "Test case 1 passed!" << std::endl;
}

void test_case_2(Solution *sol) {
    std::vector<int> heights = {1, 1};
    int expected = 1; // Assuming the function to test is named maxArea
    assert(sol->maxArea(heights) == expected);
    std::cout << "Test case 2 passed!" << std::endl;
}

int main() {
    Solution *sol = new Solution();
    test_case_1(sol);
    test_case_2(sol);
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}