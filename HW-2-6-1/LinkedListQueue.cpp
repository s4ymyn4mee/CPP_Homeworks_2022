#include "LinkedListQueue.h"

#include <iostream>

using namespace std;

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
        if (pFront == nullptr && pRear == nullptr)
            return INT_MIN;
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

    bool IsEmpty() {
        return (pFront == nullptr && pRear == nullptr);
    }

    void Print() {
        Node *pTemporary = pFront;
        while (pTemporary != nullptr) {
            cout << pTemporary->value << " ";
            pTemporary = pTemporary->pNext;
        }
    }
};