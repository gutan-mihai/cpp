#include "utils.h"
#include <stdlib.h>

namespace utils {
    int rand_int(int min, int max) {
        return min + rand() % ((max + 1) - min);
    }
} // namespace utils