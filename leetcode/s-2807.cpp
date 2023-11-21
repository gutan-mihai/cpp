#pragma once

#include <algorithm> // для функции find()
#include <numeric>   // для функции gcd()
#include <vector>

using namespace std;

// Given the head of a linked list head, in which each node contains an integer value.
// Between every pair of adjacent nodes, insert a new node with a value equal to the greatest common divisor of them.
// Return the linked list after insertion.
// The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

struct ListNode2807 {
    int val;
    ListNode2807 *next;
    ListNode2807() : val(0), next(nullptr) {}
    ListNode2807(int x) : val(x), next(nullptr) {}
    ListNode2807(int x, ListNode2807 *next) : val(x), next(next) {}
};

class Solution2807 {
public:
    ListNode2807 *insertGreatestCommonDivisors(ListNode2807 *head) {
        // Best solution:
        // ListNode *current = head;
        // while(current->next){
        //     ListNode* added = new ListNode(gcd(current->val, current->next->val), current->next);
        //     current->next = added;
        //     current = added->next;
        // }
        // return head;

        ListNode2807 *head_iterator = head;
        while (head_iterator) {
            ListNode2807 *next = head_iterator->next;
            if (next) {
                int common_divisor{1};
                vector<int> head_divisors = get_divisors(head_iterator->val);
                vector<int> next_divisors = get_divisors(next->val);
                int n = next_divisors.size();
                for (size_t i = 0; i < n; ++i) {
                    auto found = find(head_divisors.begin(), head_divisors.end(), next_divisors[i]);
                    if (found != head_divisors.end()) {
                        common_divisor = max(common_divisor, *found);
                    }
                }

                head_iterator->next = new ListNode2807(common_divisor, head_iterator->next);
                head_iterator = next;
            } else {
                head_iterator = nullptr;
            }
        }

        return head;
    }

private:
    vector<int> get_divisors(int number) {
        vector<int> divisors{1};
        for (size_t i = 2; i <= number; ++i) {
            if (number % i == 0) {
                divisors.push_back(i);
            }
        }

        return divisors;
    }
};