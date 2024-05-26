#ifndef LINKEDLISTQUEUE_H
#define LINKEDLISTQUEUE_H

#include "Queue.h"

class LinkedListQueue : public Queue {
private:
    struct Node {
        int data;
        Node* next;
        Node(int value) : data(value), next(nullptr) {}
    };
    Node* frontNode;
    Node* rearNode;
    int size;
    const int maxSize;

public:
    LinkedListQueue(int maxSize);
    ~LinkedListQueue();
    void enqueue(int element) override;
    int dequeue() override;
    bool isEmpty() const override;
    bool isFull() const override;
    int front() const override;
    int back() const override;
    void printQueue() const override;
};

#endif // LINKEDLISTQUEUE_H
