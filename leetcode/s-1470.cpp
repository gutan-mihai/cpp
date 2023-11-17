#pragma once

#include <vector>

using namespace std;

// Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
// Return the array in the form [x1,y1,x2,y2,...,xn,yn].

class Solution1470 {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int length = nums.size();
        for(size_t i = 0; i < length - n; ++i) {
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }

        return ans;
    }
};