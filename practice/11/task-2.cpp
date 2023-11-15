#pragma once

#include <iostream>

using namespace std;

// Ежемесячная стипендия студента составляет А рублей, а расходы на проживание
// превышают её и составляют B рублей/месяц. Рост цен ежемесячно увеличивает
// расходы на 3%. Определите требуемую сумму денег для того, чтобы прожить
// учебный год (10 месяцев), используя только деньги на проживание, в которые
// входит и стипендия. Значения А и B вводит пользователь.

class RequiredMoneyToLiveAYear {
public:
    void run() {
        cout << "Enter the monthly scholarship of the student: ";
        double scholarship;
        cin >> scholarship;

        cout << "Enter the monthly living expenses: ";
        double living_expenses;
        cin >> scholarship;
    }
};