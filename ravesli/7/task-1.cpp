#pragma once

#include <iostream>

using namespace std;

// Напишите программу, которая выводит на экран работающие «электронные часы»,
// которые работают в течение, например, 3 минут или до тех пор,
// пока пользователь не нажмет любую клавишу.

class TimerClock {
public:
    void run() {
        // seconds time = 5min + 17s; // 317 seconds
        // cout << time.count() << endl; // не используйте count для внутренних преобразований!

        display_clock();
    }

private:
    void display_clock() {
        time_t now = time(0);
        char *date_time = ctime(&now);
        cout << "The current date and time is: " << date_time << flush;
    }

    void stop_clock() {
        //
    }
};