#include <iostream>
#include <vector>
#include <numeric> // для функции accumulate()
#include <algorithm> // для функции min_element() и max_element()

using namespace std;

int main() {
    cout << "Enter the number of numbers of the sequence: "; int number; cin >> number;

    vector<float> sequence;
    cout << "Введите последовательность: ";
    while (sequence.size() < number)
    {
        float num; cin >> num;
        sequence.push_back(num);
    }
    
    float average = accumulate(sequence.begin(), sequence.end(), 0.0) / number;
    cout << "The average: " << average << endl;

    auto min = min_element(sequence.begin(), sequence.end());
    cout << "The minimum number: " << *min << endl;

    vector<float>::iterator max = max_element(sequence.begin(), sequence.end());
    cout << "The maximum number: " << *max << endl;

    return 0;
}