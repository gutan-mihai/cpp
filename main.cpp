#include "leetcode/include.h"
#include "ravesli/include.h"
#include <vector>
#include <string>

// -    8 4 2 1
// 10   1 0 0 0
// 9    1 0 0 0

// 10 | 9 -> 1 0 1 1 -> 11
// 10 & 9 -> 1 0 0 0 -> 8
// 10 ^ 9 -> 0 0 1 1 -> 3

int main() {
    // Solution21 task;
    // ListNode21* list1 = new ListNode21(1, new ListNode21(2, new ListNode21(3)));
    // ListNode21* list2 = new ListNode21(1, new ListNode21(3, new ListNode21(4)));
    // task.mergeTwoLists(list1, list2);

    Solution66 task;
    vector<int> nums{9,8,7,6,5,4,3,2,1,0};
    task.plusOne(nums);

    return 0;
}