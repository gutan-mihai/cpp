#pragma once

// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer
// should be non-negative as well. You must not use any built-in exponent function or operator. For example, do not use
// pow(x, 0.5) in c++ or x ** 0.5 in python.

class Solution69 {
public:
    int mySqrt(int x) {
        int ans{0};
        int inc{1};
        long square{0};

        while (square < x) {
            square += inc;
            inc += 2;
            if (square > x) {
                break;
            }

            ++ans;
        }

        return ans;
    }
};