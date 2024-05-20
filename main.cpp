#include <iostream>
#include "ArrStack.h"

int main() {
    ArrayStack stack(10); // Create a stack with capacity of 10

    if (stack.isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
    } else {
        std::cout << "Stack is not empty" << std::endl;
    }

return 0;
}