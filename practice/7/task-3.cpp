#pragma once

#include <iostream>
#include <vector>
#include <algorithm> // для функции sort()
#include <fstream> // для функции ifstream()

using namespace std;

struct Student {
    string name;
    int math_note;
    int phys_note;
    int info_note;
    float average_note;
};

class StudentGradesAccounting {
public:
    void run() {
        read_students();
        show_students();
    }

private:
    vector<Student> students;
    void read_students() {
        string name;
        int math_note, phys_note, info_note;
        ifstream infile("practice/7/input_data.txt");
        while (infile >> name >> math_note >> phys_note >> info_note) {
            add_student(name, math_note, phys_note, info_note);
        }
    }

    void add_student(         //
        const string &name,   //
        const int &math_note, //
        const int &phys_note, //
        const int &info_note  //
    ) {
        Student student;
        student.name = name;
        student.math_note = math_note;
        student.phys_note = phys_note;
        student.info_note = info_note;
        student.average_note = (math_note + phys_note + info_note) / 3;

        students.push_back(student);
    }

    void show_students() {
        cout << "Name\tMath\tPhys\tInfo\t" << endl;
        sort(                 //
            students.begin(), //
            students.end(),   //
            [](const Student &a, const Student &b) {
                return a.average_note > b.average_note;
            } //
        );

        for_each(students.begin(), students.end(), [](const Student &student) {
            cout << student.name << "\t" <<        //
                student.math_note << "\t" <<       //
                student.phys_note << "\t" <<       //
                student.info_note << "\t" << endl; //
        });
    }
};