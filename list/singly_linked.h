#include <string>

using namespace std;

template <typename ListType>
class SinglyLinked {
  public:
    SinglyLinked();
    ~SinglyLinked();

    void push_back(ListType value);
    void push_front(ListType value);
    void remove_at(const unsigned int index);
    void pop_front();
    void pop_back();
    void insert(ListType value, int index);
    void clear();
    unsigned int size() { return _size; }

    ListType &operator[](const unsigned int index);

  private:
    template <typename>
    struct Node {
        Node(ListType value, Node<ListType> *next = nullptr) {
            this->value = value;
            this->next = next;
        }

        ListType value;
        Node<ListType> *next;
    };

    unsigned int length() { return _size - 1; }
    void check_out_of_range(const unsigned int index);
    Node<ListType> *get_previous(const unsigned int index);

    Node<ListType> *_head;
    unsigned int _size;
};
