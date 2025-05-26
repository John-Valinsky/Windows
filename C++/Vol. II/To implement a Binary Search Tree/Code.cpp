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

class BST {
private:
    Node* root;  // Root of the binary search tree

    // Helper function for insertion
    Node* insert(Node* node, int value) {
        // If the tree is empty, return a new node
        if (node == nullptr)
            return new Node(value);

        // Otherwise, recur down the tree
        if (value < node->data)
            node->left = insert(node->left, value);  // Insert in the left subtree
        else if (value > node->data)
            node->right = insert(node->right, value);  // Insert in the right subtree

        // Return the (unchanged) node pointer
        return node;
    }
