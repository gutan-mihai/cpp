#pragma once

#include <vector>

// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length)
// such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).
// For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums,
// or -1 if it is not in nums.

class Solution33 {
public:
    int search(std::vector<int> &nums, int target) {
        if (nums.empty()) {
            return -1;
        }
       
        int front = nums.front();
        int back = nums.back();
        if (target < front && target > back) {
            return -1;
        }

        int n = nums.size();
        if (front > target) {
            for (int i = 0; i < n; ++i) {
                if (nums[i] == target) {
                    return i;
                }
            }
        } else {
            for (int i = n - 1; i >= 0; --i) {
                if (nums[i] == target) {
                    return i;
                }
            }
        }

        return -1;
    }
};