#include <vector>
#include <cassert>
#include <iostream>
#include <type_traits>

int main() {
    int x = 0;
    int* y = &x;
    *y = 5;
    assert(x == 5);

    int another = 42;
    int** z = &y;           // указатель на указатель, bad style
    **z = 420;              // 2 ** говорит, что надо идти к "x"
    assert(another == 42);
    assert(x == 420);
    assert(*y == 420);

    // *z == y
    *z = &another;          // 1 * говорит, что надо идти к "y" по этому "y" теперь смотрит на "another"
    **z = 69;               // 2 ** говорит, что надо идти к "another"
    assert(x == 420);
    assert(another == 69);
    assert(*y == 69);


    // Правила:
    // 1. берите звездочку, разделяйте по ней, все что слева -- про данные, все, что справа про саму переменную
    // 2. const относится к первому типу слева, а если его нет, то справа

    int a1 = 10;
    const int* b1 = &a1; // const до * означает константная память, нельзя менять память
    // *b1 = 42; // ERROR!

    int a2 = 10;
    int* const b2 = &a2; // const после * означает константный указатель, нельзя менять указатель "b2"
    *b2 = 43; // ok, b2 is constant
    // b2 = &a2; // ERROR!

    int a3 = 10;
    const int* const b3 = &a3; // нельзя менять менять, нельза менять указатель
    // *b3 = 42; // ERROR!
    // b3 = &a3; // ERROR!

    // Ссылки vs Указатель
    // 1. Ссылки под капотом это указатели
    // 2. Ссылка не можть быть нулевой, указатель может
    // 3. Нельзя брать ссылки на ссылки
}