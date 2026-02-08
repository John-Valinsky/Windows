//Q. Array implementation of Circular Queue.


#include <iostream>
using namespace std;

#define MAX 5  // Maximum size of the circular queue

class CircularQueue {
    int arr[MAX];   // Array to hold queue elements
    int front, rear;  // Indices for the front and rear of the queue

public:
    // Constructor to initialize the queue
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Function to check if the queue is full
    bool isFull() {
        return (rear + 1) % MAX == front;
    }

    // Function to add an element to the queue (enqueue)
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot enqueue " << value << endl;
        } else {
            if (front == -1) {
                front = 0;  // Set front to 0 when the first element is enqueued
            }
            rear = (rear + 1) % MAX;  // Circular increment of rear index
            arr[rear] = value;  // Insert the element at the rear
            cout << value << " enqueued to queue." << endl;
        }
    }

    // Function to remove an element from the queue (dequeue)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! No element to dequeue." << endl;
        } else {
            cout << arr[front] << " dequeued from queue." << endl;
            if (front == rear) {
                front = rear = -1;  // Reset when the queue becomes empty
            } else {
                front = (front + 1) % MAX;  // Circular increment of front index
            }
        }
    }

    // Function to return the front element of the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        } else {
            return arr[front];
        }


    // Function to display the queue elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            int i = front;
            while (i != rear) {
                cout << arr[i] << " ";
                i = (i + 1) % MAX;  // Circular increment of index
            }
            cout << arr[rear] << endl;  // Print the last element
        }
    }
};


int main() {
    CircularQueue q;
    int choice, value;

    while (true) {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display Queue" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

         switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                value = q.peek();
                if (value != -1) {
                    cout << "Front element is: " << value << endl;
                }
                break;
            case 4:
                q.display();
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
