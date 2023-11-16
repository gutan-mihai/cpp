#pragma once

#include <iostream>

using namespace std;

// Рейтинг бакалавра заочного отделения при поступлении в магистратуру
// определяется средним баллом диплома, умноженным на коэффициент стажа работы
// по специальности, который равен: нет стажа — 1, меньше 2 лет — 13, от 2 до 5
// лет — 16. Напишите программу расчета рейтинга студента при заданном среднем
// балле диплома (от 3 до 5) и выведите сообщение о приеме в магистратуру (при
// проходном балле равном 45).

class StudentRatingCalculation {
public:
    void run() {
        cout << "Enter work experience in the specialty: ";
        int experience;
        cin >> experience;

        cout << "Enter average diploma score: ";
        float average;
        cin >> average;

        if (experience < 2) {
            average *= 13;
        } else if (experience >= 2 && experience <= 5) {
            average *= 15;
        }

        if (average > 45) {
            cout << "You have been accepted to the master's program \n";
        } else {
            cout << "You are not accepted to the master's program \n";
        }
    }
};