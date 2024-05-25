#include <iostream>
#include "ArrayStack.h"

using namespace std;

int main() {
    ArrayStack stack(10); // Create a stack with capacity of 10

    if (stack.isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }
    //pushing elements to stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    stack.printStack();// printing elements in the stack
    //Follows the LIFO Principle of the stack 
    stack.pop(); //Removes the Last element inserted
    stack.pop(); //Removes the last element inserted
    stack.pop(); //Removes the last element inserted
    stack.pop(); //Removes the last element inserted
    if (stack.isEmpty()) {
        cout << "Stack is empty, no pop operation possible." << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    stack.pop(); //Stack Underflow


return 0;
}