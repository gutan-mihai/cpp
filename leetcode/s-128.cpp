#pragma once

#include <vector>

// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
// You must write an algorithm that runs in O(n) time.

class Solution128 {
public:
    int longestConsecutive(std::vector<int> &nums) {
        if (nums.empty()) {
            return 0;
        }

        std::sort(nums.begin(), nums.end());
        int max_sequence{1}, sequence{0};
        int n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i] == nums[i + 1]) {
                continue;
            }

            if (nums[i] + 1 == nums[i + 1]) {
                sequence = (sequence == 0) ? (sequence + 2) : (sequence + 1);
            } else {
                sequence = 0;
            }

            max_sequence = std::max(max_sequence, sequence);
        }

        return max_sequence;
    }
};