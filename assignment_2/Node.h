// Tui Popenoe
// COP 3530
// Node.h
// ©2014

#ifndef NODE_H
#define NODE_H

using namespace std;

class Node{
    public:
        Node(int, Node *);

        void setValue(int);
        void setNext(Node *);

    private:
        int value;
        Node *next;
};

#endif