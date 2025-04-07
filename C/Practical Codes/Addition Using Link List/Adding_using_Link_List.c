#include <stdio.h>
#include <stdlib.h>

#define MAXSTK 5

int TOP = -1;
int S[MAXSTK];

// Function to push an element into the stack
void push() {
    int item;
    if (TOP == MAXSTK - 1) {
        printf("\nStack Overflow\n");
    } else {
        printf("Enter the item to push: ");
        scanf("%d", &item);
        S[++TOP] = item;
        printf("Item pushed: %d\n", item);
    }
}

// Function to pop an element from the stack
void pop() {
    if (TOP == -1) {
        printf("\nStack Underflow\n");
    } else {
        printf("Popped item: %d\n", S[TOP--]);
    }
}

// Function to display the stack
void display() {
    if (TOP == -1) {
        printf("\nStack is empty\n");
    } else {
        printf("\nStack elements (Top to Bottom):\n");
        for (int i = TOP; i >= 0; i--) {
            printf("=> %d\n", S[i]);
        }
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n===============================\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Quit\n");
        printf("===============================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Wrong Choice!\n");
        }
    }

    return 0;
}
