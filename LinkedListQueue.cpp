#include "LinkedListQueue.h"
#include "LinkedList.h"
#include "Queue.h"
#include "LinkedList.cpp"
#include <iostream>

using namespace std;

LinkedListQueue::LinkedListQueue() {}

LinkedListQueue::~LinkedListQueue() {}

void LinkedListQueue::enqueue(int element) {
    list.addToTail(element);
}

LinkedList list;
int LinkedListQueue::dequeue() {
    if (isEmpty()) {
        cout << "Queue Underflow\n";
        return -1; // Special value to indicate underflow
    }
    int frontElement = front();
    list.removeFromHead();
    return frontElement;
}

bool LinkedListQueue::isEmpty() const {
    return list.isEmpty();
}

bool LinkedListQueue::isFull() const {
    return false; // A linked list queue is never full unless memory is exhausted
}

int LinkedListQueue::front() const {
    if (!isEmpty()) {
        return frontNode->data;
    } else {
        cout << "Queue is empty\n";
        return -1; // Special value to indicate empty queue
    }
}

int LinkedListQueue::back() const {
    if (!isEmpty()) {
        return rearNode->data;
    } else {
        cout << "Queue is empty\n";
        return -1; // Special value to indicate empty queue
    }
}

void LinkedListQueue::printQueue() const {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        list.display();
    }
}
