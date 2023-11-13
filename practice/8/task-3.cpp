#pragma once

#include <iostream>

using namespace std;

class StudentRatingCalculation {
public:
    void run() {
        cout << "Enter work experience in the specialty: ";
        int experience;
        cin >> experience;

        cout << "Enter average diploma score: ";
        float average;
        cin >> average;

        if (experience < 2) {
            average *= 13;
        } else if (experience >= 2 && experience <= 5) {
            average *= 15;
        }

        if (average > 45) {
            cout << "You have been accepted to the master's program \n";
        } else {
            cout << "You are not accepted to the master's program \n";
        }
    }
};