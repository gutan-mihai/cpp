#pragma once

#include <vector>
#include <stdint.h>

// Given an integer array nums, find the subarray with the largest sum, and return its sum.
// Kadane's algorithm: https://en.wikipedia.org/wiki/Maximum_subarray_problem

class Solution53 {
public:
    int maxSubArray(std::vector<int> &nums) {
        if (nums.empty()) {
            return 0;
        }

        int current_sum = nums[0];
        int maximum = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            current_sum = std::max(nums[i], current_sum + nums[i]);
            maximum = std::max(maximum, current_sum);
        }

        return maximum;
    }
};