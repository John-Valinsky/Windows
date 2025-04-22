# Java Program: Producer-Consumer Problem using Threads & Synchronization

Program Title

ProducerConsumer – Synchronization using wait() and notifyAll()



# Key Concepts Covered
----------------------
* Thread creation and execution

* Inter-thread communication

* Synchronization with synchronized, wait(), and notifyAll()

* Classic Producer-Consumer problem using a shared resource



# Program Description
---------------------
* This program simulates the Producer-Consumer problem, where:

* A Producer thread generates data (materials) and places them in a Shop (shared buffer).

* A Consumer thread retrieves the data.

* Synchronization ensures that the producer does not overwrite data before it’s consumed, and the consumer does not read data that hasn’t been produced yet.

* The shared resource (Shop) acts as a buffer that can only hold one item at a time.

