#pragma once

#include <vector>

// You are given an integer array pref of size n. Find and return the array arr of size n that satisfies:
// - pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i].
// Note that ^ denotes the bitwise-xor operation. It can be proven that the answer is unique.

// Hint:
// 1. Consider the following equation: x ^ a = b. How can you find x?
// 2. Notice that arr[i] ^ pref[i-1] = pref[i]. This is the same as the previous equation.

class Solution2433 {
public:
    std::vector<int> findArray(std::vector<int> &pref) {
        std::vector<int> ans{pref.front()};
        for (size_t i = 1; i < pref.size(); ++i) {
            ans.push_back(pref[i - 1] ^ pref[i]);
        }

        return ans;
    }
};