#include <iostream>

using namespace std;

int main() {
    cout << "Distance to the dacha (km): "; float km; cin >> km;
    cout << "Gasoline consumption (liters per 100 km): "; float consumption; cin >> consumption;
    cout << "Price of a liter of gasoline (USD): "; float price; cin >> price;

    float total_costs = 2 * price * ((km / 100) * consumption);
    cout << "A trip to the dacha and back will cost " << total_costs << " USD" << endl;

    return 0;
}