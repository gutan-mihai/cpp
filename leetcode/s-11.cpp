#pragma once

#include <vector>

// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of
// the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Return the maximum amount of water a container can store.
// Notice that you may not slant the container.

class Solution11 {
public:
    int maxArea(std::vector<int> &height) {
        int max_area{0};
        int l = 0;
        int r = height.size() - 1;
        while (l < r) {
            int num = std::min(height[l], height[r]);
            max_area = std::max(max_area, (r - l) * num);
            if (height[l] < height[r]) {
                ++l;
            } else {
                --r;
            }
        }

        return max_area;
    }
};