#pragma once

#include <iostream>

using namespace std;

// Напишите программу, которая вычисляет длину введенной пользователем строки без использования стандартной функции
// определения длины.

class StringLength {
public:
    void run() {
        cout << "Enter the string: ";
        string str;
        getline(cin, str);

        int length{0};
        for (auto it = str.begin(); it != str.end(); ++it) {
            ++length;
        }

        cout << "string length is: " << length << "\n";
    }
};