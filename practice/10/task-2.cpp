#pragma once

#include <iostream>

using namespace std;

class HappySixDigitNumber {
public:
    void run() {
        cout << "Enter a 6-digit number: ";
        string number = get_number();
    }

private:
    string get_number() {
        string number;
        getline(cin, number);
        if (number.size() != 6) {
            return get_number();
        }

        return number;
    }
};