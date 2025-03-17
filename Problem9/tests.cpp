#include "solution.h"
#include <iostream>
#include <cassert>

void test() {
    Solution solution;
    assert(solution.isPalindrome(121) == true);
    assert(solution.isPalindrome(-121) == false);
    assert(solution.isPalindrome(10) == false);
    std::cout << "All test cases passed!" << std::endl;
}

int main() {
    test();
    return 0;
}