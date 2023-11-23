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
        int price{0};
        for (auto it = prices.rbegin(); it != prices.rend(); ++it) {
            int current_price = *it;
            price = std::max(price, current_price);
            profit = std::max(profit, price - current_price);
        }

        return profit;
    }
};