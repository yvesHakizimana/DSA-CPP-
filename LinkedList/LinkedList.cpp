#include <iostream>
using namespace std;

#include "LinkedList.h"


LinkedList::Node::Node(int value) {
    this->value = value;
    this->next = nullptr;

}

LinkedList::LinkedList() {
    head = tail =  nullptr;
}

LinkedList::~LinkedList(){
    //Destructor to free the memory after the usage of linked list
    Node* current = head;
    while(current != nullptr){
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::addFirst(int item) {

    // Initialize the newNode
    Node* newNode =  new Node(item);
    // If the linked list is empty
    if(head ==  nullptr){
        head = tail  = newNode;
    }else
    {
        newNode->next = head;
        head = newNode;
    }

}

void LinkedList::addLast(int item) {
    //Initialize the newNode
    Node* newNode = new Node(item);

    //If the linked list is empty
    if(head == nullptr){
        head = tail = newNode;
    }else
    {
        tail->next = newNode;
        tail = newNode;
    }
}


void LinkedList::deleteFirst() {
    //Check if the linkedList is empty
    if(head == nullptr){
        throw runtime_error("Nothing to delete the linked list is empty");
    }

    // Check if the linked list contains one element
    if(head == tail){
        head = tail = nullptr;
        return;
    }
    else{
        Node* secondNode = head->next;
        //So clear and delete the link between
        head->next = nullptr;
        //then set the node to be the head of the linkedList
        head = secondNode;
    }
}

void LinkedList::deleteLast() {
    //Check if the linked list is not empty
    if(head == nullptr){
        throw runtime_error("The linked list is empty");
    }

    //Check if the linked list has one element
    if(head == tail){
        // Then delete the node present in the linked list
        head = tail = nullptr;
        return;
    }
    else{
        // Get reference to the previousNode before lastNode then
        Node* previousNode = getPreviousNode(tail);
        //Clear the link
        previousNode->next = nullptr;
        // Set the previousNode to be the tail of the linked list
        tail = previousNode;

    }
}

bool LinkedList::contains(int item) {
    Node* current = head;
    while(current != nullptr){
        if(current->value == item) return true;
    }
    return false;
}

LinkedList::Node* LinkedList::getPreviousNode(LinkedList::Node *node) {
    Node* current = head;
    while(current->next != nullptr){
        if(current->next ==  node) return current;
        current = current->next;
    }
    return nullptr;
}



void LinkedList::printElements() {
    Node* current = head;
    while(current != nullptr)
    {
        cout << current->value << " ";
        current = current->next;
    }
    if(head == nullptr)
        cout << "The linked list is empty";
}

