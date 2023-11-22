#pragma once

#include <numeric>
#include <string>
#include <vector>

// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the
// integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer
// does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.

class Solution66 {
public:
    std::vector<int> plusOne(std::vector<int> &digits) {
        if (digits.empty()) {
            return digits;
        }

        int in_memory{1};
        std::vector<int> nums{};
        for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
            int num = *it;
            if (in_memory > 0) {
                num += in_memory;
            }

            if (num == 10) {
                num = 0;
                in_memory = 1;
            } else {
                in_memory = 0;
            }

            nums.insert(nums.begin(), 1, num);
        }

        if (in_memory > 0) {
            nums.insert(nums.begin(), 1, in_memory);
        }

        return nums;
    }
};