🔁 Circular Queue Using Linked List (C Program)
This program implements a Circular Queue using a Linked List in C. It allows for insertion, deletion, and display of elements using dynamic memory management and circular linking.

📋 Problem Statement:
---------------------
Insert the elements {5, 7, 0, 0, 3, 9} into a circular queue and delete 6, 9, and 5 using a linked list implementation.

🧠 Features
-----------
Circular Queue implementation using singly linked list

Dynamic memory allocation via malloc()

Full circular link: rear->link = front

Menu-driven program

Supports:

Insertion

Deletion (FIFO)

Display of all elements

🛠️ Menu Options
----------------

 ****MAIN MENU****

 1. Insert
 2. Delete
 3. Display
 4. Exit

💡 How It Works

✅ Insertion
------------
If queue is empty: front and rear both point to the new node

Else: add to rear and update rear->link = front to maintain the circular property

❌ Deletion
-----------
If only one element: both front and rear set to NULL

Otherwise: delete the front node and update links accordingly

📺 Display
----------
Traverses the circular queue using do...while() until it reaches back to front

📦 Sample Data
--------------
Insertion Sequence:
-------------------
Insert: 5, 7, 0, 0, 3, 9

Deletion Sequence:
------------------
Delete: 6 (not present), 9, 5

Note: Only 9 and 5 will be successfully deleted.


