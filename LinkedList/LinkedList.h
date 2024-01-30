//
// Created by cyberknight on 30/01/24.
//

#ifndef DSA_CPP_LINKEDLIST_H
#define DSA_CPP_LINKEDLIST_H

#endif //DSA_CPP_LINKEDLIST_H


class LinkedList {
private:
    class Node {
    public:
        Node *next;
        int value;
        explicit Node(int value);
    };

    Node* head;
    Node* tail;

public:
    LinkedList();
    ~LinkedList();
    void addFirst(int item);
    void addLast(int item);
    void deleteFirst();
    void deleteLast();
    bool contains(int item);
    Node* getPreviousNode(Node* node);
    void reverse();
    void printElements();
};



