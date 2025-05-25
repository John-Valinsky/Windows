//Q. Linked list implementation of Queue.

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

class Queue {
private:
    Node* front; // Pointer to the front of the queue
    Node* rear;  // Pointer to the rear of the queue

public:
    // Constructor to initialize the queue
    Queue() {
        front = rear = nullptr; // Initially the queue is empty
    }

    // Function to enqueue an element (add to the rear)
    void enqueue(int value) {
        Node* newNode = new Node(value);

        // If the queue is empty, both front and rear will point to the new node
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;  // Add new node at the end of the queue
            rear = newNode;        // Update rear to the new node
        }
        cout << value << " enqueued to the queue." << endl;
    }


