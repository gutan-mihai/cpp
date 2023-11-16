#pragma once

#include <iostream>
#include <vector>
#include <string>  // для цункции stoi()

using namespace std;

// Напишите программу, которая сравнивает два введенных с клавиатуры числа.
// Программа должна указать, какое число меньше, или, если числа равны
// вывести соответствующее сообщение

class CompareTwoNumbers {
public:
    void run() {
        ask_numbers();
        int first = numbers.front();
        int second = numbers.back();
        if (first > second) {
            cout << first << " is greater than "<< second << endl;
        } else if (first < second) {
            cout << first << " is less than "<< second << endl;
        } else {
            cout << first << " is equal with "<< second << endl;
        }
    }

private:
    vector<int> numbers;
    void ask_numbers() {
        cout << "Enter the numbers (separated by space): ";
        while (numbers.size() < 2) {
            string str;
            cin >> str;
            numbers.push_back(stoi(str));
        }
    }
};