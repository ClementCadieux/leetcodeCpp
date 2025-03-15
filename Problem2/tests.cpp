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

        // Create list nodes for l1: 2 -> 4 -> 3
        ListNode* l1 = new ListNode(2);
        l1->next = new ListNode(4);
        l1->next->next = new ListNode(3);

        // Create list nodes for l2: 5 -> 6 -> 4
        ListNode* l2 = new ListNode(5);
        l2->next = new ListNode(6);
        l2->next->next = new ListNode(4);

        // Call addTwoNumbers
        ListNode* result = sol.addTwoNumbers(l1, l2);

        // Print the result
        while (result != nullptr) {
            std::cout << result->val << " ";
            result = result->next;
        }
        std::cout << std::endl;
    }

    void runTest2()
    {
        Solution sol;

        // Create list nodes for l1: 0
        ListNode* l1 = new ListNode(0);

        // Create list nodes for l2: 0
        ListNode* l2 = new ListNode(0);

        // Call addTwoNumbers
        ListNode* result = sol.addTwoNumbers(l1, l2);

        // Print the result
        while (result != nullptr) {
            std::cout << result->val << " ";
            result = result->next;
        }
        std::cout << std::endl;
    }

    void runTest3()
    {
        Solution sol;

        // Create list nodes for l1: 9 -> 9 -> 9 -> 9 -> 9 -> 9 -> 9
        ListNode* l1 = new ListNode(9);
        l1->next = new ListNode(9);
        l1->next->next = new ListNode(9);
        l1->next->next->next = new ListNode(9);
        l1->next->next->next->next = new ListNode(9);
        l1->next->next->next->next->next = new ListNode(9);
        l1->next->next->next->next->next->next = new ListNode(9);

        // Create list nodes for l2: 9 -> 9 -> 9 -> 9
        ListNode* l2 = new ListNode(9);
        l2->next = new ListNode(9);
        l2->next->next = new ListNode(9);
        l2->next->next->next = new ListNode(9);

        // Call addTwoNumbers
        ListNode* result = sol.addTwoNumbers(l1, l2);

        // Print the result
        while (result != nullptr) {
            std::cout << result->val << " ";
            result = result->next;
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
