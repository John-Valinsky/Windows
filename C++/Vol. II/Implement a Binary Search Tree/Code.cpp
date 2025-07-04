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

                     // Node with two children: Get the inorder successor (smallest in the right subtree)
            Node* temp = minValueNode(node->right);

            // Copy the inorder successor's content to this node
            node->data = temp->data;

            // Delete the inorder successor
            node->right = deleteNode(node->right, temp->data);
        }
        return node;
    }

    public:
    // Constructor to initialize the tree
    BST() {
        root = nullptr;
    }

    // Function to insert a value in the BST
    void insert(int value) {
        root = insert(root, value);
    }

    // Function to search for a value in the BST
    bool search(int value) {
        Node* result = search(root, value);
        return result != nullptr;
    }

    // Function to display the inorder traversal of the tree
    void inorder() {
        inorder(root);
        cout << endl;
    }

 // Function to delete a node in the BST
    void deleteNode(int value) {
        root = deleteNode(root, value);
    }
};

    int main() {
    BST tree;
    int choice, value;

    while (true) {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Insert a node" << endl;
        cout << "2. Search for a node" << endl;
        cout << "3. Display Inorder traversal" << endl;
        cout << "4. Delete a node" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                tree.insert(value);
                break;
            case 2:
                cout << "Enter value to search: ";
                cin >> value;
                if (tree.search(value))
                    cout << value << " found in the tree." << endl;
                else
                    cout << value << " not found in the tree." << endl;
                break;
            case 3:
                cout << "Inorder traversal: ";
                tree.inorder();
                break;
            case 4:
                cout << "Enter value to delete: ";
                cin >> value;
                tree.deleteNode(value);
                cout << value << " deleted from the tree." << endl;
                break;
            case 5:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
