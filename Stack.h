#include <iostream>
#ifndef  Stack_h
#define Stack_h

class Stack
{
public:
    //callng a default constructor
    Stack(){}
    //a default destructror
    ~Stack(){}
    //pure virtual function for stack implementation
    virtual void push(int item) = 0; 
    virtual int pop() = 0;
    virtual int top() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

#endif /*Stack_h*/

