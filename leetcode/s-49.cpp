#pragma once

#include <map>
#include <string>
#include <vector>

class Solution49 {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs) {
        std::map<std::string, std::vector<std::string>> maps;
        for (int i = 0; i < strs.size(); ++i) {
            std::string key = strs[i];
            std::sort(key.begin(), key.end());
            maps[key].push_back(strs[i]);
        }

        std::vector<std::vector<std::string>> ans;
        for (const auto &[key, value] : maps) {
            ans.push_back(value);
        }

        return ans;
    }
};