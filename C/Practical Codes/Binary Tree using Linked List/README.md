🌲 Binary Search Tree in C – Insert and Delete Operations
This C program allows the user to create a Binary Search Tree (BST) using dynamically allocated nodes and perform the key operations:

Insert new elements

Delete specific elements

Display the current structure of the BST

🧠 Features:
------------
Uses a Linked List representation for each node

Dynamic memory allocation (malloc)

Proper BST deletion handling:

Node with no children

Node with one child

Node with two children (using inorder successor)

Neat rotated tree-like display

Fully menu-driven interface

🛠️ Menu Options
---------------
mathematica

 Binary Search Tree Menu
 -------------------------
 1. Insert
 2. Delete
 3. Display
 4. Exit

🔄 Operations Breakdown

✅ Insertion

New elements are inserted according to BST rules:
-------------------------------------------------
If smaller, go left

If greater, go right

❌ Deletion:
------------
Node with no child → just remove it

Node with one child → replace with child

Node with two children → replace with inorder successor (leftmost node in right subtree)

