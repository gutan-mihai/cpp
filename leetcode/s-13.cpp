#pragma once

#include <map>
#include <string>
#include <vector>

using namespace std;

/**
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X
+ II. The number 27 is written as XXVII, which is XX + V + II. Roman numerals are usually written largest to smallest
from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the
one is before the five we subtract it making four. The same principle applies to the number nine, which is written as
IX.

There are six instances where subtraction is used:
I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer.
*/

class Solution13 {
public:
    int romanToInt(string s) {
        /*
            // Best solution:
            int temp{0};
            int result{0};
            for (int i = s.size() - 1; i >= 0; --i) {
                int num = roman_to_int[s[i]];
                if (num > temp) {
                    result += num;
                } else {
                    result -= num;
                }

                temp = num;
            }
        */

        map<char, int> roman_to_int{
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000},
        };

        int result{0};
        for (int i = s.size() - 1; i >= 0; --i) {
            int first = roman_to_int[s[i]];
            result += first;

            if (i > 0) {
                int second = roman_to_int[s[i - 1]];
                if ((first == 5 || first == 10) && second == 1) {
                    result -= 1;
                    --i;
                }

                if ((first == 50 || first == 100) && second == 10) {
                    result -= 10;
                    --i;
                }

                if ((first == 500 || first == 1000) && second == 100) {
                    result -= 100;
                    --i;
                }
            }
        }

        return result;
    }
};