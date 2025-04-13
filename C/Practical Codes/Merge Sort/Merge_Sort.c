// Program: Merge Sort in Descending Order
// Sorts elements using Merge Sort algorithm and displays them in descending order

#include <stdio.h>

void merge(int A[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = low;
    int temp[100];  // Temporary array

    // Merge the two halves into temp[]
    while (i <= mid && j <= high) {
        if (A[i] >= A[j])
            temp[k++] = A[i++];
        else
            temp[k++] = A[j++];
    }

    // Copy remaining elements from the left half
    while (i <= mid)
        temp[k++] = A[i++];

    // Copy remaining elements from the right half
    while (j <= high)
        temp[k++] = A[j++];

    // Copy the sorted subarray back into the original array
    for (i = low; i <= high; i++)
        A[i] = temp[i];
}

void mergeSort(int A[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}

int main() {
    int A[100], n, i;

    printf(" Enter number of elements: ");
    scanf("%d", &n);

    printf(" Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &A[i]);
    }

    mergeSort(A, 0, n - 1);

    printf("\n Sorted Array in Descending Order:\n");
    for (i = 0; i < n; i++)
        printf(" %d", A[i]);

    printf("\n");

    return 0;
}
