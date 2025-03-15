#include <string>
#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int start = 0, end = 0;

        for (int i = 0; i < s.size(); i++)
        {
            /* code */
            int len1 = expandAroundCenter(s, i, i);
            int len2 = expandAroundCenter(s, i, i + 1);
            int len = max(len1, len2);

            if (len > end - start){
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }

        return s.substr(start, end - start + 1);
        
    }

private:
    int expandAroundCenter(string s, int l, int r){
        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            /* code */
            l--;
            r++;
        }
        return r - l - 1;
    }
};

#endif // SOLUTION_H