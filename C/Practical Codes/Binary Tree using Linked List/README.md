# Binary Search Tree in C – Insert and Delete Operations

This C program allows the user to create a Binary Search Tree (BST) using dynamically allocated nodes and perform the key operations:

* Insert new elements

* Delete specific elements

* Display the current structure of the BST


# Features
----------
* Uses a Linked List representation for each node

* Dynamic memory allocation (malloc)

* Proper BST deletion handling:

* Node with no children

* Node with one child

* Node with two children (using inorder successor)

* Neat rotated tree-like display

* Fully menu-driven interface


# Menu Options
--------------

 Binary Search Tree Menu
 -------------------------
 1. Insert
 2. Delete
 3. Display
 4. Exit


# Operations Breakdown
----------------------
* Insertion

* New elements are inserted according to BST rules

* If smaller, go left

* If greater, go right


# Deletion
----------
* Node with no child → just remove it

* Node with one child → replace with child

* Node with two children → replace with inorder successor (leftmost node in right subtree)


# Display
---------
* Custom display function to print the BST sideways, mimicking tree structure visually


# Sample Insertion Input
------------------------
Input nodes: 50, 30, 70, 20, 40, 60, 80


# Example Output (Display)
--------------------------

         80
      70
         60
   50
      40
   30
      20
	  	  

# How to Compile and Run
------------------------
* On Linux / macOS

	gcc bst_insert_delete.c -o bst

	./bst


* On Windows (Turbo C++ / Dev C++)

	Paste the code into a .c file in your IDE

	Compile and run the program


# Functions Used
----------------
* create(int item) – Insert node into BST

* deletion(NODE *p, int item) – Delete a node using recursive logic

* getInSuccessor(NODE *p) – Helper to find minimum in right subtree

* disp(NODE *ptr, int level) – Tree-structured display of nodes

