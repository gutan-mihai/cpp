#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Enter numbers (type 'e' to end): ";
    vector<int> numbers;
    string str;
    while (true) {
        cin >> str;
        if (str == "e") {
            break;
        }

        int number = stoi(str);
        if (number < 0) {
            cout << "You enter a negative number, please retry" << endl;
            continue;
        }

        numbers.push_back(number);
    }

    cout << endl << "Your numbers are: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    auto it = min_element(numbers.begin(), numbers.end());
    cout << endl << "Min number is: " << *it << endl;

    return 0;
}