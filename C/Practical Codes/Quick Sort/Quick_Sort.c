#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function for Quick Sort (Lomuto Partition Scheme)
int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (arr[j] > pivot) j--;

        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[low], &arr[j]);  // Place pivot in correct position
    return j;
}

// Quick Sort recursive function
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quicksort(arr, low, p - 1);  // Sort left partition
        quicksort(arr, p + 1, high); // Sort right partition
    }
}

int main() {
    int arr[100], n;

    // Input the number of elements
    printf("Enter the number of elements in the array (1 - 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf(" Invalid input. Please enter a number between 1 and 100.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform quick sort
    quicksort(arr, 0, n - 1);

    // Output the sorted array
    printf(" Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
