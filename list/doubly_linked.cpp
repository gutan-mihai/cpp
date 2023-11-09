#include "doubly_linked.h"

template <typename ListType>
DoublyLinked<ListType>::DoublyLinked() {
    _size = 0;
    _head = nullptr;
    _tail = nullptr;
}

template <typename ListType>
DoublyLinked<ListType>::~DoublyLinked() {
    clear();
}