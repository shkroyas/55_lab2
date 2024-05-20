#include <iostream>
#include "ArrayStack.h"

int main() {
    ArrayStack stack(10); // Create a stack with capacity of 10

    if (stack.isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
    } else {
        std::cout << "Stack is not empty" << std::endl;
    }
    //pushing elements to stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);
    stack.push(70);
    stack.push(80);
    stack.push(90);
    stack.push(92);
    

    stack.printStack();// printing elements in the stack

    stack.push(94);    //stack overflow 
return 0;
}