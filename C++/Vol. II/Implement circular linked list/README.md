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

If it's the only node, delete it and set head to nullptr.

Else, update the last node to point to the new head.

If deleting a non-head node:

Traverse to find the node.

Remove it by updating the previous node’s next.



# Delete a Node
===============
If list is empty, exit.

If deleting the head:



# Display
=========
Start from head.

Print data in each node while traversing.

Stop when reaching head again.



# Sample Output
===============

--- Menu ---
1. Insert at the end
2. Delete a node
3. Display list
4. Exit


Enter your choice: 1
Enter value to insert: 10

10 inserted at the end of the list.

Enter your choice: 1
Enter value to insert: 20

20 inserted at the end of the list.

Enter your choice: 3
Circular Linked List elements: 10 20
Enter your choice: 2
Enter value to delete: 10

10 deleted from the list.

Enter your choice: 3
Circular Linked List elements: 20

Enter your choice: 4
Exiting program...
Memory freed.
