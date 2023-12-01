#pragma once

#include <unordered_map>
#include <stack>
#include <vector>

// The next greater element of some element x in an array is the first greater element that is to the right of x in the
// same array.
// You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.
// For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater
// element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.
// Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.

// Monotonic Stack:
// https://www.geeksforgeeks.org/introduction-to-monotonic-stack-data-structure-and-algorithm-tutorials/

class Solution496 {
public:
    std::vector<int> nextGreaterElement(std::vector<int> &nums1, std::vector<int> &nums2) {
        std::vector<int> ans;
        int s1 = nums1.size();
        int s2 = nums2.size();

        std::stack<int> stk;
        std::unordered_map<int, int> u_map;
        for (int j = 0; j < s2; j++) {
            while (!stk.empty() && stk.top() < nums2[j]) {
                u_map[stk.top()] = nums2[j];
                stk.pop();
            }

            stk.push(nums2[j]);
            u_map[nums2[j]] = -1;
        }

        for (int i = 0; i < s1; i++) {
            ans.push_back(u_map[nums1[i]]);
        }

        return ans;
    }
};