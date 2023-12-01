#pragma once

#include <stack>
#include <string>
#include <vector>

// You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.
// Evaluate the expression. Return an integer that represents the value of the expression.

// Note that:
// - The valid operators are '+', '-', '*', and '/'.
// - Each operand may be an integer or another expression.
// - The division between two integers always truncates toward zero.
// - There will not be any division by zero.
// - The input represents a valid arithmetic expression in a reverse polish notation.
// - The answer and all the intermediate calculations can be represented in a 32-bit integer.

// Reverse Polish Notation: https://en.wikipedia.org/wiki/Reverse_Polish_notation

class Solution150 {
public:
    int evalRPN(std::vector<std::string> &tokens) {
        std::stack<int> nums;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                int right = nums.top(); nums.pop();
                int left = nums.top(); nums.pop();

                if (tokens[i] == "+") {
                    nums.push(left + right);
                } else if (tokens[i] == "-") {
                    nums.push(left - right);
                } else if (tokens[i] == "*") {
                    nums.push(left * right);
                } else {
                    nums.push(left / right);
                }
            } else {
                nums.push(stoi(tokens[i]));
            }
        }

        return nums.top();
    }
};