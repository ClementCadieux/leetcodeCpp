#include "solution.h"
#include <iostream>
#include <string>

class SolutionTest {
public:
    void runTest1() {
        Solution solution;
        std::string s = "abcabcbb";
        int result = solution.lengthOfLongestSubstring(s);
        std::cout << "TestCase1: Expected 3, Got " << result << std::endl;
    }

    void runTest2() {
        Solution solution;
        std::string s = "bbbbb";
        int result = solution.lengthOfLongestSubstring(s);
        std::cout << "TestCase2: Expected 1, Got " << result << std::endl;
    }

    void runTest3() {
        Solution solution;
        std::string s = "pwwkew";
        int result = solution.lengthOfLongestSubstring(s);
        std::cout << "TestCase3: Expected 3, Got " << result << std::endl;
    }

    void runTest4() {
        Solution solution;
        std::string s = "dvdf";
        int result = solution.lengthOfLongestSubstring(s);
        std::cout << "TestCase4: Expected 3, Got " << result << std::endl;
    }

    void runAllTests() {
        runTest1();
        runTest2();
        runTest3();
        runTest4();
    }
};

int main() {
    SolutionTest testSuite;
    testSuite.runAllTests();
    return 0;
}