#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>

struct Node {
    int data;
    Node* next;
};

void splitStack(Node* P1, Node*& evenStackTop, Node*& oddStackTop);
void printStackAndAddress(Node* top);
void deleteStack(Node* top);

#endif
