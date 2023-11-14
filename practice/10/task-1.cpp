#pragma once

#include <iostream>
#include <numeric> // для функции accumulate()
#include <vector>

using namespace std;

// Напишите программу, которая вычисляет среднее арифметическое вводимой
// пользователем последовательности дробных чисел.

class SequenceArithmeticAverage {
public:
    void run() {
        cout << "Enter the elements for the list (separated by space): ";
        vector<double> numbers;
        fill_vector<vector<double>, double>(numbers);

        double v_sum = accumulate(numbers.begin(), numbers.end(), 0.0);
        cout << "The arithmetic of the introduced sequence: "
             << (v_sum / numbers.size()) << "\n";
    }

private:
    template<typename ListType, typename InputType>
    void fill_vector(ListType &list) {
        while (cin.peek() != '\n') {
            list.push_back(user_value<InputType>());
        }
    }

    template<typename InputType>
    InputType user_value() {
        while (true) {
            InputType value;
            cin >> value;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "Error! Incorrect input. Try again!\n";
                continue;
            }

            return value;
        }
    }
};