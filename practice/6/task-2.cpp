#pragma once

#include <iostream>
#include <string> // для функции getline()
#include <unistd.h> // для функции usleep()

using namespace std;

// Напишите программу, которая выводит на экран сообщение в «телеграфном» стиле:
// буквы сообщения должны появляться по одной с некоторой задержкой.

class PrintTelegraphicText {
public:
    void run() {
        cout << "Enter the text: ";
        string str;
        getline(cin, str);

        for (string::iterator it = str.begin(); it != str.end(); ++it) {
            cout << *it;
            fflush(stdout); // stdout is being buffered 
            usleep(300000); // 0.30 seconds (300000 microseconds)
        }
    }
};