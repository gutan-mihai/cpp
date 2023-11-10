#include <thread>
#include <sstream>
#include <iostream>
#include <mutex>

// clang++ thread.cpp -fsanitize=thread     # для того, чтобы смотреть проблемы с data race
// mutex - используется когда есть работа с общей памятью (data race)
std::mutex m;

void WriteHellorWorld(int& x) {
    std::unique_lock<std::mutex> lock(m);
    ++x; // data race
    std::cout << "[tid:" << std::this_thread::get_id() << "] Hello World" << " " << x << std::endl;
}

int main() {
    int x = 5;
    std::thread first(WriteHellorWorld, std::ref(x));
    std::thread second(WriteHellorWorld, std::ref(x));

    first.join();
    second.join();

    return 0;
}