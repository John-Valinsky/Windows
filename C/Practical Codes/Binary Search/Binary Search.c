// Given {4,7,3,2,1,7,9,0, find the location of 7 using Binary search and also display its first occurrence. 

#include <stdio.h>

// Function to perform Binary Search and return the first occurrence
int binsearch_first(int A[], int n, int key) {
    int first = 0, last = n - 1, mid;
    int result = -1;

    while (first <= last) {
        mid = (first + last) / 2;

        if (key == A[mid]) {
            result = mid;       // Possible first occurrence
            last = mid - 1;     // Continue searching in the left half
        }
        else if (key < A[mid]) {
            last = mid - 1;
        }
        else {
            first = mid + 1;
        }
    }

    return result;
}

int main() {
    int A[100], n, i, key, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid input. Enter between 1 and 100.\n");
        return 1;
    }

    printf("Enter elements in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    pos = binsearch_first(A, n, key);

    if (pos == -1)
        printf("The element %d was not found in the array.\n", key);
    else
        printf("The element %d was found at position %d (first occurrence).\n", key, pos + 1);

    return 0;
}





