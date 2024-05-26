#include "ArrayQueue.h"
#include <iostream>

using namespace std;

//Constructor
ArrayQueue::ArrayQueue(int size) : frontIndex(0), rearIndex(-1), capacity(size), size(0) {
    arr = new int[size];
}

//Destructor
ArrayQueue::~ArrayQueue() {
    delete[] arr;
}

//Checks if the queue is empty
bool ArrayQueue::isEmpty() const {
    return size == 0;
}

//Check if the queue is full
bool ArrayQueue::isFull() const {
    return size == capacity;
}

//Adds an element to the queue
void ArrayQueue::enqueue(int element) {
    if (!isFull()) {
        rearIndex = (rearIndex + 1) % capacity;
        arr[rearIndex] = element;
        size++;
    } else {
        cout << "Queue Overflow\n";
    }
}

//Removes an element from the queue
int ArrayQueue::dequeue() {
    if (!isEmpty()) {
        int value = arr[frontIndex];
        frontIndex = (frontIndex + 1) % capacity;
        size--;
        return value;
    } else {
        cout << "Queue Underflow\n";
        return -1; // Return a special value to indicate underflow
    }
}

//Returns the front elements of the queue
int ArrayQueue::front() const {
    if (!isEmpty()) {
        return arr[frontIndex];
    } else {
        cout << "Queue is empty\n";
        return -1; // Return a special value to indicate empty queue
    }
}

//Returns the back elements of the queue
int ArrayQueue::back() const {
    if (!isEmpty()) {
        return arr[rearIndex];
    } else {
        cout << "Queue is empty\n";
        return -1; // Return a special value to indicate empty queue
    }
}

//Prints the elements of the queue
void ArrayQueue::printQueue() const {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue contents: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[(frontIndex + i) % capacity] << " ";
        }
        cout << endl;
    }
}
