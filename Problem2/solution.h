#ifndef SOLUTION_H
#define SOLUTION_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int carry = 0;

        ListNode *res;
        ListNode *curr;

        while (l1 != nullptr && l2 != nullptr)
        {
            /* code */
            int sum = l1->val + l2->val + carry;

            if (sum >= 10){
                carry = 1;
                sum -= 10;
            } else {
                carry = 0;
            }

            if (res == nullptr){
                res = new ListNode(sum);
                curr = res;
            } else {
                curr->next = new ListNode(sum);
                curr = curr->next;
            }

            l1 = l1->next;
            l2 = l2->next;
        }
        
        ListNode *remaining;

        if(l1 == nullptr){
            remaining = l2;
        } else {
            remaining = l1;
        }

        while (remaining != nullptr){
            int sum = carry + remaining->val;

            if (sum >= 10){
                sum -= 10;
                carry = 1;
            } else {
                carry = 0;
            }

            curr->next = new ListNode(sum);
            curr = curr->next;

            remaining = remaining->next;
        }

        return res;
    }
};

#endif // SOLUTION_H