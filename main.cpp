#include "LinkedListQueue.h"
#include <iostream>

using namespace std;

int main() {
    LinkedListQueue queue(5); // Create a queue with maximum size of 5
    cout << "Is the queue empty? " << (queue.isEmpty() ? "Yes" : "No") << endl;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);
    cout<<"The Queue contents:"<<endl;
    queue.printQueue();//Printing the elements of the queue
    queue.dequeue();//Dequeuing
    queue.dequeue();//Dequeuing
    queue.dequeue();//Dequeuing
    queue.dequeue();//Dequeuing
    queue.dequeue();//Dequeuing
    queue.dequeue();//Queue UnderFlow
    

    return 0;
}
