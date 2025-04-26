# Java Program: Producer-Consumer Problem (Multithreading with Synchronization)

Program Title

ProducerConsumer.java – Thread Communication Using wait() and notifyAll()



# Key Concepts Covered
----------------------
* Java multithreading

* Thread communication using wait() and notifyAll()

* Thread synchronization with synchronized keyword

* The Producer-Consumer design pattern



# Program Description
---------------------
This program demonstrates the classic Producer-Consumer problem, where:

* The Producer thread produces data (materials).

* The Consumer thread consumes the data.

* A shared resource (Shop) acts as a buffer that holds one item at a time.

* Proper synchronization ensures that:

* The producer waits if the buffer is full.

* The consumer waits if the buffer is empty.



# Flow Explanation
------------------
* Shop is the shared resource (like a warehouse).

* Producer thread calls put() to add items to the shop.

* Consumer thread calls get() to take items from the shop.

* If the Shop is empty → consumer waits.

* If the Shop is full → producer waits.

* wait() and notifyAll() methods are used for inter-thread communication.



# Sample Output
---------------
Produced value 1 put: 0
Consumed value 1 got: 0
Produced value 1 put: 1
Consumed value 1 got: 1
Produced value 1 put: 2
Consumed value 1 got: 2
Produced value 1 put: 9
Consumed value 1 got: 9



# Class Breakdown
-----------------


