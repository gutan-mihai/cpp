#include "singly_linked.h"

template <typename ListType>
SinglyLinked<ListType>::SinglyLinked() {
    _size = 0;
    _head = nullptr;
}

template <typename ListType>
SinglyLinked<ListType>::~SinglyLinked() {
    clear();
}

template <typename ListType>
void SinglyLinked<ListType>::check_out_of_range(const unsigned int index) {
    if (index > length()) {
        throw out_of_range("The maximum possible length is: " + to_string(length()));
    }
}

template <typename ListType>
SinglyLinked<ListType>::Node<ListType>*
SinglyLinked<ListType>::get_previous(const unsigned int index) {
    check_out_of_range(index);

    Node<ListType> *previous = _head;
    for (unsigned int i = 0; i < index - 1; ++i) {
        previous = previous->next;
    }

    return previous;
}

template <typename ListType>
inline ListType &SinglyLinked<ListType>::operator[](const unsigned int index) {
    check_out_of_range(index);

    unsigned int inc = 0;
    Node<ListType> *current = _head;
    while (inc < index) {
        current = current->next;
        ++inc;
    }

    return current->value;
}

template <typename ListType>
void SinglyLinked<ListType>::push_back(ListType value) {
    if (_head == nullptr) {
        _head = new Node<ListType>(value);
    } else {
        Node<ListType> *current = _head;
        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = new Node<ListType>(value);
    }

    _size++;
}

template <typename ListType>
void SinglyLinked<ListType>::push_front(ListType value) {
    _head = new Node<ListType>(value, _head);
    _size++;
}

template <typename ListType>
void SinglyLinked<ListType>::remove_at(const unsigned int index) {
    if (index == 0) {
        pop_front();
        return;
    }

    Node<ListType> *previous = get_previous(index);
    Node<ListType> *to_remove = previous->next;
    previous->next = to_remove->next;
    delete (to_remove);
    _size--;
}

template <typename ListType>
void SinglyLinked<ListType>::pop_front() {
    if (_head == nullptr) {
        return;
    }

    Node<ListType> *to_remove = _head;
    _head = _head->next;
    delete (to_remove);
    _size--;
}

template <typename ListType>
void SinglyLinked<ListType>::pop_back() {
    remove_at(length());
}

template <typename ListType>
void SinglyLinked<ListType>::insert(ListType value, int index) {
    if (index == 0) {
        push_front(value);
    } else {
        Node<ListType> *previous = get_previous(index);
        previous->next = new Node<ListType>(value, previous->next);
        _size++;
    }
}

template <typename ListType>
void SinglyLinked<ListType>::clear() {
    while (size()) {
        pop_front();
    }
}
