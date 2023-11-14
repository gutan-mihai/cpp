#pragma once

#include <algorithm> // для функции for_each()
#include <iostream>
#include <numeric> // для функции accumulate()
#include <vector>

using namespace std;

// Сыграйте с компьютером в игру, используя следующие 5 вариантов наборов чисел:
// Набор #1: 6, 7, 8
// Набор #2: 7, 8, 9
// Набор #3: 6, 9, 10
// Набор #4: 6, 9, 8
// Набор #5: 7, 6, 10

// Введите с клавиатуры свой вариант набора чисел (из вышеприведенных) и
// сравните с набором чисел компьютера, который выбирается рандомно из 5
// вышеприведенных наборов. Если сумма цифр вашего набора чисел больше суммы
// цифр набора чисел компьютера, то вы выиграли (и наоборот). В случае
// одинаковых сумм цифр — ничья.

class RandomListGame {
public:
    void run() {
        available_set.push_back(vector<int>{6, 7, 8});
        available_set.push_back(vector<int>{7, 8, 9});
        available_set.push_back(vector<int>{6, 9, 10});
        available_set.push_back(vector<int>{6, 9, 8});
        available_set.push_back(vector<int>{7, 6, 10});

        cout << "Select one of the vectors below: \n";
        for (int i = 0; i < available_set.size(); i++) {
            print_vector(available_set[i], i);
        }

        int s_index = select_index();
        vector<int> s_vector = available_set.at(s_index);
        int s_sum = accumulate(s_vector.begin(), s_vector.end(), 0);
        cout << "Your vector sum is: " << s_sum << "\n";

        int r_index = random(0, available_set.size() - 1);
        vector<int> r_vector = available_set.at(r_index);
        int r_sum = accumulate(r_vector.begin(), r_vector.end(), 0);
        cout << "Comp vector sum is: " << r_sum << "\n";

        if (s_sum > r_sum) {
            cout << "You win! \n";
        } else if (s_sum < r_sum) {
            cout << "You lose! \n";
        } else {
            cout << "Is draw! \n";
        }
    }

private:
    vector<vector<int>> available_set;

    int random(int min, int max) {
        srand(time(0));
        return min + rand() % ((max + 1) - min);
    }

    void print_vector(const vector<int> &list, int index) {
        cout << "[" << index << "]: ";
        for_each(                                      //
            list.begin(),                              //
            list.end(),                                //
            [](const int &num) { cout << num << " "; } //
        );

        cout << "\n";
    }

    int select_index() {
        int index{0};
        cin >> index;
        if (index < 0 || index >= available_set.size()) {
            cin.clear();
            fflush(stdin);
            select_index();
        }

        return index;
    }
};