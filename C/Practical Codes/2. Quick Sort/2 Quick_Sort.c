#include <stdio.h>

// Function to perform partitioning
int partition(int A[], int low, int high) {
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    while (i <= j) {
        while (i <= high && A[i] <= pivot) i++;
        while (A[j] > pivot) j--;

        if (i < j) {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }

    // Swap pivot with A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

// Function to perform quick sort
void quicksort(int A[], int low, int high) {
    if (low < high) {
        int p = partition(A, low, high);
        quicksort(A, low, p - 1);
        quicksort(A, p + 1, high);
    }
}

int main() {
    int A[100], n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("Invalid input. Please enter a value between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    quicksort(A, 0, n - 1);

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    printf("\n");
    return 0;
}
