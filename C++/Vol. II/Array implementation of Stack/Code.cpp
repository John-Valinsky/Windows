//Q. Array implementation of Stack.

#include <iostream>
using namespace std;

#define MAX 100  // Maximum size of the stack

class Stack {
    int arr[MAX];  // Array to hold stack elements
    int top;       // Index of the top element in the stack


public:
    // Constructor to initialize the stack
    Stack() {
        top = -1;  // Stack is empty initially
    }

    // Function to check if the stack is full
    bool isFull() {
        return top == MAX - 1;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to push an element into the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            arr[++top] = value;  // Increment top and insert value
            cout << value << " pushed to stack." << endl;
        }
    }
    // Function to pop an element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! No element to pop." << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;  // Pop the top element
        }
    }

    // Function to return the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        } else {
            return arr[top];  // Return the top element
        }
    }

    // Function to display the stack elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
