#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string> abc_morse;
    abc_morse["·−"] = "aA";
    abc_morse["−···"] = "bB";
    abc_morse["·−−"] = "cC";
    abc_morse["−−·"] = "dD";
    abc_morse["−··"] = "eE";
    abc_morse["·"] = "fF";
    abc_morse["···−"] = "gG";
    abc_morse["−−··"] = "hH";
    abc_morse["··"] = "iI";
    abc_morse["·−−−"] = "jJ";
    abc_morse["−·−"] = "kK";
    abc_morse["·−··"] = "lL";
    abc_morse["−−"] = "mM";
    abc_morse["−·"] = "nN";
    abc_morse["−−−"] = "oO";
    abc_morse["·−−·"] = "pP";
    abc_morse["·−·"] = "qQ";
    abc_morse["···"] = "rR";
    abc_morse["−"] = "sS";
    abc_morse["··−"] = "tT";
    abc_morse["··−·"] = "uU";
    abc_morse["····"] = "vV";
    abc_morse["−·−·"] = "wW";
    abc_morse["−−−·"] = "xX";
    abc_morse["−−−−"] = "yY";
    abc_morse["−−·−"] = "zZ";
    
    cout << "Enter your text: "; string text; cin >> text;
    cout << "Morse: ";
    for (size_t i = 0; i < text.size(); ++i) {
        for (auto it = abc_morse.begin(); it != abc_morse.end(); ++it) {
            size_t found = it->second.find(text[i]);
            if (found != string::npos) {
                cout << it->first;
            }
        }
    }

    cout << endl;

    return 0;
}