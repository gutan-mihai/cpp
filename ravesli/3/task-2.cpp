#include <iostream>

using namespace std;

int main() {
    cout << "Enter the number of summed numbers: ";
    int limit;
    cin >> limit;

    int even_sums = 0;
    int first_even = 0;
    int positive_even_numbers = 0;
    while (positive_even_numbers++ < limit) {
        first_even += 2;
        even_sums += first_even;
    }

    cout << "The sum of the first " << limit << " whole positive even numbers is " << even_sums << endl;

    return 0;
}