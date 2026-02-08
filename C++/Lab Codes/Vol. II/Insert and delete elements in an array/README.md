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



# Deletion
==========
If deleting the head: reassign head to the next node.

Else: Traverse to the previous node and bypass the node to be deleted.



# Search
========
Traverse the list to find a node with the target value.



# Reverse
=========
Reverses all node links such that the last becomes the head.



# Sample Output
===============

--- Menu ---
1. Insert at the end
2. Delete a node
3. Search for an element
4. Reverse the list
5. Display list
6. Exit

Enter your choice: 1
Enter value to insert: 50
50 inserted at the end of the list.

Enter your choice: 1
Enter value to insert: 100
100 inserted at the end of the list.

Enter your choice: 5
List elements: 50 100

Enter your choice: 3

Enter value to search: 100
100 found in the list.

Enter your choice: 4
List reversed.

Enter your choice: 5
List elements: 100 50

Enter your choice: 6
Exiting program...
Memory freed.



Time Complexity
===============
Operation	Time Complexity
Insert at end	O(n)
Delete a node	O(n)
Search	O(n)
Reverse list	O(n)
Display	O(n)

Memory Management
The program includes a destructor to automatically free up memory by deleting each node when the list goes out of scope.
