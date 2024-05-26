#include "LinkedListQueue.h"
#include <iostream>

using namespace std;

LinkedListQueue::LinkedListQueue(int maxSize) : frontNode(nullptr), rearNode(nullptr), size(0), maxSize(maxSize) {}

LinkedListQueue::~LinkedListQueue() {
    Node* current = frontNode;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

void LinkedListQueue::enqueue(int element) {
    if (size < maxSize) {
        Node* newNode = new Node(element);
        if (isEmpty()) {
            frontNode = rearNode = newNode;
        } else {
            rearNode->next = newNode;
            rearNode = newNode;
        }
        size++;
    } else {
        cout << "Queue is full. Cannot enqueue." << endl;
    }
}

int LinkedListQueue::dequeue() {
    if (!isEmpty()) {
        Node* temp = frontNode;
        int value = frontNode->data;
        frontNode = frontNode->next;
        if (frontNode == nullptr) {
            rearNode = nullptr;
        }
        delete temp;
        size--;
        return value;
    } else {
        cout << "Queue Underflow" << endl;
        return -1; // Special value to indicate underflow
    }
}

bool LinkedListQueue::isEmpty() const {
    return frontNode == nullptr;
}

bool LinkedListQueue::isFull() const {
    return size == maxSize;
}

int LinkedListQueue::front() const {
    if (!isEmpty()) {
        return frontNode->data;
    } else {
        cout << "Queue is empty" << endl;
        return -1; // Special value to indicate empty queue
    }
}

int LinkedListQueue::back() const {
    if (!isEmpty()) {
        return rearNode->data;
    } else {
        cout << "Queue is empty" << endl;
        return -1; // Special value to indicate empty queue
    }
}

void LinkedListQueue::printQueue() const {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue contents: ";
        Node* current = frontNode;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}
