// Tui Popenoe
// COP 3530 Project 2
// COP3530_Exceptions.cpp
// ©2014

#ifndef COP3530_EXCEPTIONS_H
#define COP3530_EXCEPTIONS_H

#include <string>
#include <iostream>

using namespace std;

class IllegalParameterValue{
    public:
        IllegalParameterValue(string errorMessage = "Illegal Parameter Value"){
            message = errorMessage;
        }
        void outputMessage(){
            cout << message << endl;
        }
    private:
        string message;
};

class IllegalInputData{
    public:
        IllegalInputData(string errorMessage = "Illegal Data Input"){
            message = errorMessage;
        }
        void outputMessage(){
            cout << message << endl;
        }
    private:
        string message;
};

class IllegalIndex{
    public:
        IllegalIndex(string errorMessage = "Illegal Index"){
            message = errorMessage;
        }
        void outputMessage(){
            cout << message << endl;
        }
    private:
        string message;
};

class MatrixIndexOutOfBounds{
    public:
        MatrixIndexOutOfBounds(string errorMessage =
            "Matrix Index Out Of Bounds"){
            message = errorMessage;
        }
        void outputMessage(){
            cout << message << endl;
        }
    private:
        string message;
};

class MatrixSizeMismatch{
    public:
        MatrixSizeMismatch(string errorMessage = "Matrix Size Mismatch"){
            message = errorMessage;
        }
        void outputMessage(){
            cout << message << endl;
        }
    private:
        string message;
};

class StackEmpty{
public:
    StackEmpty(string errorMessage = "Invalid operation on the empty stack"){
        message = errorMessage;
    }
    void outputMessage(){
        cout << message << endl;
    }
    private:
        string message;
};

class QueueEmpty{
    public:
        QueueEmpty(string errorMessage = "Invalid operation on empty queue"){
            message = errorMessage;
        }
        void outputMessage(){
            cout << message << endl;
        }
    private:
        string message;
};

class HashTableFull{
    public:
        HashTableFull(string errorMessage = "The hash table is full"){
            message = errorMessage;
        }
        void outputMessage(){
            cout << message << endl;
        }
    private:
        string message;
};

class UndefinedEdgeWeight{
    public:
        UndefinedEdgeWeight(string errorMessage = "No edge weights defined"){
            message = errorMessage;
        }
        void outputMessage(){
            cout << message << endl;
        }
    private:
        string message;
};

class UndefinedMethod{
    public:
        UndefinedMethod(string errorMessage = "This method is undefined"){
            message = errorMessage;
        }
        void outputMessage(){
            cout << message << endl;
        }
    private:
        string message;
};

#endif

