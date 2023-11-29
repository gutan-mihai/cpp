#pragma once

#include <vector>

// Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and
// ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
// Specifically, ans is the concatenation of two nums arrays.

class Solution1929 {
public:
    std::vector<int> getConcatenation(std::vector<int> &nums) {
        std::vector<int> ans = nums;
        for (size_t i = 0; i < nums.size(); ++i) {
            ans.push_back(nums[i]);
        }

        return ans;
    }
};