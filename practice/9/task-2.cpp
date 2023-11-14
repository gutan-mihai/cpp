#pragma once

#include <algorithm> // для цункции find()
#include <iostream>
#include <sstream> // для цункции stringstream()
#include <string>  // для цункции getline()
#include <vector>

using namespace std;

// Напишите программу, которая проверяет, находится ли введенное с клавиатуры
// число в массиве. Массив предварительно вводит пользователь в начале
// выполнения программы.

class IsNumberInList {
public:
    void run() {
        cout << "Enter the elements for the array (separated by space): ";
        vector<int> numbers;
        fill_vector(numbers);

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

private:
    void fill_vector(vector<int> &list) {
        string str;
        getline(cin, str);
        stringstream ss(str);
        while (!ss.eof()) {
            int x;
            ss >> x;
            list.push_back(x);
        }
    }
};