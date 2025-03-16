#include "solution.h"
#include <iostream>
#include <cassert>

void test_myAtoi() {
    Solution *sol = new Solution();
    assert(sol->myAtoi("42") == 42);
    std::cout << "Test case '42' passed." << std::endl;

    assert(sol->myAtoi("-042") == -42);
    std::cout << "Test case '-042' passed." << std::endl;

    assert(sol->myAtoi("1337c0d3") == 1337);
    std::cout << "Test case '1337c0d3' passed." << std::endl;

    assert(sol->myAtoi("0-1") == 0);
    std::cout << "Test case '0-1' passed." << std::endl;

    assert(sol->myAtoi("we are 987") == 0);
    std::cout << "Test case 'we are 987' passed." << std::endl;
}

int main() {
    test_myAtoi();
    std::cout << "All test cases passed." << std::endl;
    return 0;
}