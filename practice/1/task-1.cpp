#include <iostream>
#include <map>

using namespace std;

bool isIcecreamSandwich(const string& sandwich) {
    if (sandwich.size() < 3) {
        return false;
    }

    // check for different characters in the string
    map<char, int> letters;
    for (int i = 0; i < sandwich.size(); ++i) {
        letters[sandwich[i]] = 1;
    }
    
    if (letters.size() == 1) {
        return false;
    }

    // check if the mirrored characters are the same
    for (int i = 0; i < sandwich.size() / 2; ++i) {
        int j = sandwich.size() - i - 1;
        if (sandwich[i] != sandwich[j]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string sandwich;
    cout << "Please enter \"Sandwich with ice cream\": ";
    cin >> sandwich;
    cout << (isIcecreamSandwich(sandwich) ? "Is sandwich with ice cream" : "Not sandwich with ice cream") << endl;

    return 0;
}