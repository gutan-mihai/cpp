#pragma once

#include <map>
#include <string>

// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is
// valid. An input string is valid if:
// 1. Open brackets must be closed by the same type of brackets.
// 2. Open brackets must be closed in the correct order.
// 3. Every close bracket has a corresponding open bracket of the same type.

class Solution20 {
public:
    bool isValid(std::string s) {
        if (s.size() % 2 != 0) {
            return false;
        }

        map<char, char> brackets{
            {'(', ')'},
            {'[', ']'},
            {'{', '}'},
        };

        int len = s.size();
        for (int i = 0; i < len; ++i) {
        }

        return true;
    }
};