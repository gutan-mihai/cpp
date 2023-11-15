#pragma once

#include <algorithm> // для цункции find()
#include <iostream>
#include <vector>
#include "vectors.h"

using namespace std;

// Напишите программу, которая проверяет, находится ли введенное с клавиатуры
// число в массиве. Массив предварительно вводит пользователь в начале
// выполнения программы.

class IsNumberInList {
public:
    void run() {
        cout << "Enter the elements for the array (separated by space): ";
        auto numbers = utils::fill_list<vector<int>, int>();

        cout << "Enter the number you are looking in the array: ";
        int find_it;
        cin >> find_it;

        auto found = find(numbers.begin(), numbers.end(), find_it);
        if (found != numbers.end()) {
            cout << "The number exists in array! \n";
        } else {
            cout << "The number doest not exists in array! \n";
        }
    }
};