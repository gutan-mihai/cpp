#pragma once

// You are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two
// lists.
// Return the head of the merged linked list.

struct ListNode21 {
    int val;
    ListNode21 *next;
    ListNode21() : val(0), next(nullptr) {}
    ListNode21(int x) : val(x), next(nullptr) {}
    ListNode21(int x, ListNode21 *next) : val(x), next(next) {}
};

class Solution21 {
public:
    ListNode21 *mergeTwoLists(ListNode21 *list1, ListNode21 *list2) {
        ListNode21 *result{};
        while (list1 || list2) {
            
        }

        return result;
    }
};