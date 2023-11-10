/**
 * Ranges:
 * - любой контейнер с .begin(), .end() валидный range
 * - алгоритмы поддерживают ranges
 * - преобразования с помощью пайплайнов
 * - views - невладеюшие и не изменяющие range функции
 * - фильтрация и больше читаемости кода
 * - lazy исполнение
*/

#include <vector>
#include <ranges>

int main() {
    std::vector<int> data{2, 4, 5, 1, 2, 5, 9};
    auto filtered {
        data 
            | std::views::filter([](int value) { return isprime(value); })
            | std::views::transform([](int value) { return value * 2; })
            | std::views::reverse
    }
}