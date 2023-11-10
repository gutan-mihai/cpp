#include <iostream>

using namespace std;

class Annotation {
public:
    Annotation(string text) : value(move(text)) {}
    // Annotation(const string& text) : value(text) {} // по суть, это идентично первому конструктору
    // Annotation(const string text) : value(move(text)) {} // "const" - не надо использовать потому, что вызывается конвертация "const rvalues" в "const lvalues"

private:
    string value;
};

// Правила коллапса ссылок в шаблон:
// T&   + &     -> T&   // lvalues are persistent
// T&   + &&    -> T&   // lvalues are persistent
// T&&  + &     -> T&   // preserving what users want w/o copy
// T&&  + &&    -> T&&  // preserving what users want w/o copy
// только rvalues с rvalues дают rvalues, в остальном lvalues

template<typename T>
T foo(T&& value) {
    return value;
}

template<typename T>
void fwd(T&& value) {
    Call(forward<T>(value));    // forward() - кастит как надо, lvalues ссылки к lvalues, rvalues к rvalues
    // Call(move<T>(value));    // move() - всегда кастит к rvalues, тут не правильно использовать move()
}

int main() {
    foo(24); // 24 - это rvalues (int), работает правильно

    int x = 42;
    foo(x); // x - это lvalues (int&), работает но не совсем правильно
            // по хорошему надо писать foo(move(x)); для того, чтобы из lvalues сделать rvalues
}

// Примечения:
// RAII (Resource Acquisition Is Initialization) идиома
// на std::unique_ptr можно только делать move, это гарантирует никакхих копий и double free, один объект, один его разрущает. RAII
// std::string, std::vector можно также перемещать между друг другом, то же RAII