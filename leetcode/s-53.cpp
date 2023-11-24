#pragma once

#include <vector>
#include <stdint.h>

// Given an integer array nums, find the subarray with the largest sum, and return its sum.

// Kadane's algorithm: https://en.wikipedia.org/wiki/Maximum_subarray_problem

class Solution53 {
public:
    int maxSubArray(std::vector<int> &nums) {
        int current_sum = 0;
        int maximum = INT32_MIN;
        for (int num : nums) {
            current_sum = std::max(num, current_sum + num);
            maximum = std::max(maximum, current_sum);
        }

        return maximum;
    }
};