#include <iostream>
#include <map>

using namespace std;

bool isIcecreamSandwich(const string& sandwich) {
    if (sandwich.size() < 3) {
        return false;
    }

    if (sandwich.front() != sandwich.back()) {
        return false;
    }

    map<string, int> first;
    map<string, int> middle;
    map<string, int> end;
    for (int i = 0; i < sandwich.size(); ++i)
    {
        first[sandwich[i]] = 0;
    }
    
    return true;
}

int main() {
    string sandwich;
    cout << "Please enter \"Sandwich with ice cream\": ";
    cin >> sandwich;
    cout << "Is sandwich with ice cream: " << (isIcecreamSandwich(sandwich) ? "true" : "false") << endl;

    return 0;
}