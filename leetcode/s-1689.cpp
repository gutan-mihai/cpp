#pragma once

#include <string>

// A decimal number is called deci-binary if each of its digits is either 0 or 1 without any leading zeros. For example,
// 101 and 1100 are deci-binary, while 112 and 3001 are not.

// Given a string n that represents a positive decimal integer, return the minimum number of positive deci-binary
// numbers needed so that they sum up to n.

// TBH, I started to thing up complex things about this question until I read some hints and bingo I was there with the
// solution. So, lets take an example of n="1342" So what do we want, we want minimum deci-binary numbers to sum upto
// this.

// Lets there be 4 numbers:
// 1111
// 0111
// 0110
// 0010

// Sum of these numbers gives us 1342. So basically we require maximum digit number of numbers of deci-binary numbers to
// achieve this feat.

class Solution1689 {
public:
    int minPartitions(std::string n) {
        char max = 0;
        for (char c : n) {
            if (c > max) {
                max = c;
            }
        }

        return max - '0';
    }
};