#pragma once

#include <vector>
#include <unordered_map>

using namespace std;

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to
// target. You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

class Solution1 {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        std::unordered_map<int, int> num_to_index;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (num_to_index.find(complement) != num_to_index.end()) {
                return {num_to_index[complement], i};
            }

            num_to_index[nums[i]] = i;
        }

        return {};
    }
};