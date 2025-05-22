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

    // Function to insert a node at the end of the list
    void insertEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;  // If list is empty, make new node as head
            cout << value << " inserted at the end of the list." << endl;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;  // Traverse to the last node
        }

        temp->next = newNode;  // Insert new node at the end
        cout << value << " inserted at the end of the list." << endl;
    }

        // Function to delete a node from the list
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete!" << endl;
            return;
        }

        // If the node to be deleted is the head node
        if (head->data == value) {
            Node* temp = head;
            head = head->next;  // Move the head pointer to the next node
            delete temp;  // Free memory of the old head
            cout << value << " deleted from the list." << endl;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;  // Traverse to the node before the one to be deleted
        }

        if (temp->next == nullptr) {
            cout << "Value " << value << " not found in the list." << endl;
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;  // Bypass the node to delete
        delete nodeToDelete;  // Free memory
        cout << value << " deleted from the list." << endl;
    }

    // Function to search for an element in the list
    bool search(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) {
                return true;  // Value found
            }
            temp = temp->next;  // Move to next node
        }
        return false;  // Value not found
    }
