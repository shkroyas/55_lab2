#include "Stack.h"

class ArrayStack : public Stack {
protected:
    int point;
    int *ptr;
    int capacity;

public:
    ArrayStack(int size);
    ~ArrayStack();

    bool isEmpty() override;
    bool isFull() override;
    void push(int item) override;
    int pop() override;
    int top() override;
    void printStack() override;
};

