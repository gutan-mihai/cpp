#pragma once

#include <iostream>

using namespace std;

// В указанной пользователем строке вместо первого символа поставьте пробел, а вместо последнего — точку.

class ReplaceFirstAndLastSymbol {
public:
    void run() {
        cout << "Enter string: ";
        string str;
        getline(cin, str);

        str[0] = ' ';
        str[str.size() - 1] = '.';

        cout << "New string: " << str << endl;
    }
};