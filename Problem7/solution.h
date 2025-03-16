#include <limits>

#ifndef SOLUTION_H
#define SOLUTION_H

using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int mult = x < 0 ? -1 : 1;

        long xLong = x;

        if (xLong < 0)
        {
            xLong *= -1;
        }

        long res = 0;

        while (xLong > 0)
        {
            res *= 10;
            res += xLong % 10;
            xLong /= 10;
        }

        if (res * mult > std::numeric_limits<int>::max() || res * mult < std::numeric_limits<int>::min())
        {
            return 0;
        }

        return res * mult;
    }
};

#endif // SOLUTION_H