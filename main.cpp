#include <iostream>
#include "list/singly_linked.cpp"
#include "list/doubly_linked.cpp"

using namespace std;

int main() {
    cout << "----- SinglyLinked -----" << endl;
    SinglyLinked<int> slst;
    slst.push_back(2);
    slst.push_back(3);
    slst.push_front(4);
    slst.push_front(1);
    slst.insert(5, 1);
    cout << "size: " << slst.size() << endl;
    for (int i = 0; i < slst.size(); ++i) {
        cout << "value: " << slst[i] << endl;
    }

    cout << "start removing" << endl;
    slst.pop_back();
    slst.pop_front();
    slst.remove_at(1);
    cout << "size: " << slst.size() << endl;
    for (int i = 0; i < slst.size(); ++i) {
        cout << "value: " << slst[i] << endl;
    }

    // cout << "----- DoublyLinked -----" << endl;
    // DoublyLinked<int> dlst;
    // dlst.push_back(2);
    // dlst.push_back(3);
    // dlst.push_front(4);
    // dlst.push_front(1);
    // dlst.insert(5, 1);
    // cout << "size: " << dlst.size() << endl;
    // for (int i = 0; i < dlst.size(); ++i) {
    //     cout << "value: " << dlst[i] << endl;
    // }
    
    // cout << "start removing" << endl;
    // dlst.pop_back();
    // dlst.pop_front();
    // dlst.remove_at(1);
    // cout << "size: " << dlst.size() << endl;
    // for (int i = 0; i < dlst.size(); ++i) {
    //     cout << "value: " << dlst[i] << endl;
    // }

    // return 0;
}