🌳 Binary Search Tree (BST) in C with Traversals
This C program implements a Binary Search Tree (BST) for a set of user-defined elements. It allows you to:

🔹 Create a BST

🔹 Display the BST in a tree-like structure

🔹 Perform Inorder, Preorder, and Postorder traversals

📌 Sample Input
For example, inserting: {2, 5, 1, 3, 9, 0, 6}
The BST is built using the standard insertion logic:

Values smaller than the node go to the left

Values greater go to the right

🧠 Features
Dynamically creates nodes using malloc()

Uses recursion for tree traversals

Menu-driven user interface

Outputs traversal results directly

📋 Menu Options
markdown
Copy
Edit

 Binary Search Tree Menu
 ------------------------
 1. Create
 2. Display (tree structure)
 3. Preorder Traversal
 4. Inorder Traversal
 5. Postorder Traversal
 6. Exit

🔧 Functions Implemented
-------------------------
create(item) – inserts a node into the BST

disp() – prints the tree in rotated form

in_order() – left → root → right

pre_order() – root → left → right

post_order() – left → right → root

🚀 How to Compile and Run

💻 On Linux / macOS (GCC)
-------------------------
gcc bst_traversal.c -o bst

./bst

🪟 On Windows (Turbo C++ / Dev C++)
-----------------------------------
Open and paste the code into a .c file

Compile and run the program
