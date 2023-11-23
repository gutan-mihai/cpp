#pragma once

#include <numeric>
#include <vector>

// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements
// of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.

// arr: [1,2,3]
// 1. preProduct: [1,1,2]
// 2. postProduct: [6,3,2]
// 3. answer: postProduct

// 1. prefix: [1,1,2] // prefix[i] = prefix[i - 1] * nums[i - 1]
// 2. suffix: [6,3,1] // suffix[i] = suffix[i + 1] * nums[i + 1]
// 3. answer: prefix[i] * suffix[i]

class Solution238 {
public:
    std::vector<int> productExceptSelf(std::vector<int> &nums) {
        int n = nums.size();
        std::vector<int> prefix(n, 1), suffix(n, 1);
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < n; i++) {
            prefix[i] = prefix[i] * suffix[i];
        }

        return prefix;

        // int n = nums.size();
        // std::vector<int> answer(n);

        // int product{1};
        // for (int i = 0; i < n; ++i) {
        //     answer[i] = product;
        //     product *= nums[i];
        // }

        // product = 1;
        // for (int i = n - 1; i >= 0; --i) {
        //     answer[i] *= product;
        //     product *= nums[i];
        // }

        // return answer;
    }
};