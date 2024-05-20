#include "ArrayStack.h"
#include <iostream>

ArrayStack::ArrayStack(int size) : point(0) {
    ptr = new int[size];
}

ArrayStack::~ArrayStack() {
    delete[] ptr;
}

bool ArrayStack::isEmpty() {
    return point == 0;
}

bool ArrayStack::isFull() {
    return point == capacity;
}

void ArrayStack::push(int item) {
    if (!isFull()) {
        ptr[point++] = item;
    } else {
        std::cout << "Stack Overflow\n";
    }
}

int ArrayStack::pop() {
    if (!isEmpty()) {
        return ptr[--point];
    } else {
        std::cout << "Stack Underflow\n";
        return -1; // Return a special value to indicate stack underflow
    }
}

int ArrayStack::top() {
    if (!isEmpty()) {
        return ptr[point - 1];
    } else {
        std::cout << "Stack is empty\n";
        return -1; // Return a special value to indicate the stack is empty
    }
}
