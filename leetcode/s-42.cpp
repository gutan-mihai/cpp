#pragma once

#include <vector>

// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water
// it can trap after raining.

class Solution42 {
public:
    int trap(std::vector<int> &height) {
        if (height.size() < 3) {
            return 0;
        }

        int water{0};

        return water;
    }
};