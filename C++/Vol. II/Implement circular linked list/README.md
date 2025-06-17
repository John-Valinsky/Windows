Circular Linked List in C++



Q. Write a C++ program to implement a Circular Linked List and perform various operations such as node insertion and deletion.



# Program Description
=====================
This C++ program implements a Circular Linked List (CLL) using classes. It allows users to:

Insert a node at the end

Delete a specific node by value

Display the list contents

A circular linked list is a variation of a linked list in which the last node points back to the first node, forming a circle.



# Features Implemented
======================
Operation	Description
Insert	Adds a node at the end of the list.
Delete	Removes a node by value.
Display	Shows all elements in the circular list.



# Key Concepts
==============
Node Structure

struct Node {
    int data;
    Node* next;
};



# Circular Nature
=================
In an empty list, the inserted node points to itself.

In non-empty lists, the last node always points back to head.



# Core Operations Explained
===========================
Insert at End

If the list is empty:

New node becomes head.

Its next pointer points to itself.

If list is non-empty:

Traverse to the last node (next == head)

Insert new node and update last node’s next.
