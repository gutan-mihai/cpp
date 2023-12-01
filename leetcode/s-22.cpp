#pragma once

#include <stack>
#include <string>
#include <vector>

// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

// only add open parenthesis, if open < n
// only add closing parenthesis, if closed < open
// valid if open == closed == n

class Solution22 {
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> parentheses;
        int open, close = 0;
        while (true) {
            if (open < n) {
                // add open
            }

            if (close < open) {
                // add close
            }

            if (open == n && close == open) {
                break;
            }
        }

        return parentheses;
    }
};