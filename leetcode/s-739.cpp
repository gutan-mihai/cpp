#pragma once

#include <stack>
#include <vector>

// Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i]
// is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for
// which this is possible, keep answer[i] == 0 instead.

// Monotonic Stack:
// https://www.geeksforgeeks.org/introduction-to-monotonic-stack-data-structure-and-algorithm-tutorials/

// Monotonic Increasing Stack = {1, 4, 5, 3, 12, 10}
// For i = 0: stk = {1}
// For i = 1: stk = {1, 4}
// For i = 2: stk = {1, 4, 5}
// For i = 3: stk = {1, 3}  [pop 4 and 5 as 4 > 3 and 5 > 3]
// For i = 4: stk = {1, 3, 12}
// For i = 5: stk = {1, 3, 10} [pop 12 as 12 > 10]

// Monotonic Decreasing Stack = {15, 17, 12, 13, 14, 10}
// For i = 0: stk = {15}
// For i = 1: stk = {17} [pop 15 as 15 < 17]
// For i = 2: stk = {17, 12}
// For i = 3: stk = {17, 13} [pop 12 as 12 < 13]
// For i = 4: stk = {17, 14} [pop 13 as 13 < 14]
// For i = 5: stk = {17, 14, 10}

class Solution739 {
public:
    std::vector<int> dailyTemperatures(std::vector<int> &temperatures) {
        int n = temperatures.size();
        std::stack<std::pair<int, int>> stk;
        std::vector<int> ans(n);       
        
        for (int i = 0; i < n; i++) {
            int currDay = i;
            int currTemp = temperatures[i];
            while (!stk.empty() && stk.top().second < currTemp) {
                int prevDay = stk.top().first;
                int prevTemp = stk.top().second;
                stk.pop();
                
                ans[prevDay] = currDay - prevDay;
            }
            
            stk.push({currDay, currTemp});
        }

        return ans;
    }
};