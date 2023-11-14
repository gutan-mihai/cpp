#pragma once

#include <iostream>

using namespace std;

// Напишите программу, которая определяет, является ли шестизначное число
// «счастливым» (сумма первых 3 цифр равна сумме последних 3 цифр).

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