#include "LinkedListQueue.h"
#include <iostream>

using namespace std;

int main() {
    LinkedListQueue list;
    list.Enqueue(5);
    list.Enqueue(10);
    list.Enqueue(15);
    list.PrintLinkedList();
    cout << endl << list.GetFirst() << " " << list.Dequeue() << " " <<  list.Dequeue();
    return 0;
}