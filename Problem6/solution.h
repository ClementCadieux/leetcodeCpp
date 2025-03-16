#include <string>
#include <vector>
#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s;

        std::vector<string> rows = {};

        for (int i = 0; i < numRows; i++)
        {
            /* code */
            rows.push_back("");
        }

        int direction = 1;

        int rowsIdx = 0;

        for (int i = 0; i < s.size(); i++)
        {
            /* code */
            rows[rowsIdx] += s[i];

            rowsIdx += direction;

            if (rowsIdx == 0 && direction == -1){
                direction = 1;
            } else if (rowsIdx == numRows - 1 && direction == 1){
                direction = -1;
            }
        }

        string res = "";

        for (int i = 0; i < rows.size(); i++)
        {
            /* code */
            res += rows[i];
        }

        return res;        
    }
};

#endif // SOLUTION_H