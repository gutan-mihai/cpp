#pragma once

#include <iostream>
#include <vector>

using namespace std;

// Остров Манхэттен был приобретен поселенцами за $24 в 1826 г. Каково было бы в настоящее время состояние их счета,
// если бы эти 24 доллара были помещены тогда в банк под 6% годового дохода?

class BankDepositProcent {
public:
    void run() {
        int start_year = 1826;
        int current_year = 2023;
        vector<float> percentages{24};

        for (int i = start_year; i <= current_year; ++i) {
            float last_sum = percentages.back();
            last_sum += last_sum * 0.06;
            percentages.push_back(last_sum);
        }

        cout << "total amount: " << percentages.back() << "\n";
    }
};