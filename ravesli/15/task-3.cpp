#pragma once

#include <algorithm> // для функции random_shuffle
#include <iostream>

using namespace std;

// Возьмите любое слово, например, «корова». Используя генерацию рандомных чисел, переставьте буквы этого слова в
// рандомном порядке. Делайте это до тех пор, пока полученное слово не совпадет с начальным словом. Используя массив,
// укажите при перестановке букв их индексы. Программа должна корректно работать с любым словом.

class LettersWordInRandomOrder {
public:
    void run() {
        cout << "Enter the string: ";
        string str;
        getline(cin, str);

        int index{0};
        vector<int> indexes;
        while (indexes.size() != str.size()) {
            indexes.push_back(index++);
        }

        string new_str{};
        int iterator_count{0};
        srand(time(0));

        while (new_str != str) {
            new_str = {};
            cout << "[" << iterator_count << "] ";
            // random_shuffle(indexes.begin(), indexes.end());
            for (auto it = indexes.begin(); it != indexes.end(); ++it) {
                int index = *it;
                cout << index;
                new_str += str[index];
            }

            cout << " " << new_str << "\n";
            ++iterator_count;
        }
    }
};