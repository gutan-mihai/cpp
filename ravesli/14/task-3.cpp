#pragma once

#include <iostream>
#include "utils.h"

using namespace std;

// Напишите программу, которая считывает из файла целые числа, которые рандомно генерируются в диапазоне от 1 до 72. Для
// каждого считанного числа ваша программа должна вывести строку, содержащую соответствующее количество звёздочек.
// Например, если ваша программа считала из файла число 7, то она должна вывести 7 звёздочек: *******.

class NumberToAsterisk {
public:
    void run() {
        generate_rand_numbers();
        print_asterisks();
    }

private:
    void generate_rand_numbers() {
        srand(time(0));
        ofstream file;
        file.open("practice/14/numbers.txt");
        for (int i = 0; i < 100; ++i) {
            file << utils::rand_int(1, 72) << "\n";
        }

        file.close();
    }

    void print_asterisks() {
        ifstream file("practice/14/numbers.txt");
        int asterisk_count;
        while (file >> asterisk_count) {
            cout << "Number = " << asterisk_count << ": ";
            for (int i = 0; i < asterisk_count; ++i) {
                cout << "*";
            }

            cout << "\n";
        }

        file.close();
    }
};