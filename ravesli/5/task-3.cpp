#pragma once

#include <iostream>
#include <unistd.h> // для функции sleep()

using namespace std;

// Напишите программу-таймер, которая по истечении заданного промежутка времени
// (который вводит пользователь) выдает звуковой сигнал.

class PlaySoundTimer {
public:
    void run() {
        cout << "Please enter the time in seconds: ";
        float delay;
        cin >> delay;
        sleep(delay);
        
        cout << '\a';
    }
};