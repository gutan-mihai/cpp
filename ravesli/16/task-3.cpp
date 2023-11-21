#pragma once

#include <iostream>
#include <vector>
#include "utils.h"

using namespace std;

// На первом курсе M = 40 студентов. Каждый из студентов в понедельник получает оценку по программированию, во вторник —
// оценку по математике, в среду — по физике в пределах от 2 до 5 каждая. Всего в году N = 35 недель, когда студенты
// учатся. Лучшим считается студент, который наибольшее количество недель продержался без троек (т.е. получал не ниже
// 4). Сформируйте три целочисленных массива нужного размера. Задайте оценки с помощью генерации случайных чисел.
// Найдите лучшего студента.

struct AnnualyStudentRating {
    vector<int> programming;
    vector<int> math;
    vector<int> physics;
};

class BestStuden {
public:
    void run() {
        const int M = 40;
        const int N = 35;
        // vector<int, AnnualyStudentRating> students;
        // for (int student = 1; student <= M; ++student) {
        //     AnnualyStudentRating student_rating;
        //     students[student].push_back(student_rating);
        // }

        // srand(time(0));
        // for (int week = 1; week <= N; ++week) {
        //     for (int student = 1; student <= M; ++student) {
        //         int programming = utils::rand_int(2, 5);
        //         int math = utils::rand_int(2, 5);
        //         int physics = utils::rand_int(2, 5);

        //         AnnualyStudentRating student_rating = students[student];
        //         student_rating.programming.push_back(programming);
        //         student_rating.math.push_back(math);
        //         student_rating.physics.push_back(physics);

        //         students[student] = student_rating;
        //     }
        // }

        // calc best of the students
    }
};