#include "utils.h"

namespace utils {
    int rand_int(int min, int max) {
        srand(time(0));
        return min + rand() % ((max + 1) - min);
    }
} // namespace utils