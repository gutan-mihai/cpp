#pragma once

#include <iostream>
#include <vector>
#include <limits.h> // для INT_MAX

using namespace std;

// Напишите программу, которая выводит на экран наименьший элемент введенного пользователем массива целых чисел. Для
// доступа к элементам массива используйте указатель.

class MinArrayElement {
public:
    void run() {
        cout << "Enter array numbers: ";
        vector<int> nums;
        while (nums.size() < 5) {
            int number;
            cin >> number;
            nums.push_back(number);
        }

        int min{INT_MAX};
        for (auto it = nums.begin(); it != nums.end(); ++it) {
            if (min > *it) {
                min = *it;
            }
        }

        cout << "Min element is: " << min << endl;
    }
};