#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0){
            return false;
        }

        if (x < 10) {
            return true;
        }

        if (x % 10 == 0){
            return false;
        }

        int revX = 0;

        while(revX < x){
            revX *= 10;
            revX += x%10;
            x /= 10;
        }

        if (x == 0){
            return false;
        }

        if (revX > x){
            revX /= 10;
        }

        return revX == x;
    }
};

#endif // SOLUTION_H