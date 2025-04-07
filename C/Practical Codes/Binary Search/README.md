# 🔍 Binary Search in C
This code demonstrates how to implement Binary Search in C to find the position of a given element in a sorted array.

# 📌 What is Binary Search?
Binary Search is an efficient searching algorithm used to find the position of a target element in a sorted array.
It works by repeatedly dividing the search range in half.

# ✅ When to Use:
The array must be sorted (ascending or descending).

Faster than linear search (O(log n) time complexity).

# 📂 Program Features:
Accepts user input for array size and elements.

Performs binary search to locate the given key.

Displays the position if found.

If duplicates exist, you can modify the search to return the first occurrence.

# 🧪 Example:

Input:
------
pgsql
Copy
Edit
Array (sorted): 0 1 2 3 4 7 7 9  
Key to Search: 7

Output:
-------
pgsql
Copy
Edit
The element 7 is found at position 6

ℹ️ By default, it returns any occurrence. To get the first occurrence, modify the binary search logic to continue searching left after finding a match.

🛠️ Optional Improvement - First Occurrence:
-------------------------------------------

Replace your binsearch() function with this version:
----------------------------------------------------

📘 Notes: Make sure the array is sorted before applying binary search. If the element is not found, the program will display a message accordingly.