#include <iostream>
#include <vector>

// Иерархия
namespace std {
    class exception {
        virtual const char* what() = 0;
    };

    class runtime_error : public exception {};
    class logic_error : public exception {};
    class invalid_argument : public logic_error {};
};

void FailingFunc() {
    throw std::runtime_error("Fail");
}

void SomeFunc() {
    std::vector<int> x(10);
    FailingFunc();
}

int main() {
    try {
        SomeFunc();
    } catch (const std::exception& ex) {
        // log_exception(ex.what);
    }

    try {
        SomeFunc();
    } catch (...) { // любое количетсва аргументов, имеет самый низкий приоритет при обработке
        // log exception
    }

    return 0;
}