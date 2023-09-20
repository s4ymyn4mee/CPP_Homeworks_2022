#pragma once

#include <iostream>

class Node {
public:
    int value;
    Node *pNext;
};

class LinkedListQueue {
private:
    Node *pFront;
    Node *pRear;
public:

    LinkedListQueue() {
        pRear = nullptr;
        pFront = nullptr;
    }

    ~LinkedListQueue() {
        Node *pCurrentNode = pFront;
        Node *pNextNode = nullptr;
        while (pCurrentNode != nullptr) {
            pNextNode = pCurrentNode->pNext;
            delete pCurrentNode;
            pCurrentNode = pNextNode;
        }
        pRear = nullptr;
        pFront = nullptr;
    }

    void Enqueue(int value) {
        Node *pNewNode = new Node;
        pNewNode->value = value;
        if (pRear == nullptr) {
            pRear = pNewNode;
            pFront = pNewNode;
        }
        else {
            pRear->pNext = pNewNode;
            pRear = pNewNode;
        }
        pNewNode->pNext = nullptr;
    }

    int Dequeue() {
        int temporaryValue = pFront->value;
        Node *pTemporary = pFront;
        pFront = pFront->pNext;
        delete pTemporary;
        pTemporary = nullptr;
        return temporaryValue;
    }

    int GetFirst() {
        return pFront->value;
    }

    void PrintLinkedList() {
        Node *pTemporary = pFront;
        while (pTemporary != nullptr) {
            std::cout << pTemporary->value << " ";
            pTemporary = pTemporary->pNext;
        }
    }
};