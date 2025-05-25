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
