#pragma once

#include <iostream>

using namespace std;

// Выведите на экран все четные числа кратные пяти в интервале от 2 до 100
// (включительно).

class EvenNumbersMultiplesOfFive {
public:
    void run() {
        for (int i = 2; i <= 100; ++i) {
            if (i % 2 != 0 || i % 5 != 0) {
                continue;
            }

            cout << i << " ";
        }

        cout << "\n";
    }
};