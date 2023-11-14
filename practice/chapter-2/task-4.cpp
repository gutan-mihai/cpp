#include "constants.h"
#include <iostream>
#include <cmath>

using namespace std;

// Напишите функцию для вычисления высоты мячика через х секунд падения.
// Используем формулу: [ s = u * t + (a * t^2) / 2 ], где u(начальная скорость) = 0
// высота мячика над землей = (константа_гравитации * секунды^2) / 2.

class FallingBallSimulation {
public:
    void run() {
        cout << "Enter the initial height of the tower in meters: \n";
        double initial_height;
        cin >> initial_height;

        int seconds{0};
        double ball_height{initial_height};
        while (ball_height > 0) {
            ball_height = initial_height - (constants::gravity * pow(seconds, 2)) / 2;
            if (ball_height > 0) {
                cout << "At " << seconds << " seconds, the ball is at height: " << ball_height << " meters \n";
            } else {
                cout << "At " << seconds << " seconds, the ball is on the ground. \n";
            }

            ++seconds;
        }
    }
};