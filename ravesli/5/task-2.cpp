#pragma once

#include <iostream>

using namespace std;

// Напишите программу, которая выводит на экран таблицу стоимости,
// например, яблок в диапазоне от 100 г до 1 кг с шагом 100 г.

class ProductCostTable {
public:
    void run() {
        cout << "Enter the price of 1 kg of apples: ";
        float price;
        cin >> price;

        cout << "Weight\tPrice" << endl;
        cout << "(g)\t(usd)" << endl;

        float kg_in_grams = 1000;
        for (float i = 0.1; i <= 1; i += 0.1) {
            cout << (kg_in_grams * i) << "\t" << (price * i) << endl;
        }

        cout << kg_in_grams << "\t" << price << endl;
    }
};