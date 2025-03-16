#include "solution.h"
#include <iostream>
#include <cassert>

void testSolution() {
    Solution sol;

    // Test case 1: 123
    int result1 = sol.reverse(123);
    assert(result1 == 321);
    std::cout << "Test case 123 passed!" << std::endl;

    // Test case 2: -123
    int result2 = sol.reverse(-123);
    assert(result2 == -321);
    std::cout << "Test case -123 passed!" << std::endl;

    // Test case 3: 120
    int result3 = sol.reverse(120);
    assert(result3 == 21);
    std::cout << "Test case 120 passed!" << std::endl;
}

int main() {
    testSolution();
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}