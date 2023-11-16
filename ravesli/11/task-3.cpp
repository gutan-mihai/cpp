#pragma once

#include "utils.h"
#include <iostream>

using namespace std;

// Известно, что сейф открывается при правильном вводе кода из 3-x цифр в
// диапазоне от 0 до 9. Задайте код и затем откройте сейф, используя метод
// перебора с помощью цикла for.

class OpenSafeDeposit {
public:
    void run() {
        int safe_code = utils::rand_int(100, 999);
        cout << "Open the safe by the enforcement method: \n";

        int inc{0};
        search_safe_code(safe_code, inc);
        cout << "safe code = " << safe_code << ", it took " << inc << " attempts \n";
    }

private:
    void search_safe_code(const int safe_code, int& inc) {
        for (int a = 100; a < 1000; a += 100) {
            for (int b = 0; b < 100; ++b) {
                if (safe_code == (a + b)) {
                    return;
                }

                ++inc;
            }
        }
    }
};