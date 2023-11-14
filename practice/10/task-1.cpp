#pragma once

#include <iostream>
#include <numeric> // для функции accumulate()
#include <vector>
#include "vectors.h"

using namespace std;

// Напишите программу, которая вычисляет среднее арифметическое вводимой
// пользователем последовательности дробных чисел.

class SequenceArithmeticAverage {
public:
    void run() {
        cout << "Enter the elements for the list (separated by space): ";
        auto numbers = utils::fill_list<vector<double>, double>();

        double v_sum = accumulate(numbers.begin(), numbers.end(), 0.0);
        cout << "The arithmetic of the introduced sequence: "
             << (v_sum / numbers.size()) << "\n";
    }
};