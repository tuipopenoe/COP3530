// Tui Popenoe
// COP 3530 Project 2
// ArrayLinearList.h
// ©2014

#ifndef ARRAYLIST_H
#define ARRAYLIST_H

using namespace std;

template<class T> class ArrayList{
    public:
        ArrayList(int);
        ArrayList(const ArrayList<T>&);
        ~ArrayList();
        bool isEmpty();
        int size();
        T& get(int);
        int indexOf(const T&);
        void erase(int);
        void insert(int, const T&);
        int capacity();

    private:
        // Throw illegal index if index is invalid
        void checkIndex(int);
        // 1D array to hold list elements
        T* element;
        // capacity of 1D array
        int arrayLength;
        // number of elements in list
        int listSize;
};

#endif