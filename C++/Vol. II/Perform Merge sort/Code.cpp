//Q. To perform Merge sort.

#include <iostream>
using namespace std;

// Function to merge two subarrays of arr[]
void merge(int arr[], int l, int m, int r) {


    // Find sizes of two subarrays to be merged
    int n1 = m - l + 1;
    int n2 = r - m;
