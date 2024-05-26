#include "Queue.h"
class ArrayQueue {
private:
    int* arr;
    int frontIndex;
    int rearIndex;
    int capacity;
    int size;

public:
    ArrayQueue(int capacity);
    ~ArrayQueue();
    void enqueue(int element);
    int dequeue();
    bool isEmpty() const;
    bool isFull() const;
    int front() const;
    int back() const;
    void printQueue() const;
};
