#pragma once
//creating a Node class with info and next pointer
class Node
{
    public:
        int info; //store data
        int *next;  //store address of the other node
};

//creating a LinkedList class with head and tail pointer
class LinkedList
{
private:
    Node *HEAD; //points to the first node
    Node *TAIL;  //points to the last node

public:
    //calling a default constructor
    LinkedList();

    //declaring all pure virtual functions
    bool isEmpty();
    bool isFull();
    void add(Node *pred, int data);
    void addToHead(int data);
    void addToTail(int data);
    void remove(int data);
    void removeFromHead();
    void removeFromTail();
    bool search(int data);
    bool retrieve(int data);
    void traverse();
    void display();
    //a deault destructor
    ~LinkedList();
};