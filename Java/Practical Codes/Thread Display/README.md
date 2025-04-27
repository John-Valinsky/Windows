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
Class Name	Responsibility
ProducerConsumer	Main class that starts the Producer and Consumer threads
Shop	Shared buffer with synchronized put() and get() methods
Producer	Extends Thread, calls Shop.put() to produce data
Consumer	Extends Thread, calls Shop.get() to consume data



# Synchronization Details
-------------------------
* synchronized keyword ensures thread-safe access to shared data (materials).
* wait() causes the current thread to wait until another thread invokes notifyAll().
* notifyAll() wakes up all waiting threads when a state change occurs.



# Suggestions for Practice
--------------------------
* Add more producers and consumers.
* Use a larger buffer size (like a queue or array) instead of a single integer.
* Try replacing notifyAll() with notify() and observe the behavior.
* Handle interruptions more gracefully.



# Real-World Use Case
---------------------
* The Producer-Consumer problem is widely used in:
