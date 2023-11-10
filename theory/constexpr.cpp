#include <iostream>

/**
 * constexpr - спецификатор типа, введённый в стандарт программирования языка C++11
 * для обозначения константных выражений, которые могут быть вычислены во время компиляции кода
 * 
 * Тело функции должно состоять их единственного оператора return. В нем можно использовать
 * только операции над константами и аргументами, а также вызывать constexpr функции,
 * плюс некоторые операторы (sizeof, throw)
*/

// До C++14
constexpr int Fact(int n) {
    return n == 0 ? 1 : n * Fact(n - 1);
}

// После C++14
constexpr int Fact(int n) {
    int res = 1;
    for (int i = 1; i <= n; ++i) {
        res *= i;
    }

    return res;
}

int main() {
    static_assert(Fact(8) == 40320, "Wrong factorial value");

    int n;
    std::cout << "Enter n: "; std::cin >> n;
    std::cout << Fact(n) << std::endl;

    return 0;
}