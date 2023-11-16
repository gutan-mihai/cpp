#pragma once

#include <iostream>
#include <numeric>
#include <string>
#include "utils.h"

using namespace std;

// Напишите программу, которая определяет, является ли шестизначное число
// «счастливым» (сумма первых 3 цифр равна сумме последних 3 цифр).

class HappySixDigitNumber {
public:
    void run() {
        cout << "Enter a 6-digit number: ";
        string digit = get_digit();
        if (is_happy_digit(digit)) {
            cout << "It's happy digit! \n";
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
        auto v_front = utils::stov<vector<int>>(digit.substr(0, digit.size() / 2));
        auto v_back = utils::stov<vector<int>>(digit.substr(digit.size() / 2));

        int front_sum = accumulate(v_front.begin(), v_front.end(), 0);
        int back_sum = accumulate(v_back.begin(), v_back.end(), 0);

        return front_sum == back_sum;
    }
};