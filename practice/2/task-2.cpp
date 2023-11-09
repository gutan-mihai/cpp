#include <iostream>

using namespace std;

int main() {
    cout << "Enter the purchase amount: "; float amount; cin >> amount;
    float discount = amount > 1000 ? 5.0 : amount > 500 ? 3.0 : 0.0;
    cout << "You are given a " << discount << "\% discount" << endl;

    float final_cost = amount - (amount * (discount / 100));
    cout << "Amount including discount: $" << final_cost << endl;

    return 0;
}