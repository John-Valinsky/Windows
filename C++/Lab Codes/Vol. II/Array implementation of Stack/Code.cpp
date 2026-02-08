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


int main() {
    Stack stack;
    int choice, value;

    while (true) {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display Stack" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                value = stack.peek();
                if (value != -1) {
                    cout << "Top element is: " << value << endl;
                }
                break;
            case 4:
                stack.display();
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
