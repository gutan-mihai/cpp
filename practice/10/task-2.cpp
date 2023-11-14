#pragma once

#include <iostream>

using namespace std;

// Напишите программу, которая определяет, является ли шестизначное число
// «счастливым» (сумма первых 3 цифр равна сумме последних 3 цифр).

class HappySixDigitNumber {
public:
    void run() {
        cout << "Enter a 6-digit number: ";
        string digit = get_digit();
        if (is_happy_digit(digit)) {
            cout << "Is happy digit! \n";
        } else {
            cout << "Does not happy digit! \n";
        }
    }

private:
    string get_digit() {
        string digit;
        getline(cin, digit);
        if (digit.size() != 6) {
            return get_digit();
        }

        return digit;
    }

    bool is_happy_digit(const string &digit) {
        return true;
    }
};