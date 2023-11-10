#include <cmath> // для функции modf()
#include <iostream>

using namespace std;

int main() {
    cout << "Enter the distance (m): ";
    float distance;
    cin >> distance;
    cout << "Enter time (min.sec): ";
    float time;
    cin >> time;

    // distance = 1000 m
    // time = 3.25 m.s
    // speed_ms = 1000 / ((3 * 60) + 25) = 4.878 m/s
    float minutes;
    float seconds = modf(time, &minutes) * 100;
    float speed_ms = distance / ((minutes * 60) + seconds);

    // 1 m/s = 3.6 km/h
    // speed_kmh = 4.878 m/s * 3.6 = 17.5608 km/h
    float speed_kmh = 3.6 * speed_ms;
    cout << "You fled at a speed of " << speed_kmh << " km/hour" << endl;

    return 0;
}