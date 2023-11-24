#pragma once

#include <vector>
#include <stdint.h>

// Given an integer array nums, find a subarray that has the largest product, and return the product.
// The test cases are generated so that the answer will fit in a 32-bit integer.

// Kadane's algorithm: https://en.wikipedia.org/wiki/Maximum_subarray_problem

class Solution152 {
public:
    int maxProduct(std::vector<int> &nums) {
        int total_max{1};
        int total_min{1};
        int maximum = INT32_MIN;
        int minimum = INT32_MAX;

        for (int num : nums) {
            int m1 = total_min * num;
            int m2 = total_min * num;
            total_max = std::max(num, m1);
            total_min = std::min(num, m2);

            minimum = std::min(minimum, total_min);
            maximum = std::max(maximum, std::max(total_max, m2));
        }

        return maximum;
    }
};