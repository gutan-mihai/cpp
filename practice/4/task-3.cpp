#include <iostream>
#include <set>
#include <string> // для цункции getline()
#include <sstream> // для цункции stringstream()

using namespace std;

void fill_list(set<int>& list) {
    string str;
    getline(cin, str);
    stringstream ss(str);
    while (!ss.eof()) {
        int x; ss >> x; list.emplace(x);
    }
}

void set_append(set<int>& result, const set<int>& append) {
    for (auto it = append.begin(); it != append.end(); ++it) {
        result.emplace(*it);
    }
}

int main() {
    set<int> first, second, result;

    cout << "Enter the elements for the first array (separated by space): ";
    fill_list(first);

    cout << "Enter the elements for the second array (separated by space): ";
    fill_list(second);

    cout << "Result list: ";
    set_append(result, first);
    set_append(result, second);
    for (auto it = result.begin(); it != result.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}