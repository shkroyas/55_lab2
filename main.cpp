#include <iostream>
#include "ArrayQueue.h"

using namespace std;

int main() {
    cout << "Checking if Array Queue is empty:\n";
    ArrayQueue queue(5);
    cout<<queue.isEmpty()<<endl;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.printQueue(); //Prints all the elements in the queue
    
return 0;
}