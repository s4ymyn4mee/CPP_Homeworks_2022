#include "LinkedListStack.h"
#include <iostream>

using namespace std;

int main() {
    LinkedListStack list;
    list.Push(15);
    list.Push(10);
    list.Push(5);
    list.PrintLinkedList();
    cout << endl << list.Pop() << " " << list.GetTop() << " " <<  list.Pop();
    return 0;
}