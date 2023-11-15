#pragma once

#include "utils.h"
#include <iostream>
#include <numeric> // для функции accumulate()
#include <set>
#include <vector>

using namespace std;

// Создайте структуру с именем STUDENT, содержащую следующие поля:
// - Name — фамилия и инициалы;
// - Year — курс;
// - Rating — успеваемость (массив из пяти элементов).

// Напишите программу, выполняющую:
// 1. ввод с клавиатуры данных в массив STUD, состоящий из 10 структур типа
// STUDENT. Записи должны быть упорядочены по алфавиту;
// 2. вывод на экран записей упорядоченного списка студентов, средний бал
// которых превышает общий средний бал;
// 3. если таких студентов нет — выведите соответствующее сообщение.

struct STUDENT {
    string name;
    int course;
    vector<float> rating;

    float avg_rating() const {
        return accumulate(rating.begin(), rating.end(), 0.0) / rating.size();
    }

    bool operator<(const STUDENT &other) const { //
        return name < other.name;                //
    }
};

class StudentRating {
public:
    void run() {
        set<STUDENT> students;
        while (students.size() != 10) {
            cout << "Enter student name: ";
            string name;
            cin >> name;
            cout << "Enter student course: ";
            int course;
            cin >> course;
            cout << "Enter student rating (separated by space): ";
            vector<float> rating;
            while (rating.size() < 5) {
                double num;
                cin >> num;
                rating.push_back(num);
            }

            STUDENT student{name, course, rating};
            students.insert(student);
            cout << "--------------------------------------------\n";
        }

        float avg_rating = accumulate( //
            students.begin(),          //
            students.end(),            //
            0.0,                       //
            [](float total, const STUDENT &stud) {
                return total + stud.avg_rating();
            } //
        );

        avg_rating /= students.size();
        bool is_student_exists = false;
        for (auto it = students.begin(); it != students.end(); ++it) {
            STUDENT student = *it;
            if (student.avg_rating() > avg_rating) {
                is_student_exists = true;
                cout << "Name: " << student.name <<    //
                    " | Course: " << student.course << //
                    " | Avg Rating: " << student.avg_rating() << "\n";
            }
        }

        if (!is_student_exists) {
            cout << "There are no students with the highest average rating! \n";
        }
    }
};