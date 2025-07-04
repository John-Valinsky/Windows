Binary Search Tree (BST) in C++

Q. Write a C++ program to implement a Binary Search Tree (BST) with operations such as insertion, searching, deletion, and inorder traversal.



# Program Description
=====================
This C++ program demonstrates a Binary Search Tree (BST) using a class-based approach. The program allows users to:

Insert new nodes

Search for values

Delete nodes

Traverse the tree in inorder (which results in sorted order)



# BST Concepts
==============
A Binary Search Tree is a binary tree where each node follows the rule:

Left child < Root < Right child
This property makes search, insert, and delete operations efficient (on average: O(log n)).


# Features Implemented
======================
Operation	Description
Insert	Adds a node to the BST maintaining order.
Search	Finds a node with a specific value.
Delete	Removes a node and restructures the BST accordingly.
Inorder	Prints tree elements in sorted (ascending) order.



# Core Functions & Logic
========================
Node Structure

struct Node {
    int data;
    Node* left;
    Node* right;
};



# Insertion
===========
If value < node's data → go to left subtree

If value > node's data → go to right subtree

Recursively insert the node



# Searching
===========
Traverse left or right based on comparison

Return pointer if value found, or nullptr if not found



# Deletion
==========
Three cases handled:

Leaf node (no children): delete directly.

One child: replace node with its child.

Two children: replace node with inorder successor (minimum in right subtree).



# Inorder Traversal
===================
Recursive:

inorder(left);
print(data);
inorder(right);



# Sample Output
===============

--- Menu ---
1. Insert a node
2. Search for a node
3. Display Inorder traversal
4. Delete a node
5. Exit

Enter your choice: 1
Enter value to insert: 50
Enter your choice: 1
Enter value to insert: 30
Enter your choice: 1
Enter value to insert: 70
Enter your choice: 3

Inorder traversal: 30 50 70

Enter your choice: 2
Enter value to search: 70
70 found in the tree.
Enter your choice: 4
Enter value to delete: 30
30 deleted from the tree.
Enter your choice: 3

Inorder traversal: 50 70