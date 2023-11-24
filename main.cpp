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
    Solution152 task;
    // vector<int> nums{2,3,-2,4}; // 6
    vector<int> nums{2,-5,-2,-4,3}; // 24
    // vector<int> nums{-3,0,1,-2}; // 1
    // vector<int> nums{-1,-2,-3,0}; // 6
    // vector<int> nums{0, 10, 10, 10, 10, 10, 10, 10, 10, 10, -10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 0}; // 1000000000
    cout << task.maxProduct(nums) << endl;
    return 0;
}