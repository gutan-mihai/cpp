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
    Solution42 task;
    // vector<int> nums{4,2,0,3,2,5}; // 9
    // vector<int> nums{5, 4, 1, 2}; // 1
    // vector<int> nums{0,1,2,2,1,0,1,3,2,1,2,1}; // 6
    vector<int> nums{0,1,2,3,4,3,2,1,0}; // 0
    cout << task.trap(nums) << endl;
    return 0;
}