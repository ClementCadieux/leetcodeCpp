#include "solution.h"
#include <gtest/gtest.h>

class SolutionTest : public ::testing::Test {
protected:
    Solution solution;
};

TEST_F(SolutionTest, TestCase1) {
    std::string s = "abcabcbb";
    int result = solution.lengthOfLongestSubstring(s);
    EXPECT_EQ(result, 3);
}

TEST_F(SolutionTest, TestCase2) {
    std::string s = "bbbbb";
    int result = solution.lengthOfLongestSubstring(s);
    EXPECT_EQ(result, 1);
}

TEST_F(SolutionTest, TestCase3) {
    std::string s = "pwwkew";
    int result = solution.lengthOfLongestSubstring(s);
    EXPECT_EQ(result, 3);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}