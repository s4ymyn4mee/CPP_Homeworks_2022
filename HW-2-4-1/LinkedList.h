#pragma once
#include <iostream>

class Node {
public:
    int value;
    Node *pNext;
};

class LinkedList {
private:
    Node *pHead;
public:

    LinkedList() {
        pHead = nullptr;
    }

    ~LinkedList() {
        Node *pCurrentNode = pHead;
        Node *pNextNode = nullptr;
        while (pCurrentNode != nullptr) {
            pNextNode = pCurrentNode->pNext;
            delete pCurrentNode;
            pCurrentNode = pNextNode;
        }
        pHead = nullptr;
    }

    void Add(int value) {
        Node *pNewNode = new Node;
        pNewNode->value = value;
        pNewNode->pNext = pHead;
        pHead = pNewNode;
    }

    void Add(int index, int value) {
        if (index == 0)
            Add(value);
        else {
            Node *pNewNode = new Node;
            pNewNode->value = value;

            Node *pTemporary = pHead;
            for (int i = 0; i < index - 1; i++)
                pTemporary = pTemporary->pNext;
            pNewNode->pNext = pTemporary->pNext;
            pTemporary->pNext = pNewNode;
        }
    }

    void Delete() {
        if (pHead == nullptr)
            return;
        Node *pTemporary = pHead;
        pHead = pHead->pNext;
        delete pTemporary;
        pTemporary = nullptr;
    }

    void Delete(int index) {
        if (index == 0)
            Delete();
        else {
            Node *pTemporary = pHead;
            for (int i = 0; i < index - 1; i++) {
                pTemporary = pTemporary->pNext;
            }
            Node *pNextNode = pTemporary->pNext->pNext;
            delete pTemporary->pNext;
            pTemporary->pNext = pNextNode;
        }
    }

    void PrintLinkedList() {
        Node *pTemporary = pHead;
        while (pTemporary != nullptr) {
            std::cout << pTemporary->value << " ";
            pTemporary = pTemporary->pNext;
        }
    }

    int Get(int index) {
        if (index < 0)
            return -1;
        Node *pTemporary = pHead;
        for (int i = 0; i < index && pTemporary != nullptr; i++)
            pTemporary = pTemporary->pNext;
        if (pTemporary == nullptr)
            return -1;
        return pTemporary->value;
    }
};
