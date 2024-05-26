#include "Queue.h"
#include "LinkedList.h"

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

public:
    // Constructor to initialize an empty queue
    LinkedListQueue();

    // Destructor to free allocated memory
    ~LinkedListQueue();

    // Override virtual functions from Queue
    void enqueue(int element) override;
    int dequeue() override;
    bool isEmpty() const override;
    bool isFull() const override;
    int front() const override;
    int back() const override;
    void printQueue() const override;
};