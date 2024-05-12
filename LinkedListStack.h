// including all header files
#include "Stack.h"
#include "LinkedList.h"

// deriving LinkedListStack from base class Stack
class LinkedListStack : public Stack
{
    private:
        //declaring an object
        LinkedList l;

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
};
