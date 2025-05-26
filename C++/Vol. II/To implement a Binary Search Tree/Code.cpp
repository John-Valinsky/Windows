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

    // Helper function for searching a node with a given value
    Node* search(Node* node, int value) {
        // Base case: root is null or value is present at the root
        if (node == nullptr || node->data == value)
            return node;

        // Value is greater than root's data, so search in the right subtree
        if (value > node->data)
            return search(node->right, value);

        // Value is smaller, so search in the left subtree
        return search(node->left, value);
    }

    // Helper function to do inorder traversal of the tree
    void inorder(Node* node) {
        if (node == nullptr)
            return;

        inorder(node->left);  // Traverse the left subtree
        cout << node->data << " ";  // Visit the node
        inorder(node->right);  // Traverse the right subtree
    }

    // Helper function to find the node with the minimum value
    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr)
            current = current->left;  // Find the leftmost leaf
        return current;
    }

    // Helper function to delete a node
    Node* deleteNode(Node* node, int value) {
        // Base case: If the tree is empty
        if (node == nullptr)
            return node;

              // Recur down the tree
        if (value < node->data)
            node->left = deleteNode(node->left, value);  // If value is smaller, it is in the left subtree
        else if (value > node->data)
            node->right = deleteNode(node->right, value);  // If value is greater, it is in the right subtree
        else {
            // This is the node to be deleted

            // Node with only one child or no child
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
