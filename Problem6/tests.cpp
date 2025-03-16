#include "solution.h"
#include <iostream>
#include <cassert>

class SolutionTest {
public:
    void runTests() {
        test1();
        test2();
        test3();
    }

private:
    void test1() {
        Solution solution;
        std::string result = solution.convert("PAYPALISHIRING", 3);
        std::string expected = "PAHNAPLSIIGYIR";
        assert(result == expected);
        std::cout << "Test 1 passed: " << (result == expected) << std::endl;
    }

    void test2() {
        Solution solution;
        std::string result = solution.convert("PAYPALISHIRING", 4);
        std::string expected = "PINALSIGYAHRPI";
        assert(result == expected);
        std::cout << "Test 2 passed: " << (result == expected) << std::endl;
    }

    void test3() {
        Solution solution;
        std::string result = solution.convert("A", 1);
        std::string expected = "A";
        assert(result == expected);
        std::cout << "Test 3 passed: " << (result == expected) << std::endl;
    }
};

int main() {
    SolutionTest test;
    test.runTests();
    return 0;
}