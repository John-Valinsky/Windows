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
