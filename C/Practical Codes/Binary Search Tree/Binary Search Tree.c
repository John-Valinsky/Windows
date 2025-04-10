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

// Display BST sideways
void disp(NODE *ptr, int level) {
    int i;
    if (ptr != NULL) {
        disp(ptr->right, level + 1);
        for (i = 0; i < level; i++)
            printf("   ");
        printf("%2d\n", ptr->info);
        disp(ptr->left, level + 1);
    }
}

// Create a node and insert into BST
void create(int item) {
    NODE *newnode = (NODE *)malloc(sizeof(NODE));
    NODE *currptr, *ptr;

    newnode->info = item;
    newnode->left = newnode->right = NULL;

    if (root == NULL) {
        root = newnode;
    } else {
        currptr = root;
        while (currptr != NULL) {
            ptr = currptr;
            currptr = (item > currptr->info) ? currptr->right : currptr->left;
        }
        if (item < ptr->info)
            ptr->left = newnode;
        else
            ptr->right = newnode;
    }
}

// Inorder traversal
void in_order(NODE *ptr) {
    if (ptr) {
        in_order(ptr->left);
        printf("%d ", ptr->info);
        in_order(ptr->right);
    }
}

// Preorder traversal
void pre_order(NODE *ptr) {
    if (ptr) {
        printf("%d ", ptr->info);
        pre_order(ptr->left);
        pre_order(ptr->right);
    }
}

// Postorder traversal
void post_order(NODE *ptr) {
    if (ptr) {
        post_order(ptr->left);
        post_order(ptr->right);
        printf("%d ", ptr->info);
    }
}

int main() {
    int item, ch, n, i;

    while (1) {
        printf("\n==== Binary Search Tree Menu ====\n");
        printf("1. Create Tree\n");
        printf("2. Display Tree\n");
        printf("3. Preorder Traversal\n");
        printf("4. Inorder Traversal\n");
        printf("5. Postorder Traversal\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("\nEnter number of nodes: ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("Enter data for node %d: ", i + 1);
                    scanf("%d", &item);
                    create(item);
                }
                break;

            case 2:
                printf("\nBinary Tree Structure:\n\n");
                disp(root, 1);
                break;

            case 3:
                printf("\nPreorder Traversal: ");
                pre_order(root);
                break;

            case 4:
                printf("\nInorder Traversal: ");
                in_order(root);
                break;

            case 5:
                printf("\nPostorder Traversal: ");
                post_order(root);
                break;

            case 6:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.");
        }

        printf("\n\nPress any key to continue...");
        getch();
        CLEAR();
    }

    return 0;
}
