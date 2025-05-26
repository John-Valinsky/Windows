//Q. To represent a Sparse Matrix.

#include <iostream>
using namespace std;

// Structure for representing a non-zero element in a sparse matrix
struct Node {
    int row, col, value;   // Row index, Column index, and the value
    Node* next;            // Pointer to the next node in the linked list

    // Constructor to initialize the node
    Node(int r, int c, int val) {
        row = r;
        col = c;
        value = val;
        next = nullptr;
    }
};

class SparseMatrix {
private:
    Node* head;  // Head of the linked list to store non-zero elements

public:
    // Constructor to initialize the linked list
    SparseMatrix() {
        head = nullptr;
    }

    // Function to insert a non-zero element into the sparse matrix
    void insert(int row, int col, int value) {
        if (value == 0) {
            return;  // Do not store zero values
        }
