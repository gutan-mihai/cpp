#pragma once

#include <algorithm> // для функции for_each()
#include <iostream>

using namespace std;

namespace utils {
    int rand_int(int min, int max);

    template <typename VectorType>
    VectorType stov(const string &str) {
        VectorType v_numbers;
        for_each(str.begin(), str.end(), [&](const char &number) {
            v_numbers.push_back(number - '0');
        });

        return v_numbers;
    }

    template <typename VectorType, typename InputType>
    VectorType fill_list() {
        VectorType list;
        while (cin.peek() != '\n') {
            InputType user_value = []() {
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
            }();
            list.push_back(user_value);
        }

        return list;
    }
} // namespace utils