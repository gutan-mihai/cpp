/**
 * Виды память:
 * 
 * 1. полученные через оператор new (куча, heap), например, std:vector, std:string, etc.
 * 2. память на "стеке" (stack) int x[10], или std::array<int, 10>, или просто int x;
 * 3. глобальная память, например, глобальные или статические объекты
 * 4. битовые поля структур (хотя это не совсем корректно)
 * 5. thread-local storage
*/
#include <iostream>
#include <memory>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    // оператор new (heap)
    unique_ptr<int> ptr(new int());
    vector<int> v(100);
    unordered_map<int, int> x1;
    x1[1] = 2;

    // ВАЖНО: за каждый new должен идти один корректный delete
    int* x2 = new int();
    delete x2;
    
    int* arr = new int[100];
    delete[] arr;
    delete arr; // ERROR!

    return 0;
}