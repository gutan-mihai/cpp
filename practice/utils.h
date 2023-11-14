#include <iostream>

using namespace std;

namespace utils {
template <typename ListType, typename InputType>
ListType fill_list() {
    ListType list;
    while (cin.peek() != '\n') {
        InputType user_value = []() {
            while (true) {
                int value;
                cin >> value;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(32767, '\n');
                    cout << "Error! Incorrect input. Try again!\n";
                    continue;
                }

                return value;
            }
        }();
        list.push_back(user_value);
    }

    return list;
}
} // namespace utils