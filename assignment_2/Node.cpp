// Tui Popenoe
// COP 3530
// Node.h
// ©2014

#include <iostream>
#include "Node.h"

using namespace std;

Node::Node(int nodeValue, Node *nextPointer){
    setValue(nodeValue);
    setNext(nextPointer);
}

void Node::setValue(int nodeValue){
    value = nodeValue;
}

int Node::getValue(){
    return value;
}

Node *Node::setNext(Node *nextPointer){
    next = nextPointer;
}

Node *Node::getNext(){
    return next;
}