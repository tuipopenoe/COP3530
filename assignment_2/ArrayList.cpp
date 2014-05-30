// Tui Popenoe
// COP 3530 Project 2
// ArrayList.cpp
// ©2014


#include <ostream>
#include <algorithm>
#include <iterator>
#include "ArrayList.h"

using namespace std;

// Constructor
template<class T> ArrayList<T>::ArrayList(int initialCapacity){
    if(initialCapacity < 1){
        cout << "Initial capacity = " << initialCapacity << " Must be > 0" ;
        // TODO: throw IllegalParameterValue;
    }

    arrayLength = initialCapacity;
    element = new T[arrayLength];
    listSize = 0;
}

// Copy Constructor
template<class T> ArrayList<T>::ArrayList(const ArrayList<T>& theList){
    arrayLength = theList.arrayLength;
    listSize = theList.listSize;
    element = new T[arrayLength];
    copy(theList.element, theList.element + listSize, element);
}

// Destructor
template<class T> ArrayList<T>::~ArrayList(){
    delete [] element;
}

// Check Index
template<class T> void ArrayList<T>::checkIndex(int theIndex) const {
    // Verify index is between 0 and listSize-1
    if(theIndex < 0 || theIndex >= listSize){
        cout << "index = " << theIndex << "size = " << listSize;
        // TODO: throw illegalIndex();
    }
}

// Get
template<class T> T& ArrayList<T>::get(int theIndex) const{
    // Return element whose index is theIndex. Throw illegalIndex exception
    checkIndex(theIndex);
    return element[theIndex];
}

template<class T> int ArrayList<T>::indexOf(const T& theElement){
    // Return index of first occurence of theElement
    // search for theElement
    int theIndex = (int) (find(element, element + listSize, theElement) -
        element);
    // Check if theElement was found
    // Not Found
    if(theIndex == listSize){
        return -1;
    }
    else{
        return theIndex;
    }
}

// Delete the element whose index is theIndex
template<class T> void ArrayList<T>::erase(int theIndex){
    checkIndex(theIndex);

    // Valid index, shift elements with higher index
    copy(element + theIndex + 1, element + listSize, element + theIndex);

    // invoke destructor
    element[--listSize].~T();
}

template<class T> void ArrayList<T>::insert(int theIndex, const T& theElement){
    // Insert theElement
    if(theIndex < 0 || theIndex > listSize){
        // invalid index
        // TODO: throw exception
    }

    // Valid Index
    if(listSize == arrayLength){
        // No space in the array, double the capacity
        changeLength1D(element, arrayLength, 2 * arrayLength);

        arrayLength *= 2;
    }

    // shift elements right one position
    copy_backward(element + theIndex, element + listSize,
        element + listSize +1);

    element[theIndex] = theElement;

    listSize++;
}

// Output the list
template<class T> void ArrayList<T>::output(ostream& out) const{
    // put the list into the stream out
    copy(element, element + listSize, ostream_iterator<T>(cout, " "));
}

template<class T> int ArrayList<T>::capacity() const{
    return arrayLength;
}