#include "LinkedList.h"
#include <iostream>

using namespace std;

int main() {
    LinkedList list;
    list.Add(15);
    list.Add(5);
    list.Add(1, 10);
    list.Add(20);
    list.Add(21);
    list.Add(22);
    list.Add(23);
    list.Delete(6);
    list.Delete();
    list.PrintLinkedList();
    cout << endl << list.Get(4) << " " << list.Get(5) << " " << list.Get(-1) << " " << list.Get(0);
    return 0;
}