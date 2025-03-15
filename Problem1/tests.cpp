#include "Solution.h"
#include <iostream>
#include <vector>

template <typename T>
class tests
{
public:
    void runTest1()
    {
        Solution sol;

        std::vector<int> inputList = {2, 7, 11, 15};
        int target = 9;

        std::vector<int> res = sol.twoSum(inputList, target);

        for (int num : res) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    void runTest2()
    {
        Solution sol;

        std::vector<int> inputList = {3, 2, 4};
        int target = 6;

        std::vector<int> res = sol.twoSum(inputList, target);

        for (int num : res) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    void runTest3()
    {
        Solution sol;

        std::vector<int> inputList = {3, 3};
        int target = 6;

        std::vector<int> res = sol.twoSum(inputList, target);

        for (int num : res) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    tests<int> testSuite;
    testSuite.runTest1();
    testSuite.runTest2();
    testSuite.runTest3();

    return 0;
}
