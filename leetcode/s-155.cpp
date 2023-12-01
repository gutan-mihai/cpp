#pragma once

#include <cmath>

// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// Implement the MinStack class:
// MinStack() initializes the stack object.
// void push(int val) pushes the element val onto the stack.
// void pop() removes the element on the top of the stack.
// int top() gets the top element of the stack.
// int getMin() retrieves the minimum element in the stack.

struct ListNode155 {
    int val;
    int min;
    ListNode155 *next;
    ListNode155(int v, int m, ListNode155 *next) : val(v), min(m), next(next) {}
};

class MinStack {
public:
    MinStack() {
        head = nullptr;
    }

    ~MinStack() {
        while (head != nullptr) {
            pop();
        };
    }

    void push(int val) {
        int min = val;
        if (head != nullptr) {
            min = std::min(head->min, val);
        }

        head = new ListNode155(val, min, head);
    }

    void pop() {
        ListNode155 *to_remove = head;
        head = head->next;
        delete (to_remove);
    }

    int top() {
        return head->val;
    }

    int getMin() {
        return head->min;
    }

private:
    ListNode155 *head;
};