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

         Node* newNode = new Node(row, col, value);

        // Insert the new node at the beginning of the linked list
        if (head == nullptr) {
            head = newNode;
        } else {

          Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Inserted value " << value << " at position (" << row << ", " << col << ")." << endl;
    }

    // Function to display the sparse matrix
    void display(int rows, int cols) {
        if (head == nullptr) {
            cout << "Sparse matrix is empty." << endl;
            return;
        }

         // Initialize a matrix with all values set to 0
        int matrix[rows][cols] = {0};

        // Traverse the linked list and fill the matrix with non-zero values
        Node* temp = head;
        while (temp != nullptr) {
            matrix[temp->row][temp->col] = temp->value;
            temp = temp->next;
        }
        // Display the matrix
        cout << "Sparse Matrix Representation:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
