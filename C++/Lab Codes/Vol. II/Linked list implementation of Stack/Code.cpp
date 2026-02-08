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

    // Function to peek the top element of the stack
    void peek() {
        if (top == nullptr) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Top element is " << top->data << endl;
    }

     // Function to check if the stack is empty
    bool isEmpty() {
        return top == nullptr; // If top is null, the stack is empty
    }

    // Destructor to free the allocated memory
    ~Stack() {
        while (top != nullptr) {
            Node* temp = top;
            top = top->next;  // Move to the next node
            delete temp;      // Free memory
        }
        cout << "Stack memory freed." << endl;
    }
};

    int main() {
    Stack stack;
    int choice, value;

    while (true) {
        cout << "\n--- Stack Menu ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Check if Stack is Empty" << endl;
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
                stack.peek();
                break;
            case 4:
                if (stack.isEmpty()) {
                    cout << "Stack is empty." << endl;
                } else {
                    cout << "Stack is not empty." << endl;
                }
                break;
            case 5:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }
    }

    return 0;
}
