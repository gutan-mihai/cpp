#pragma once

#include <vector>

using namespace std;

// Given an array of integers nums, return the number of good pairs.
// A pair (i, j) is called good if nums[i] == nums[j] and i < j.

class Solution1512 {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int good_pairs{0};
        int n = nums.size();
        for (size_t i = 0; i < n; ++i) {
            for (size_t j = i + 1; j < n; ++j) {
                if (nums[i] == nums[j]) {
                    ++good_pairs;
                }
            }
        }

        return good_pairs;
    }
};