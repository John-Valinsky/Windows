Linear Linked List in C++

Q. Write a C++ program to implement a Linear Linked List and perform various operations such as:

Node Insertion

Node Deletion

Searching for an Item

Reversing the List



Program Description
===================
This C++ program demonstrates the implementation of a Linear (Singly) Linked List, which supports the following key functionalities:

Functionality	Description
Insert at end	Adds a node to the end of the list.
Delete a node	Removes the first occurrence of a node by value.
Search for an element	Checks if a specific value exists in the list.
Reverse the list	Reverses the entire linked list.
Display list	Prints the list from start to end.



# Key Concepts
==============
Node Structure
Each node contains:

data: the value stored in the node

next: pointer to the next node in the list

struct Node {
    int data;
    Node* next;
};



# Insertion at End
==================
If list is empty: the new node becomes the head.

Else: Traverse to the last node and attach the new node.
