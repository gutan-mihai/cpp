#pragma once

#include <iostream>

using namespace std;

class CorrectFormOfCent {
public:
    void run() {
        cout << "Enter a number from 1 to 99: \n";
        int number;
        cin >> number;

        if (number == 1) {
            cout << number << " копейка \n";
        } else if (number < 5) {
            cout << number << " копейки \n";
        } else {
            cout << number << " копеек \n";
        }
    }
};