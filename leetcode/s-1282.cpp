#pragma once

#include <algorithm>
#include <vector>

using namespace std;

// There are n people that are split into some unknown number of groups. Each person is labeled with a unique ID from 0
// to n - 1.

// You are given an integer array groupSizes, where groupSizes[i] is the size of the group that person i is in. For
// example, if groupSizes[1] = 3, then person 1 must be in a group of size 3.

// Return a list of groups such that each person i is in a group of size groupSizes[i].

// Each person should appear in exactly one group, and every person must be in a group. If there are multiple answers,
// return any of them. It is guaranteed that there will be at least one valid solution for the given input.

class Solution1282 {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        int n = groupSizes.size();
        for (int i = 0; i < n; ++i) {
            bool added = false;
            for (int j = 0; j < ans.size(); ++j) {
                if (ans[j].size() != groupSizes[i]) {
                    continue;
                }

                auto found = find(ans[j].begin(), ans[j].end(), -1);
                if (found != ans[j].end()) {
                    *found = i;
                    added = true;
                }
            }

            if (!added) {
                vector<int> v_new{i};
                for (int k = 0; k < groupSizes[i] - 1; k++) {
                    v_new.push_back(-1);
                }

                ans.push_back(v_new);
            }
        }

        return ans;
    }
};