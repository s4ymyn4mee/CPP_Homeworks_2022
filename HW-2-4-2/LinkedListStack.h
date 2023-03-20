#pragma once
#include <iostream>

class Node {
public:
    int value;
    Node *pNext;
};

class LinkedListStack {
private:
    Node *pHead;
public:

    LinkedListStack() {
        pHead = nullptr;
    }

    ~LinkedListStack() {
        Node *pCurrentNode = pHead;
        Node *pNextNode = nullptr;
        while (pCurrentNode != nullptr) {
            pNextNode = pCurrentNode->pNext;
            delete pCurrentNode;
            pCurrentNode = pNextNode;
        }
        pHead = nullptr;
    }

    void Push(int value) {
        Node *pNewNode = new Node;
        pNewNode->value = value;
        pNewNode->pNext = pHead;
        pHead = pNewNode;
    }

    int Pop() {
        int temporaryValue = pHead->value;
        Node *pTemporary = pHead;
        pHead = pHead->pNext;
        delete pTemporary;
        pTemporary = nullptr;
        return temporaryValue;
    }

    int GetTop() {
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