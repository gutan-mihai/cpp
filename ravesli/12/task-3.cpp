#pragma once

#include "utils.h"
#include <iostream>
#include <vector>

using namespace std;

// Попробуйте программно смоделировать разговор людей. Всего есть 5 людей.
// Каждый человек имеет имя (строку) и возраст (число). Возраст каждого человека
// генерируется рандомно из диапазона от 20 до 40, а имена выбираются из
// следующего списка: Александр, Андрей, Анастасия, Ирина, Наталья, Павел,
// Роман, Светлана, Сергей, Татьяна.

// Любой человек способен выполнять два действия:
// - здороваться с другим человеком;
// - рассказывать о себе.

// Люди делятся на 3 типа (разные классы):
// Тип №1: Формалисты. Здороваются со всеми следующим образом: Здравствуйте,
// <имя>!, где <имя> — это имя человека, с которым он здоровается.
// Тип №2: Неформалы. Со всеми здороваются: Привет, <имя>!.
// Тип №3: Реалисты. Если возраст собеседника меньше/равен или собеседник старше
// не более, чем на 5 лет, то здороваются следующим образом: Привет, <имя>!, в
// противном случае — Здравствуйте, <имя>!.

// В программной реализации приветствие должно быть реализовано как полиморфный
// метод, принимающий человека в качестве параметра и возвращающий строку.
// Рассказ о человеке является строкой формата "Меня зовут Александр, мой
// возраст 21 лет и я неформал" (вместо Александр используется имя любого
// другого человека из вышеприведенного списка, вместо 21 возраст этого
// человека, вместо неформал может быть формалист, либо реалист). Как видите у
// людей с грамматикой не всё в порядке, и они говорят лет после любого числа —
// непорядок, это нужно обязательно исправить. Программа должна показать
// информацию обо всех людях. Затем все люди должны поздороваться друг с другом
// в следующем порядке: первый здоровается со вторым, затем второй с первым, а
// затем первый с третьим, третий с первым и т.д.

enum people_type {
    formalist = 0, //
    informal,      //
    realist,       //
    none,          //
};

struct Person {
    string name;
    int age;
    people_type type;

    Person(string name, int age, people_type type) {
        this->name = name;
        this->age = age;
        this->type = type;
    }

    void who_is() {
        constexpr std::string_view s_type[] = {
            "formalist", "informal", "realist" //
        };

        cout << "My name is " << name << ", I am " << age << " old and " << s_type[type];
        cout << "\n";
    }

    void say_hello(const Person &other) {
        cout << name << ": " << greeting(other) << ", " << other.name << "!";
        cout << "\n";
    }

    string greeting(const Person &other) {
        if (type == people_type::formalist) {
            return "Hello";
        }

        if (type == people_type::informal) {
            return "Hi";
        }

        if (type == people_type::realist) {
            if (other.age - 5 <= age) {
                return "Hi";
            }

            return "Hello";
        }

        return {};
    }
};

class PeopleConversation {
public:
    void run() {
        srand(time(0));
        vector<Person> peoples;
        for (int i = 0; i < 5; i++) {
            peoples.push_back(create_person());
        }

        cout << "Peoples: \n";
        for (auto it = peoples.begin(); it != peoples.end(); ++it) {
            Person person = *it;
            person.who_is();
        }

        cout << "\nDialogues: \n";
        for (size_t i = 0; i < peoples.size(); ++i) {
            Person person1 = peoples[i];
            for (size_t j = i + 1; j < peoples.size(); ++j) {
                Person person2 = peoples[j];
                person1.say_hello(person2);
                person2.say_hello(person1);
            }
        }
    }

private:
    Person create_person() {
        vector<string> names{
            "Alexander", "Andrei", "Ana", "Irina", "Natalia", "Pavel", "Roman", "Sveta", "Serghei", "Tanea",
        };

        int age = utils::rand_int(20, 40);
        int index = utils::rand_int(0, names.size() - 1);

        return Person(                              //
            names[index],                           //
            age,                                    //
            static_cast<people_type>(rand() % none) //
        );
    }
};