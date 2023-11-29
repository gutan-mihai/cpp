#pragma once

#include <string>

// Given a valid (IPv4) IP address, return a defanged version of that IP address.
// A defanged IP address replaces every period "." with "[.]".

class Solutio1108 {
public:
    std::string defangIPaddr(std::string address) {
        std::string str;
        for (size_t i = 0; i < address.size(); i++) {
            if (address[i] == '.') {
                str += "[.]";
            } else {
                str += address[i];
            }
        }

        return str;
    }
};