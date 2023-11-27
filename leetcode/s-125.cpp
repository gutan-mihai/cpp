#pragma once

#include <ctype.h>
#include <string>

// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all
// non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and
// numbers.
// Given a string s, return true if it is a palindrome, or false otherwise.

class Solution125 {
public:
    bool isPalindrome(std::string s) {
        int l = 0;
        int r = s.size() - 1;
        while (l < r) {
            if (!std::isalnum(s[l])) {
                l++;
                continue;
            }
            
            if (!std::isalnum(s[r])) {
                r--;
                continue;
            }
            
            if (std::tolower(s[l]) != std::tolower(s[r])) {
                return false;
            } 
            
            l++;
            r--;
        }

        return true;
    }
};