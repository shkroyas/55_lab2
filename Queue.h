class Queue {
public:
    // Default constructor
    Queue() {}
    
    // Virtual destructor
    virtual ~Queue() {}

    // Pure virtual functions for queue operations
    virtual void enqueue(int element) = 0;
    virtual int dequeue() = 0;
    virtual bool isEmpty() const = 0;
    virtual bool isFull() const = 0;
    virtual int front() const = 0;
    virtual int back() const = 0;
    virtual void printQueue() const = 0;
};