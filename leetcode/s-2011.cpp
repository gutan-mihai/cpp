#pragma once

#include <vector>
#include <string>

// There is a programming language with only four operations and one variable X:
// 1. ++X and X++ increments the value of the variable X by 1.
// 2. --X and X-- decrements the value of the variable X by 1.

// Initially, the value of X is 0.
// Given an array of strings operations containing a list of operations, return the final value of X after performing
// all the operations.

class Solution2011 {
public:
    int finalValueAfterOperations(std::vector<std::string> &operations) {
        int x{0};
        int n = operations.size();
        for (size_t i = 0; i < n; ++i) {
            if (operations[i] == "--X") {
                --x;
            } else if (operations[i] == "X--") {
                x--;
            } else if (operations[i] == "++X") {
                ++x;
            } else if (operations[i] == "X++") {
                x++;
            }
        }

        return x;
    }
};