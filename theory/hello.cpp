#include <iostream>
#include "dummy.h"

using namespace std;

void displayCopy(Dummy dummy);
void displayLink(Dummy& dummy);
void displayPointer(Dummy* dummy);

int main() {
    string vasea = "asdadas";

    Dummy dummy0;
    Dummy dummy1(256);
    Dummy* dummy2 = &dummy1;
    dummy2->setNum(128);

    // displayCopy1: 0x7fff64082f8c | 128
    // displayCopy2: 0x7fff64082f8c | 16
    displayCopy(dummy1);

    // displayLink1: 0x7fff64082fd0 | 128
    // displayLink2: 0x7fff64082fd0 | 32
    displayLink(dummy1);

    // displayPointer1: 0x7fff64082fd0 | 32
    // displayPointer2: 0x7fff64082fd0 | 64
    displayPointer(&dummy1);

    // displayCopy(dummy2); // нельзя копировать указатель
    // displayLink(dummy2); // нельзя отправить указатель по ссылке

    // displayPointer1: 0x7fff64082fd0 | 64
    // displayPointer2: 0x7fff64082fd0 | 64
    displayPointer(dummy2);

    cout << "Dummy::display(): " << Dummy::display() << endl; // Dummy::display(): 32
    cout << &dummy0 << " | " << dummy0.getNum() << endl; // 0x7fff64082fcc | 32641
    cout << &dummy1 << " | " << dummy1.getNum() << endl; // 0x7fff64082fd0 | 64
    cout << dummy2 << " | " << dummy2->getNum() << endl; // 0x7fff64082fd0 | 64

    return 0;
}

void displayCopy(Dummy dummy) {
    cout << "displayCopy1: " << &dummy << " | " << dummy.getNum() << endl;
    dummy.setNum(16);
    cout << "displayCopy2: " << &dummy << " | " << dummy.getNum() << endl;
}

void displayLink(Dummy& dummy) {
    cout << "displayLink1: " << &dummy << " | " << dummy.getNum() << endl;
    dummy.setNum(32);
    cout << "displayLink2: " << &dummy << " | " << dummy.getNum() << endl;
}

void displayPointer(Dummy* dummy) {
    cout << "displayPointer1: " << dummy << " | " << dummy->getNum() << endl;
    dummy->setNum(64);
    cout << "displayPointer2: " << dummy << " | " << dummy->getNum() << endl;
}