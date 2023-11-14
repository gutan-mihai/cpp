#pragma once

#include <iostream>

using namespace std;

class LearYear {
public:
    void run() {
        cout << "Enter year: ";
        int year;
        cin >> year;

        if (isLeapYear(year)) {
            cout << year << " is a leap year \n";
        } else {
            cout << year << " is not a leap year \n";
        }
    }

private:
    bool isLeapYear(const int &year) {
        if (year % 400 == 0) {
            return true;
        }

        if (year % 100 != 0 && year % 4 == 0) {
            return true;
        }

        return false;
    }
};