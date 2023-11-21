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
        ListNode21 *result;
        ListNode21 *head1 = list1;
        ListNode21 *head2 = list2;

        while (head1 || head2) {
            if (head1 == nullptr) {
                ListNode21* added = new ListNode21(head2->val);
                result->next = added;
                result = added;
                head2 = head2->next;
            } else if (head2 == nullptr) {
                ListNode21* added = new ListNode21(head1->val);
                result->next = added;
                result = added;
                head1 = head1->next;
            } else {
                if (head1->val < head2->val) {
                    ListNode21* added = new ListNode21(head1->val);
                    result->next = added;
                    result = added;
                    head1 = head1->next;
                } else {
                    ListNode21* added = new ListNode21(head2->val);
                    result->next = added;
                    result = added;
                    head2 = head2->next;
                }
            }
        }

        return result;
    }
};