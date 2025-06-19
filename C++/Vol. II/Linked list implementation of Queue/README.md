Linked List Implementation of Queue in C++

Q. Write a C++ program to implement a Queue using a Linked List and perform operations like:

Enqueue (Insert)

Dequeue (Delete)

Peek (Front element)

Check if the queue is empty



# Program Description
=====================
This program demonstrates a Queue data structure using Linked List in C++. Unlike an array-based queue with fixed size, a linked list allows dynamic memory allocation, making the queue grow/shrink as needed.



# Key Features
==============
Operation	Description
Enqueue	Adds a new element at the rear of the queue.
Dequeue	Removes an element from the front of the queue.
Peek	Returns the element at the front without removing it.
isEmpty	Checks if the queue is currently empty.



# Node Structure
================
Each node in the linked list holds:

An integer data

A pointer to the next node

struct Node {
    int data;
    Node* next;
};
