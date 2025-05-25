//Q. Linked list implementation of Stack.

#include <iostream>
using namespace std;

// Definition of the Node structure
struct Node {
    int data;   // Data to store
    Node* next; // Pointer to the next node

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top; // Pointer to the top of the stack

public:
    // Constructor to initialize the stack
    Stack() {
        top = nullptr; // Stack is initially empty
    }

     // Function to push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;  // New node points to the current top
        top = newNode;        // Update the top pointer to the new node
        cout << value << " pushed onto the stack." << endl;
    }

    // Function to pop an element from the stack
    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty. Cannot pop!" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;  // Move the top pointer to the next node
        cout << temp->data << " popped from the stack." << endl;
        delete temp;  // Free the memory of the popped node
    }
