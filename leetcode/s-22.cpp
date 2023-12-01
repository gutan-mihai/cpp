#pragma once

#include <string>
#include <vector>

class Solution22 {
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        fill_vector(n, 0, 0, "", result);

        return result;
    }

private:
    void fill_vector(int n, int open, int close, std::string str, std::vector<std::string> &result) {
        if (open == n && close == n) {
            result.push_back(str);
            
            return;
        }

        if (open < n) {
            fill_vector(n, open + 1, close, str + '(', result);
        }
        
        if (open > close) {
            fill_vector(n, open, close + 1, str + ')', result);
        }
    }
};