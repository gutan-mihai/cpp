#pragma once

#include <iostream>
#include <vector>

using namespace std;

// Дано целое число в диапазоне от 1 до 365. Определите, какой день недели
// выпадает на это число, если 1 января — понедельник.

class WeekDay {
public:
    void run() {
        vector<string> week_days{
            "sunday",    //
            "monday",    //
            "tuesday",   //
            "wednesday", //
            "thursday",  //
            "friday",    //
            "saturday",  //
        };

        int day = get_day();
        int week_day = day % 7;
        cout << day << " is " << week_days[week_day] << "\n";
    }

private:
    int get_day() {
        cout << "Enter number in the range from 1 to 365: ";
        int day;
        cin >> day;
        if (day < 1 || day > 365) {
            return get_day();
        }

        return day;
    }
};