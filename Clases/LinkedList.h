#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include <iostream>
#include "Node.h"

class LinkedList
{
private:
    Node* head;
public:
    LinkedList() {head = NULL;}
    void insertNode(std::string, std::string, std::string, std::string, double, std::string);
    void printList();
    void deleteNode(int);

};

#endif

