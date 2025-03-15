#include "solution.h"
#include <iostream>
#include <cassert>

void testLongestPalindrome() {
    Solution solution;

    // Test case 1
    std::string input1 = "babad";
    std::string expectedOutput1 = "bab"; // or "aba"
    std::string result1 = solution.longestPalindrome(input1);
    assert(result1 == "bab" || result1 == "aba");
    std::cout << "Test case 1 passed!" << std::endl;

    // Test case 2
    std::string input2 = "cbbd";
    std::string expectedOutput2 = "bb";
    std::string result2 = solution.longestPalindrome(input2);
    assert(result2 == expectedOutput2);
    std::cout << "Test case 2 passed!" << std::endl;
}

int main() {
    testLongestPalindrome();
    std::cout << "All test cases passed!" << std::endl;
    return 0;
}