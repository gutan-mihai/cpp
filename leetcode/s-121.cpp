#pragma once

#include <vector>

// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future
// to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

class Solution121 {
public:
    int maxProfit(std::vector<int> &prices) {
        int profit{0};
        for (auto it = prices.begin(); it != prices.end(); ++it) {
            auto max = max_element(it, prices.end());
            int difference = (*max) - (*it);
            if (profit < difference) {
                profit = difference;
            }
        }

        return profit;
    }
};