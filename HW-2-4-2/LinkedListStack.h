#pragma once
#include <iostream>

class Node {
public:
    int value;
    Node *pNext;
};

class LinkedListStack {
private:
    Node *pTop;
public:

    LinkedListStack() {
        pTop = nullptr;
    }

    ~LinkedListStack() {
        Node *pCurrentNode = pTop;
        Node *pNextNode = nullptr;
        while (pCurrentNode != nullptr) {
            pNextNode = pCurrentNode->pNext;
            delete pCurrentNode;
            pCurrentNode = pNextNode;
        }
        pTop = nullptr;
    }

    void Push(int value) {
        Node *pNewNode = new Node;
        pNewNode->value = value;
        pNewNode->pNext = pTop;
        pTop = pNewNode;
    }

    int Pop() {
        int temporaryValue = pTop->value;
        Node *pTemporary = pTop;
        pTop = pTop->pNext;
        delete pTemporary;
        pTemporary = nullptr;
        return temporaryValue;
    }

    int GetTop() {
        return pTop->value;
    }

    void PrintLinkedList() {
        Node *pTemporary = pTop;
        while (pTemporary != nullptr) {
            std::cout << pTemporary->value << " ";
            pTemporary = pTemporary->pNext;
        }
    }
};