#pragma once

#include <iostream>
#include <numeric> // для функции accumulate()
#include <vector>

using namespace std;

// Ежемесячная стипендия студента составляет А рублей, а расходы на проживание
// превышают её и составляют B рублей/месяц. Рост цен ежемесячно увеличивает
// расходы на 3%. Определите требуемую сумму денег для того, чтобы прожить
// учебный год (10 месяцев), используя только деньги на проживание, в которые
// входит и стипендия. Значения А и B вводит пользователь.

class RequiredMoneyToLiveAYear {
public:
    void run() {
        constexpr int academic_year = 10;        // 10 месяцев
        constexpr float monthly_expenses = 0.03; // 3%

        cout << "Enter the monthly scholarship of the student: ";
        double scholarship;
        cin >> scholarship;

        cout << "Enter the monthly living expenses: ";
        double living_expenses;
        cin >> living_expenses;

        vector<float> costs_per_month;
        float over_budget = living_expenses - scholarship;
        for (int i = 0; i < academic_year; ++i) {
            float back = costs_per_month.size() ? costs_per_month.back() : over_budget;
            float costs = back + (back * monthly_expenses);
            costs_per_month.push_back(costs);
        }

        float additional_money = accumulate(costs_per_month.begin(), costs_per_month.end(), 0.0);
        cout << "To live 10 months, you need additional: " << additional_money << "\n";
    }
};