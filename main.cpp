#include <iostream>
#include "ArrayStack.h"

int main() {
    ArrayStack stack(10); // Create a stack with capacity of 10

    if (stack.isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
    } else {
        std::cout << "Stack is not empty" << std::endl;
    }
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);
    stack.push(70);
    stack.push(80);

    stack.printStack();
return 0;
}