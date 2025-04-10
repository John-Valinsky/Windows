⚡ Quick Sort in C

This project demonstrates how to implement the Quick Sort algorithm in C to sort an array of numbers in ascending order.

📌 What is Quick Sort?

Quick Sort is a popular and efficient divide-and-conquer sorting algorithm.
It works by selecting a pivot element, partitioning the array around the pivot, and then recursively sorting the subarrays.

✅ Key Features:
----------------
Fast and efficient for large datasets

Average-case time complexity: O(n log n)

In-place sorting (no extra space needed)

📂 Program Functionality
------------------------
Takes user input for an unsorted array

Sorts the array using Quick Sort

Displays the sorted array in ascending order

🧪 Example

Input Array:
------------
{5, 3, 1, 6, 0, 2, 4}

Sorted Output:
--------------
0 1 2 3 4 5 6

🛠️ How It Works
----------------
quicksort() Function:
Recursively calls itself to sort the subarrays divided by the pivot.

partition() Function:
Places the pivot in its correct position and rearranges elements around it:

Elements smaller than pivot go to the left

Elements greater go to the right

📘 Notes: The array size is fixed to 10 for simplicity. Ensure you provide input within that range. Can be upgraded for dynamic array handling and better input validation.

