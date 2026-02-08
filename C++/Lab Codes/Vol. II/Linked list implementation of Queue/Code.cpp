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

int main() {
    Queue queue;
    int choice, value;

    while (true) {
        cout << "\n--- Queue Menu ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Check if Queue is Empty" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                queue.enqueue(value);
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                queue.peek();
                break;
            case 4:
                if (queue.isEmpty()) {
                    cout << "Queue is empty." << endl;
                } else {
                    cout << "Queue is not empty." << endl;
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

