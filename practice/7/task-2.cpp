#pragma once

#include <iostream>
#include <regex> // для функции regex_match() и regex()

using namespace std;

// Напишите программу, которая проверяет, является ли введенная пользователем
// строка целым числом.

class IsStringInteger {
public:
    void run() {
        cout << "Enter string: ";
        string str;
        cin >> str;

        cout << "is integer: " << regex_match(str, regex("-?[0-9]+")) << endl;
    }
};