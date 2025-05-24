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

     // Function to insert a node at the end of the list
    void insertEnd(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;  // Traverse to the last node
            }
            temp->next = newNode;   // Last node's next points to the new node
            newNode->prev = temp;   // New node's prev points to the last node
        }
        cout << value << " inserted at the end of the list." << endl;
    }

    // Function to delete a node from the list
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete!" << endl;
            return;
        }

        Node* temp = head;

        // If the node to be deleted is the head node
        if (head->data == value) {
            if (head->next == nullptr) {  // Only one node in the list
                delete head;
                head = nullptr;
            } else {
                head = head->next;    // Move head to the next node
                head->prev = nullptr; // Set the new head's prev to null
                delete temp;
            }
            cout << value << " deleted from the list." << endl;
            return;
        }

        // Traverse the list to find the node to delete
        while (temp != nullptr && temp->data != value) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Value " << value << " not found in the list." << endl;
            return;
        }

        // If the node is found, update the pointers
        if (temp->next != nullptr) {
            temp->next->prev = temp->prev;  // Node's next prev points to its previous node
        }
        if (temp->prev != nullptr) {
            temp->prev->next = temp->next;  // Node's prev next points to its next node
        }

        delete temp;  // Free memory
        cout << value << " deleted from the list." << endl;
    }

    // Function to display the doubly linked list
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        cout << "Doubly Linked List elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;  // Move to next node
        }
        cout << endl;
    }

    // Destructor to clean up memory
    ~DoublyLinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* nodeToDelete = temp;
            temp = temp->next;
            delete nodeToDelete;
        }
        cout << "Memory freed." << endl;
    }
};

int main() {
    DoublyLinkedList list;
    int choice, value;

    while (true) {
        cout << "\n--- Menu ---" << endl;
        cout << "1. Insert at the front" << endl;
        cout << "2. Insert at the end" << endl;
        cout << "3. Delete a node" << endl;
        cout << "4. Display list" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at the front: ";
                cin >> value;
                list.insertFront(value);
                break;
            case 2:
                cout << "Enter value to insert at the end: ";
                cin >> value;
                list.insertEnd(value);
                break;
            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                list.deleteNode(value);
                break;
            case 4:
                list.display();
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
