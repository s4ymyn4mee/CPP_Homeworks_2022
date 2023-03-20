#pragma once

#include <iostream>

class Node {
public:
    int value;
    Node *pNext;
};

class LinkedListQueue {
private:
    Node *pHead;
public:

    LinkedListQueue() {
        pHead = nullptr;
    }

    ~LinkedListQueue() {
        Node *pCurrentNode = pHead;
        Node *pNextNode = nullptr;
        while (pCurrentNode != nullptr) {
            pNextNode = pCurrentNode->pNext;
            delete pCurrentNode;
            pCurrentNode = pNextNode;
        }
        pHead = nullptr;
    }

    void Enqueue(int value) {
        Node *pNewNode = new Node;
        pNewNode->value = value;
        if (pHead == nullptr) {
            pNewNode->pNext = pHead;
            pHead = pNewNode;
        } else {
            Node *pTemporary = pHead;
            while (pTemporary->pNext != nullptr)
                pTemporary = pTemporary->pNext;
            pNewNode->pNext = nullptr;
            pTemporary->pNext = pNewNode;
        }
    }

    int Dequeue() {
        int temporaryValue = pHead->value;
        Node *pTemporary = pHead;
        pHead = pHead->pNext;
        delete pTemporary;
        pTemporary = nullptr;
        return temporaryValue;
    }

    int GetFirst() {
        return pHead->value;
    }

    void PrintLinkedList() {
        Node *pTemporary = pHead;
        while (pTemporary != nullptr) {
            std::cout << pTemporary->value << " ";
            pTemporary = pTemporary->pNext;
        }
    }
};