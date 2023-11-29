#pragma once

#include <vector>

// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search
// target in nums. If target exists, then return its index. Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity.

class Solution704 {
public:
    int search(std::vector<int>& nums, int target) {
        int ans = -1;
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            }

            if (target > nums[mid]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};