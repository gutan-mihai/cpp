#include "leetcode/include.h"
#include "ravesli/include.h"
#include "algorithms/include.h"

#include <vector>
#include <string>
#include <stack>

using namespace std;

// -    16 8  4  2  1
// 10   0  1  0  1  0
// 9    0  1  0  0  1

// 10 | 9   -> 0 1 0 1 1 -> 11
// 10 & 9   -> 0 1 0 0 0 -> 8
// 10 ^ 9   -> 0 0 0 1 1 -> 3
// 10 << 1  -> 1 0 1 0 0 -> 20
// 10 >> 1  -> 0 0 1 0 1 -> 5

int main() {
    Solution496 task;
    std::vector<int> nums1{1,3,5,2,4};
    std::vector<int> nums2{6,5,4,3,2,1,7};
    task.nextGreaterElement(nums1, nums2);

    return 0;
}