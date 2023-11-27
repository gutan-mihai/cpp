#include "leetcode/include.h"
#include "ravesli/include.h"
#include <vector>
#include <string>

using namespace std;

// -    8 4 2 1
// 10   1 0 1 0
// 9    1 0 0 1

// 10 | 9 -> 1 0 1 1 -> 11
// 10 & 9 -> 1 0 0 0 -> 8
// 10 ^ 9 -> 0 0 1 1 -> 3

int main() {
    Solution167 task;
    vector<int> nums{2,7,11,15};
    task.twoSum(nums, 9);
    return 0;
}