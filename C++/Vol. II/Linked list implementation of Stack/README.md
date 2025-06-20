Linked List Implementation of Stack in C++

Q. Write a C++ program to implement a Stack using Linked List and perform the following operations:

Push

Pop

Peek (Top element)

Check if the stack is empty



# Description
=============
This program implements a stack (LIFO: Last-In-First-Out) using a singly linked list. It performs typical stack operations dynamically without a fixed size, which makes it memory-efficient and flexible.



# Key Features
==============
Operation	Description
Push	Inserts an element at the top of the stack
Pop	Removes the top element of the stack
Peek	Returns the current top element without removing it
isEmpty	Checks whether the stack is empty



# Node Structure
================
Each node contains:

An integer data

A pointer next pointing to the next node in the stack

struct Node {
    int data;
    Node* next;
};



# Sample Output
===============
--- Stack Menu ---
1. Push
2. Pop
3. Peek
4. Check if Stack is Empty
5. Exit

Enter your choice: 1
Enter value to push: 40
40 pushed onto the stack.

Enter your choice: 1
Enter value to push: 70
70 pushed onto the stack.

