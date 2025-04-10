#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #include <conio.h>
    #define CLEAR() system("cls")
#else
    #include <unistd.h>
    #include <termios.h>
    void getch() {
        struct termios oldt, newt;
        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;
        newt.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);
        getchar();
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    }
    #define CLEAR() system("clear")
#endif

struct node {
    int info;
    struct node *left;
    struct node *right;
};

typedef struct node NODE;
NODE *root = NULL;

// Function to display tree structure sideways
void disp(NODE *ptr, int level) {
    if (ptr != NULL) {
        disp(ptr->right, level + 1);
        for (int i = 0; i < level; i++)
            printf("   ");
        printf("%2d\n", ptr->info);
        disp(ptr->left, level + 1);
    }
}

// Function to find inorder successor
NODE *getInSuccessor(NODE *ptr) {
    while (ptr && ptr->left != NULL)
        ptr = ptr->left;
    return ptr;
}

// Function to delete a node from the BST
NODE *deletion(NODE *p, int item) {
    if (!p) {
        printf("\nUnable to delete. No such key exists.\n");
        return p;
    }

    if (item < p->info)
        p->left = deletion(p->left, item);
    else if (item > p->info)
        p->right = deletion(p->right, item);
    else {
        // Node found
        if (p->left == NULL) {
            NODE *temp = p->right;
            free(p);
            return temp;
        } else if (p->right == NULL) {
            NODE *temp = p->left;
            free(p);
            return temp;
        } else {
            // Node with two children
            NODE *temp = getInSuccessor(p->right);
            p->info = temp->info;
            p->right = deletion(p->right, temp->info);
        }
    }
    return p;
}

// Insert function
void create(int item) {
    NODE *newnode = (NODE *)malloc(sizeof(NODE));
    newnode->info = item;
    newnode->left = newnode->right = NULL;

    if (root == NULL) {
        root = newnode;
        return;
    }

    NODE *currptr = root, *ptr;
    while (currptr != NULL) {
        ptr = currptr;
        currptr = (item > currptr->info) ? currptr->right : currptr->left;
    }

    if (item < ptr->info)
        ptr->left = newnode;
    else
        ptr->right = newnode;
}

// Main function
int main() {
    int item, ch, n;

    while (1) {
        CLEAR();
        printf("\n==== Binary Search Tree Menu ====\n");
        printf("1. Insert Nodes\n");
        printf("2. Delete Node\n");
        printf("3. Display Tree\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("\nEnter the number of nodes: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Enter data for node %d: ", i + 1);
                    scanf("%d", &item);
                    create(item);
                }
                break;

            case 2:
                printf("\nEnter the item to be deleted: ");
                scanf("%d", &item);
                root = deletion(root, item);
                printf("\nUpdated Tree:\n\n");
                disp(root, 1);
                break;

            case 3:
                printf("\nBinary Tree Structure:\n\n");
                disp(root, 1);
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.");
        }

        printf("\n\nPress any key to continue...");
        getch();
    }

    return 0;
}
