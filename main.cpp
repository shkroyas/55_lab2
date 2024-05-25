#include <iostream>
#include "LinkedListStack.h"

using namespace std;

int main() {
    LinkedListStack stack; // Create a stack with capacity of 10
    // accessing top element of stack
    stack.top();//Returns Stack is Empty
    //pushing elements to stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    stack.printStack();// printing elements in the stack
    //accessing top element of stack
    cout<<"The top element is "<< stack.top()<<endl;//Returns 40    
return 0;
}