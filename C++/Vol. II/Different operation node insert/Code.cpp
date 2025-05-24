//Q. To implement double linked list and perform different operation such as node insert and delete.

#include <iostream>
using namespace std;

// Definition of the node structure
struct Node {
    int data;       // Data to store
    Node* next;     // Pointer to the next node
    Node* prev;     // Pointer to the previous node

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;   // Head of the doubly linked list

public:
    // Constructor to initialize the list
    DoublyLinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the beginning of the list
    void insertFront(int value) {
        Node* newNode = new Node(value);

        // If the list is empty, the new node becomes the head
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;  // New node's next points to the current head
            head->prev = newNode;  // Current head's prev points to the new node
            head = newNode;        // New node becomes the head
        }
        cout << value << " inserted at the front of the list." << endl;
    }
