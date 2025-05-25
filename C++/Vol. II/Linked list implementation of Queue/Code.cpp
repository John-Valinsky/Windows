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


  // Function to dequeue an element (remove from the front)
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty. Cannot dequeue!" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;  // Move the front pointer to the next node

        if (front == nullptr) {  // If the queue becomes empty, rear should be null as well
            rear = nullptr;
        }

        cout << temp->data << " dequeued from the queue." << endl;
        delete temp;  // Free the memory of the dequeued node
    }

    // Function to peek the front element of the queue
    void peek() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Front element is " << front->data << endl;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == nullptr; // If front is null, the queue is empty
    }

    // Destructor to free the memory
    ~Queue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;  // Move to the next node
            delete temp;          // Free memory
        }
        cout << "Queue memory freed." << endl;
    }
};

