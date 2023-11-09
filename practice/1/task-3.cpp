#include <iostream>
#include <map>
#include <vector>

using namespace std;

void month_input() {
    cout << "Enter month number: ";
    int month_number; cin >> month_number;

    map<string, vector<int>> seasons;
    seasons["Winter"] = vector<int>{1, 2, 12};
    seasons["Spring"] = vector<int>{3, 4, 5};
    seasons["Summer"] = vector<int>{6, 7, 8};
    seasons["Autumn"] = vector<int>{9, 10, 11};
    
    // for (auto it = seasons.begin(); it != seasons.end(); ++it) {
    //     for (int i = 0; i < it->second.size(); i++) {
    //         if (it->second[i] == month_number) {
    //             cout << it->first << endl;
    //             return;
    //         }
    //     }
    // }

    for (const auto& [season, months] : seasons) {
        for (int i = 0; i < months.size(); i++) {
            if (months[i] == month_number) {
                cout << season << endl;
                return;
            }
        }
    }
            
    month_input();
}

int main() {
    month_input();

    return 0;
}