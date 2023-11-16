#include <iostream>

using namespace std;

int main() {
    cout << "Enter the distance in miles: ";
    float miles;
    cin >> miles;
    cout << miles << " miles = " << (miles * 1.0668) << " км" << endl;

    return 0;
}