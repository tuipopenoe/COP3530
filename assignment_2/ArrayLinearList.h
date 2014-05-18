// Tui Popenoe
// COP 3530 Project 2
// ArrayLinearList.h
// ©2014

#include <iostream>
#include "Node.h"

using namespace std;

template<class T> class ArrayLinearList{
    public:
        ArrayLinearList(int MaxListSize=10000);
        ~ArrayLinearList(){delete[] element;}
        bool isEmpty() const { return length == 0; }
        int length() const { return length; }
        bool Find(int k, T& x) const;
        ArrayLinearList<T>& Delete(int k, T&x);
        ArrayLinearList<T>& Insert(int k, const T& x);
        void Output(ostream& out) const;

    private:
        int length;
        int MaxSize;
        T *element;

    template<class T> ArrayLinearList<T>::ArrayLinearList(int MaxListSize){
        MaxSize = MaxListSize;
        element = new T[MaxSize];
        length = 0;
    }

    template<class T> bool ArrayLinearList<T>::Find(int k, T& x) const{
        if(k < 1 || k > length){
            return false;
        }

        x = element[k-1];
        return true;
    }

    template<class T> int ArrayLinearList<T>::Search(const T& x) const{
        for(int i = 0; i < length; i++){
            if(element[i] == x){
                return ++i;
            }
        }
        return 0;
    }

    template<class T> ArrayLinearList<T>& ArrayLinearList<T>::Delete(int k,
        T& x){
        if(Find(k, x)){
            for(int i = k; i < length; i++){
                element[i-1] = element[i];
            }
            length--;
            return *this;
        }
        else throw OutOfBounds();
    }

    template<class T> ArrayLinearList<T> & ArrayLinearList<T>::Insert(int k,
        const T& x){
        if(k < 0 || k > length) throw OutOfBounds();
        if(length == MaxSize) throw NoMem();
        for(int i = length-1; i >= k; i--){
            element[i+1] = element[i];
        }
        element[k] = x;
        length++;
        return *this;
    }

    template<class T> void ArrayLinearList<T>::Output(ostream& out) const{
        for(int i = 0; i < length; i++){
            out << element[i] << " ";
        }
    }
};