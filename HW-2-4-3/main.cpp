#include "LinkedListQueue.h"
#include <iostream>

using namespace std;

int main() {
    LinkedListQueue list;
    list.Enqueue(5);
    list.Enqueue(10);
    list.Enqueue(15);
    list.PrintLinkedList();
    list.Enqueue(43);
    std::cout << std::endl;
    list.PrintLinkedList();
    std::cout << std::endl;
    std::cout << list.Dequeue() << std::endl;
    std::cout << list.Dequeue() << std::endl;
    list.PrintLinkedList();
    std::cout << std::endl << list.GetFirst() << std::endl;
    list.PrintLinkedList();
    return 0;
}