#pragma once

#include <fstream> // для ofstream, ifstream
#include <iostream>
#include <map>

using namespace std;

// Напишите программу, моделирующую бросание монеты с помощью генерации
// случайных чисел. После каждого броска монеты программа должна записывать в
// файл результат: Орёл или Решка. Выполните бросок монеты 100 раз и
// подсчитайте, сколько раз появилась каждая сторона монеты.

class HeadsOrTailsGame {
public:
    void run() {
        write_randoms();
        count_randoms();
    }

private:
    void write_randoms() {
        constexpr std::string_view s_type[] = {"heads", "tails"};
        srand(time(0));
        ofstream game;
        game.open("practice/13/game.txt");
        for (int i = 0; i < 100; ++i) {
            int random_int = utils::rand_int(0, 1);
            game << s_type[random_int] << "\n";
        }

        game.close();
    }

    void count_randoms() {
        map<string, int> counts{
            {"heads", 0},
            {"tails", 0},
        };

        string title;
        ifstream file("practice/13/game.txt");
        while (file >> title) {
            counts[title]++;
        }

        file.close();
        for (const auto &[key, value] : counts) {
            cout << key << ": " << value << "\n";
        }
    }
};