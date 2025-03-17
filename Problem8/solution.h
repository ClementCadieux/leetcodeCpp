#include <string>
#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        int sIdx = 0;

        while(sIdx < s.size() && isspace(s[sIdx])){
            sIdx++;
        }

        bool negative = s[sIdx] == '-';

        if(negative){
            sIdx++;
        }

        long res = 0;

        for (int i = sIdx; i < s.size(); i++)
        {
            /* code */
            char curr = s[i];

            if (isdigit(curr)){
                res *= 10;
                res += curr - '0';
            } else if (res > INT_MAX){
                return negative ? INT_MIN : INT_MAX;
            } else {
                return (int)(res * (negative ? -1 : 1));
            }
        }

        return (int)(res * (negative ? -1 : 1));        
    }
};

#endif // SOLUTION_H