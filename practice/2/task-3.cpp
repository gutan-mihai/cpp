#include <iostream>
#include <ctime> // для функции time()
#include <cstdlib> // для функций rand() и srand()

using namespace std;

void guess_number(const string& guessing_number) {
    cout << "Your option: ";
    string option; cin >> option;

    if (option == guessing_number) {
        cout << "*** You guessed the number: " << guessing_number << "!. ***" << endl;
        return;
    }

    if (option.size() != guessing_number.size()) {
        cout << "The option size is not equal to the guessing number size. Re-enter." << endl;
        guess_number(guessing_number);
        return;
    }

    int guessed = 0, in_their_places = 0;
    for (size_t i = 0; i < option.size(); ++i) {
        size_t found = guessing_number.find(option[i]);
        if (found != string::npos) {
            ++guessed;
        }

        if (option[i] == guessing_number[i]) {
            ++in_their_places;
        }
    }

    cout << "Guessed: " << guessed <<". In their places: " << in_their_places << endl;
    guess_number(guessing_number);
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    string guessing_number = std::to_string(rand() % 1000);

    cout << "The computer made a " << guessing_number.size() << "-digit number. You must guess it." << endl;
    cout << "After the next number, you will be informed how many numbers are guessed and how many of them are in right place." << endl;

    guess_number(guessing_number);

    return 0;
}