#pragma once

#include <vector>

using namespace std;

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to
// target. You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

class Solution1 {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        for (int i = 0; i < nums.size(); ++i) {
            int first = nums[i];
            int second = target - first;
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[j] == second) {
                    return vector<int>{i, j};
                }
            }
        }

        return {};
    }
};