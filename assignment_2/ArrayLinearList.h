// Tui Popenoe
// COP 3530 Project 2
// ArrayLinearList.h
// ©2014

#include <iostream>
#include "Node.h"

using namespace std;

template<class T> class ArrayLinearList{
    public:
        ArrayLinearList();
        ArrayLinearList(T element){

        }

        T insert(T element, int index){
            // Increase the size of the array
            // and insert the element, moving all
            // elements > index to the right
        }

        void delete(int index){
            // Delete an element and move all elements
            // >index to the left
        }

        void print(){
            for(int i = 0; i < this.length; i++){
                cout<<this[i]<<endl;
            }
        }

        void printElement(int index){

        }

        void printSize(){

        }

};