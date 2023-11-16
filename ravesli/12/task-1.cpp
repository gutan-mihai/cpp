#pragma once

#include <iostream>
#include <string> // для функции getline()

using namespace std;

// Напишите программу, которая выводит строку, введенную пользователем, задом
// наперед.

class BackwardsString {
public:
    void run() {
        cout << "Enter the string: ";
        string str;
        getline(cin, str);

        cout << "Results: ";
        for (auto it = str.rbegin(); it != str.rend(); ++it) {
            cout << *it;
        }

        cout << "\n";
    }
};