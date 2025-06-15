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
