#pragma once

#include <set>
#include <vector>

// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every
// element is distinct.

class Solution217 {
public:
    bool containsDuplicate(std::vector<int> &nums) {
        // sort(nums.begin(),nums.end());
        // for (int i = 0; i < nums.size() - 1; ++i) {
        //     if (nums[i] == nums[i + 1]) {
        //         return true;
        //     }
        // }

        // return false;

        std::set<int> unq_set;
        for (int i = 0; i < nums.size(); ++i) {
            unq_set.insert(nums[i]);
        }

        return unq_set.size() != nums.size();
    }
};