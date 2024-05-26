#include <iostream>
#include "ArrayQueue.h"

using namespace std;

int main() {
    cout << "Checking if Array Queue is empty:\n";
    ArrayQueue queue(5);
    cout<<queue.isEmpty()<<endl;
    //Adding elements to queue
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);
    queue.printQueue(); //Prints all the elements in the queue

    //Removing elements from queue
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();//Attempting to remove elements from queue when it is empty
    
return 0;
}