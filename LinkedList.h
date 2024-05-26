#pragma once

// Node class definition
class Node
{
public:
    int info;   // Data stored in the node
    Node *next; // Pointer to the next node in the list

    // Constructor to initialize a node with data
    Node(int data);
};

// LinkedList class definition
class LinkedList
{
private:
    Node *HEAD;                     // Pointer to the head of the list
    Node *TAIL;                     // Pointer to the tail of the list
    static const int MAX_SIZE = 10; // Maximum size of the linked list
    int size;                       // Current size of the linked list

public:
    // Constructor
    LinkedList();

    // Destructor
    ~LinkedList();

    // Check if the list is empty
    bool isEmpty();

    // Check if the list is full
    bool isFull();

    // Add a node with data after the given predecessor node
    void add(int data, Node *pred);

    // Add a node with data to the head of the list
    void addToHead(int data);

    // Add a node with data to the tail of the list
    void addToTail(int data);

    // Remove a node with the given data
    void remove(int data);

    // Remove the head node
    void removeFromHead();

    // Remove the tail node
    void removeFromTail();

    // Method to retrieve a node with specific data
    bool retrieve(int data, Node*& outputNodePointer);

    // Search for a node with the given data
    bool search(int data);

    // Traverse the list and apply a function to each node's data
    void traverse();

    // Display the contents of the list
    void display();
};