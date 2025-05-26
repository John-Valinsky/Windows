//Q. To implement a Binary Search Tree.

#include <iostream>
using namespace std;

// Definition of the structure of a node in BST
struct Node {
    int data;       // Data to store in the node
    Node* left;     // Pointer to the left child
    Node* right;    // Pointer to the right child

    // Constructor to initialize the node
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

