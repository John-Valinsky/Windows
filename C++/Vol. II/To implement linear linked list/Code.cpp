//Q. To implement linear linked list and perform different operation such as node insert and delete, search of an item, reverse the list.

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

class LinkedList {
private:
    Node* head;   // Head of the linked list

public:
    // Constructor to initialize the list
    LinkedList() {
        head = nullptr;
    }
