#pragma once

#include <algorithm>
#include <string>

using namespace std;

// You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you
// have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also
// jewels.

// Letters are case sensitive, so "a" is considered a different type of stone from "A".

class Solution771 {
public:
    int numJewelsInStones(string jewels, string stones) {
        int total{0};
        int n = stones.size();
        for(size_t i = 0; i < n; ++i) {
            auto found = find(jewels.begin(), jewels.end(), stones[i]);
            if (found != jewels.end()) {
                ++total;
            }
        }

        return total;
    }
};