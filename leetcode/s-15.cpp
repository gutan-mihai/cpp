#pragma once

#include <vector>

// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j !=
// k, and nums[i] + nums[j] + nums[k] == 0.
// Notice that the solution set must not contain duplicate triplets.

class Solution15 {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        std::vector<std::vector<int>> ans;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                break;
            }

            if (i > 0 && nums[i - 1] == nums[i]) {
                continue;
            }

            int left = i + 1;
            int right = n - 1;
            int target = nums[i];
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }

                    left++;

                    while (left < right && nums[right - 1] == nums[right]) {
                        right--;
                    }

                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return ans;
    }
};