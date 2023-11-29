#pragma once

#include <vector>
#include <stdint.h>

// Given an integer array nums, find a subarray that has the largest product, and return the product.
// The test cases are generated so that the answer will fit in a 32-bit integer.

// Kadane's algorithm: https://en.wikipedia.org/wiki/Maximum_subarray_problem

class Solution152 {
public:
    int maxProduct(std::vector<int> &nums) {
        if (nums.empty()) {
            return 0;
        }

        int max_prod = nums[0];
        int min_prod = nums[0];
        int ans = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] < 0) {
                std::swap(max_prod, min_prod);
            }

            max_prod = std::max(nums[i], max_prod * nums[i]);
            min_prod = std::min(nums[i], min_prod * nums[i]);
            ans = std::max(ans, max_prod);
        }

        return ans;
    }
};