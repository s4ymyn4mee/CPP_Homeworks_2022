#include "LinkedList.h"
#include <iostream>

using namespace std;

int main() {
    LinkedList list;
    list.Add(15);
    list.Add(5);
    list.Add(1, 10);
    list.Add(20);
    list.Delete(2);
    list.Delete(1);
    list.Delete();
    list.PrintLinkedList();
    return 0;
}
