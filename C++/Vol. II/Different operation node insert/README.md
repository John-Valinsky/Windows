Doubly Linked List in C++

Q. Write a program to implement a doubly linked list and perform operations such as insertion at the front, insertion at the end, deletion of a node, and displaying the list.



# Program Description
=====================
This C++ program implements a Doubly Linked List (DLL) where each node points both forward and backward, making insertions and deletions efficient in both directions.

Users can:

Insert nodes at the front or end.

Delete any node by value.

Display the full list.



# Operations Supported
======================
Operation	Description
Insert at Front	Adds a new node at the beginning of the list.
Insert at End	Adds a new node at the end of the list.
Delete Node	Removes the first node that contains the given value.
Display List	Prints all elements of the list from head to tail.



# Logic Explanation
===================
Structure of Node
cpp
Copy
Edit
struct Node {
    int data;
    Node* next;
    Node* prev;
};

Each node contains:

data: the value stored

next: pointer to the next node

prev: pointer to the previous node



# Insertion (Front and End)
===========================
At front: new node becomes the head, and its next points to the old head.

At end: traverse to last node and insert new node after it.



# Deletion
==========
Find node containing the value.

Update the next and prev links of neighboring nodes.

Handle special cases like deleting the head.



# Sample Output
===============

--- Menu ---
1. Insert at the front
2. Insert at the end
3. Delete a node
4. Display list
5. Exit
