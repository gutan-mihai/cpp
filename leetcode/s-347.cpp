#pragma once

#include <map>
#include <unordered_map>
#include <queue>
#include <vector>

// Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any
// order.

// Follow up: Your algorithm's time complexity must be better than O(n log n), where n is the array's size.

class Solution347 {
public:
    std::vector<int> topKFrequent(std::vector<int> &nums, int k) {
        // Fastest solution:
        // std::unordered_map<int, int> m;
        // std::priority_queue<std::pair<int, int>> pq;
        // std::vector<int> ans;

        // for (auto i : nums) {
        //     m[i]++;
        // }

        // for (auto i : m) {
        //     pq.push({i.second, i.first});
        // }

        // while (k--) {
        //     ans.push_back(pq.top().second);
        //     pq.pop();
        // }

        // return ans;

        std::map<int, int> frq;
        for (int i = 0; i < nums.size(); ++i) {
            frq[nums[i]]++;
        }

        std::vector<std::pair<int, int>> v_sort{frq.begin(), frq.end()};
        sort(v_sort.begin(), v_sort.end(), [](std::pair<int, int> l, std::pair<int, int> r) { return l.second > r.second; });

        std::vector<int> ans;
        for (int i = 0; i < k; ++i) {
            ans.push_back(v_sort[i].first);
        }

        return ans;
    }
};