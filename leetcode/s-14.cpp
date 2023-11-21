    #pragma once

#include <string>
#include <vector>

// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

class Solution14 {
public:
    std::string longestCommonPrefix(std::vector<std::string> &strs) {
        if (strs.empty()) {
            return "";
        }

        std::string prefix = strs.front();
        for (int i = 0; i < strs.size(); ++i) {
            if (prefix.size() > strs[i].size()) {
                prefix = strs[i];
            }
        }

        for (int i = 0; i < strs.size(); ++i) {
            for (int n = 0; n < prefix.size(); ++n) {
                if (prefix[n] != strs[i][n]) {
                    prefix = prefix.substr(0, n);
                }
            }
        }

        return prefix;
    }
};