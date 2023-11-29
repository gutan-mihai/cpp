#pragma once

#include <vector>

// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water
// it can trap after raining.

class Solution42 {
public:
    int trap(std::vector<int> &height) {
        int ans = 0;
        int left = 0;
        int right = height.size() - 1;
        int max_left = height[left];
        int max_right = height[right];
        while (left < right) {
            if (max_left <= max_right) {
                left++;
                max_left = std::max(max_left, height[left]);
                ans += max_left - height[left];
            } else {
                right--;
                max_right = std::max(max_right, height[right]);
                ans += max_right - height[right];
            }
        }
        
        return ans;
    }
};