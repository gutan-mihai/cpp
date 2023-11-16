#pragma once

#include <iostream>

using namespace std;

// Пользователь вводит натуральное четырехзначное число.
// Выясните, является ли оно палиндромом (читается одинаково как слева направо,
// так и справа налево).

class NumberIsPalindrome {
public:
    void run() {
        cout << "Enter a number: ";
        string number;
        cin >> number;

        string inversed_string;
        for (auto rit = number.rbegin(); rit != number.rend(); ++rit) {
            inversed_string.push_back(*rit);
        }

        if (inversed_string == number) {
            cout << inversed_string << " is a palindrome \n";
        } else {
            cout << inversed_string << " is not a palindrome \n";
        }
    }
};