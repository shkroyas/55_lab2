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
    queue.printQueue(); //Prints all the elements in the queue
    cout << "Front: " << queue.front() << "\n"; // Front: 10
    cout << "Rear: " << queue.back() << "\n"; // Rear: 30

return 0;
}