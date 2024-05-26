#include <iostream>
#include "LinkedListStack.h"

using namespace std;

int main() {
    LinkedListStack stack; // Create a stack with capacity of 10
    // accessing top element of stack
    cout<<stack.isEmpty()<<endl;//Checking if the stack is empty
    //pushing elements to stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    stack.printStack();//printing the stack

    stack.pop();//pop the stack
    stack.pop();//pop the stack
    stack.pop();//pop the stack
    stack.pop();//Stack Underflow
return 0;
}