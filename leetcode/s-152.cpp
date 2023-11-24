#pragma once

#include <vector>
#include <stdint.h>

// Given an integer array nums, find a subarray that has the largest product, and return the product.
// The test cases are generated so that the answer will fit in a 32-bit integer.

// Kadane's algorithm: https://en.wikipedia.org/wiki/Maximum_subarray_problem

class Solution152 {
public:
    int maxProduct(std::vector<int> &nums) {
        int n = nums.size();
        long long left_total{1};
        long long maximum = INT32_MIN;
        for (int i = 0; i < n; i++) {
            left_total *= nums[i];
            maximum = std::max(maximum, left_total);
            if (left_total == 0) {
                left_total = 1;
            }
        }

        long long right_total{1};
        for (int i = n - 1; i >= 0; i--) {
            right_total *= nums[i];
            maximum = std::max(maximum, right_total);
            if (right_total == 0) {
                right_total = 1;
            }
        }

        return maximum;
    }
};