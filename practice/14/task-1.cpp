#pragma once

#include <iostream>
#include <cmath> // для функции pow

using namespace std;

// Каждая бактерия делится на две в течение одной минуты. В начальный момент имеется одна бактерия. Напишите программу,
// которая вычисляет общее количество бактерий после истечения указанного пользователем промежутка времени (например,
// после 5 или после 17 минут).

class DivisionOfBacteria {
public:
    void run() {
        cout << "Enter amount of minutes: ";
        int minutes;
        cin >> minutes;

        int divisions{1};
        for (int i = 1; i <= minutes; ++i) {
            divisions = pow(2, i);
        }

        cout << "divisions: " << divisions << "\n";
    }
};