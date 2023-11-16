#pragma once

#include <iostream>

using namespace std;

// Напишите функцию int f(int h, int m, int s), которая принимает три целых аргумента (часы h, минуты m и секунды s) и
// возвращает количество секунд, прошедших с начала дня.

class ConvertStringToSeconds {
public:
    void run() {
        cout << "Enter hours: ";
        int hours;
        cin >> hours;

        cout << "Enter minutes: ";
        int minutes;
        cin >> minutes;

        cout << "Enter seconds: ";
        int seconds;
        cin >> seconds;

        cout << "in seconds: " << convert(hours, minutes, seconds) << "\n";
    }

private:
    int convert(int h, int m, int s) { return (h * 3600) + (m * 60) + s; }
};