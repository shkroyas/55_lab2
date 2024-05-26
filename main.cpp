#include "LinkedListQueue.h"
#include <iostream>

using namespace std;

int main() {
    LinkedListQueue queue(5); // Create a queue with maximum size of 5
    cout << "Is the queue empty? " << (queue.isEmpty() ? "Yes" : "No") << endl;
    return 0;
}
