#pragma once

#include <iostream>
#include "constants.h"

using namespace std;

// Напишите программу пересчета веса из фунтов в килограммы (1 фунт = 0.453 кг).

class PoundsToKilograms {
public:
    void run() {
        cout << "Enter the weight in pounds: ";
        float weight;
        cin >> weight;
        cout << weight << " pound = " << (weight * constants::pounts_to_kg) << " kg \n";
    }
};