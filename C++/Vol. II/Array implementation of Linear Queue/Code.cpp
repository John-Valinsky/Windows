//Q. Array implementation of Linear Queue.

#include <iostream>
using namespace std;

#define MAX 5  // Maximum size of the queue

class Queue {
    int arr[MAX];  // Array to hold queue elements
    int front, rear;  // Indices for the front and rear of the queue

public:
    // Constructor to initialize the queue
    Queue() {
        front = -1;
        rear = -1;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Function to check if the queue is full
    bool isFull() {
        return rear == MAX - 1;
    }

   // Function to add an element to the queue (enqueue)
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot enqueue " << value << endl;
        } else {
            if (front == -1) {
                front = 0;  // Set front to 0 when the first element is enqueued
            }
            arr[++rear] = value;  // Insert the element at the rear and increment rear
            cout << value << " enqueued to queue." << endl;
        }
    }

    // Function to remove an element from the queue (dequeue)
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! No element to dequeue." << endl;
        } else {
            cout << arr[front] << " dequeued from queue." << endl;
            // Shift all elements to the left
            for (int i = 0; i < rear; i++) {
                arr[i] = arr[i + 1];
            }
            rear--;  // Decrease the rear index
            if (rear == -1) {
                front = -1;  // If the queue becomes empty, reset front and rear
            }
        }
    }
