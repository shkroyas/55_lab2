#include "LinkedListStack.h"
#include <iostream>

using namespace std;

LinkedListStack::LinkedListStack() : topNode(nullptr), size(0) {}

LinkedListStack::~LinkedListStack() {
    while (!isEmpty()) {
        pop();
    }
}

bool LinkedListStack::isEmpty() {
    return topNode == nullptr;
}

bool LinkedListStack::isFull() {
    return size == MAX_SIZE;
}

void LinkedListStack::push(int item) {
    if (!isFull()) {
        Node* newNode = new Node(item);
        newNode->next = topNode;
        topNode = newNode;
        ++size;
    } else {
        cout << "Stack Overflow\n";
    }
}

int LinkedListStack::pop() {
    if (!isEmpty()) {
        Node* temp = topNode;
        int poppedValue = topNode->data;
        topNode = topNode->next;
        delete temp;
        --size;
        return poppedValue;
    } else {
        cout << "Stack Underflow\n";
        return -1; // Return a special value to indicate stack underflow
    }
}

int LinkedListStack::top() {
    if (!isEmpty()) {
        return topNode->data;
    } else {
        cout << "Stack is empty\n";
        return -1; // Return a special value to indicate the stack is empty
    }
}

void LinkedListStack::printStack() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        LinkedListStack tempStack;
        Node* current = topNode;

        // Push all elements to the temporary stack
        while (current != nullptr) {
            tempStack.push(current->data);
            current = current->next;
        }

        // Print elements from the temporary stack
        cout << "Stack contents: ";
        while (!tempStack.isEmpty()) {
            cout << tempStack.top() << " ";
            tempStack.pop();
        }
        cout << endl;
    }
}