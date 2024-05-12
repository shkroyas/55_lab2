//including all necessary files
#include <iostream>
#include "Stack.h"

//creating a derived class to implement Stack operations using array
class ArrayStack : Stack
{
// creating a variable to point the topmost element of the arrray stack
//creating a ptr to dynamic store the address of the array stack
private:
    int point = 0;
    int *ptr;

public:
    //calling a parametrised constructor with size for dynam,ic memory allocation
    ArrayStack( int size){
        
    ptr = new int[size];
    }
    ~ArrayStack(){}
    
    //implementing all the functions
    bool isEmpty()
    {
        if (ptr == NULL) return 1;
        else
            return 0;
    }
    void push(int item)
    {
        ptr[point] = item;
        point++;
    }

    int pop()
    {
        if (isEmpty)
        {
            return 0;
        }
        int k = ptr[point];
        point--;
        return k;
    }

    int top()
    {
        if (isEmpty)
        {
            return 0;
        }
        int k = ptr[point];
        return k;
    }
};
