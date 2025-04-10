#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* link;
};

struct Node *front = NULL, *rear = NULL;

// Insert an element into circular queue
void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->link = NULL;

    if (front == NULL) {
        front = rear = newNode;
        rear->link = front;
    } else {
        rear->link = newNode;
        rear = newNode;
        rear->link = front;
    }

    printf("Inserted: %d\n", value);
}

// Delete an element from circular queue
void dequeue() {
    if (front == NULL) {
        printf("Queue is empty!\n");
        return;
    }

    struct Node* temp = front;

    if (front == rear) {
        // Only one element
        front = rear = NULL;
    } else {
        front = front->link;
        rear->link = front;
    }

    printf("Deleted: %d\n", temp->data);
    free(temp);
}

// Display the elements of the circular queue
void display() {
    if (front == NULL) {
        printf("Queue is empty!\n");
        return;
    }

    struct Node* temp = front;
    printf("Queue elements: ");
    do {
        printf("%d ", temp->data);
        temp = temp->link;
    } while (temp != front);
    printf("\n");
}

// Main function
int main() {
    int choice, value;

    do {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            enqueue(value);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
