// including all header files
#include "Stack.h"
#include "LinkedList.h"

// deriving LinkedListStack from base class Stack
class LinkedListStack {
private:
    class Node {
    public:
        int data;
        Node* next;
        Node(int value) : data(value), next(nullptr) {}
    };

    Node* topNode;
    int size; // to keep track of the current size of the stack
    static const int MAX_SIZE = 10; // maximum stack size
    public:
        //calling a  default constructor
        LinkedListStack();
        //a default destructor
        ~LinkedListStack();
        
        //declaring all virtual functions for stack implementation
        void push(int item);
        int pop();
        int top();
        bool isEmpty();
        bool isFull();
        void printStack();
};
