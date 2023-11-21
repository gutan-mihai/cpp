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
    Solution21 task;
    ListNode21* list1 = new ListNode21(1, new ListNode21(2, new ListNode21(3)));
    ListNode21* list2 = new ListNode21(1, new ListNode21(3, new ListNode21(4)));
    task.mergeTwoLists(list1, list2);

    return 0;
}