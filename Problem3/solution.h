#include <string>
#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        std::set<char> currChars = {};
        int maxLength = 0;

        for (int i = 0; i < s.size(); i++){
            char curr = s[i];

            if (currChars.count(curr) == 1){
                if (currChars.size() > maxLength){
                    maxLength = currChars.size();
                }

                currChars.clear();
            }

            currChars.insert(curr);
        }

        if (currChars.size() > maxLength){
            return currChars.size();
        }

        return maxLength;
    }
};

#endif // SOLUTION_H