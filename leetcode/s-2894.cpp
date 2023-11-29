#pragma once

#include <vector>

// You are given positive integers n and m.
// Define two integers, num1 and num2, as follows:
// - num1: The sum of all integers in the range [1, n] that are not divisible by m.
// - num2: The sum of all integers in the range [1, n] that are divisible by m.

// Return the integer num1 - num2.

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int total{0};
        for (int i = 1; i <= n; ++i) {
            total = (i % m != 0) ? (total + i) : (total - i);
        }

        return total;
    }
};