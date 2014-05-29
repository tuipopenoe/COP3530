// Tui Popenoe
// COP 3530 Project 2
// ArrayLinearList.h
// ©2014

#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <iostream>

using namespace std;

template<class T> class ArrayList{
    public:
        ArrayList(int);
        ArrayList(const ArrayList<T>&);
        ~ArrayList();
        bool isEmpty() const;
        int size() const;
        T& get(int) const;
        int indexOf(const T&);
        void erase(int);
        void insert(int, const T&);
        void output(ostream& out) const;
        int capacity() const;

    private:
        // Throw illegal index if index is invalid
        void checkIndex(int) const;
        // 1D array to hold list elements
        T* element;
        // capacity of 1D array
        int arrayLength;
        // number of elements in list
        int listSize;
};

#endif