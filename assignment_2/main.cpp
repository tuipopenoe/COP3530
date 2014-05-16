// Tui Popenoe
// COP 3530 Project 2
// main.cpp
// ©2014

#include "ArrayLinearList.h"

int main(){
    ArrayLinearList<int> arrayLinearList = new ArrayLinearList();

    arrayLinearList.insert(5, 10);
    arrayLinearList.delete(5);
    arrayLinearList.print();
    arrayLinearList.printElement(6);
    arrayLinearList.printSize();
    arrayLinearList.quit();

    return 0;
}