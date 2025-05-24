//Q. To implement circular linked list and perform different operation such as node insert and delete.

#include <iostream>
using namespace std;

// Definition of the node structure
struct Node {
    int data;       // Data to store
    Node* next;     // Pointer to the next node

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* head;   // Head of the circular linked list

public:
    // Constructor to initialize the list
    CircularLinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the end of the list
    void insertEnd(int value) {
        Node* newNode = new Node(value);

        // If the list is empty, the new node points to itself
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;  // Points to itself
            cout << value << " inserted at the end of the list." << endl;
            return;
        }
