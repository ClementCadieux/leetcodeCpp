#include <string>
#include <set>
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

        int left = 0, right = 0;

        while (right < s.size()){
            char curr = s[right];

            if (currChars.find(curr) != currChars.end()){
                if (currChars.size() > maxLength){
                    maxLength = currChars.size();
                }

                while(s[left] != curr){
                    currChars.erase(s[left]);
                    left++;
                }
            }

            currChars.insert(curr);
            right++;
        }

        if (currChars.size() > maxLength){
            return currChars.size();
        }

        return maxLength;
    }
};

#endif // SOLUTION_H