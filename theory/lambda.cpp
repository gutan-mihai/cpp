#include <iostream>

// [/* capute */]</* optional template params */>(/* params */) /* specifiers */ {
//     /* body */
// }

int main()
{
    int a = 10;

    // захватить все переменные
    [&] {
        ++a;
    };

    [&]() {
        ++a;
    };

    // захватить только "a"
    [&a]() {
        ++a;
    };

    // шаблонная lambda
    []<typename T>(T a) {
        ++a;
    };

    // вызывается сразу
    [&]() {
        ++a;
    }();

    return 0;
}