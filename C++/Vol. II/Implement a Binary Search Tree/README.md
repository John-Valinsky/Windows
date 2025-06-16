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
