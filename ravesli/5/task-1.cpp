#pragma once

#include <cmath> // для функции modf()
#include <iostream>

using namespace std;

// Напишите программу пересчета величины временного интервала,
// заданного в минутах, в величину, выраженную в часах и минутах

class MinuteIntervalToHourInterval {
public:
    void run() {
        cout << "Enter time interval (in minutes): ";
        float min;
        cin >> min;

        float hours;
        float minutes = modf(min / 60, &hours) * 60;
        cout << min << " minutes = " << hours << " hours " << minutes << " minutes." << endl;
    }
};