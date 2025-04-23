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



# Working Mechanism
-------------------
Shared Resource – Shop
Holds an integer material.

Manages production and consumption using a boolean flag available.

Uses synchronized methods along with wait() and notifyAll() for coordination.

Producer Thread
Puts 10 integer values (0 to 9) into the shop.

Sleeps randomly between each production to simulate delay.

Consumer Thread
Retrieves the 10 values from the shop.

Prints what it has consumed.



# Sample Output
---------------
Produced value 1 put: 0
Consumed value 1 got: 0
Produced value 1 put: 1
Consumed value 1 got: 1

Produced value 1 put: 9
Consumed value 1 got: 9

Note: Due to thread scheduling, output sequence may vary slightly on different runs.



# Core Methods and Concepts
---------------------------
Method/Concept	Description
synchronized	Ensures only one thread accesses method at a time.
wait()	Pauses current thread until another thread calls notifyAll().
notifyAll()	Wakes up all threads waiting on the object’s monitor.
Thread.sleep()	Simulates a delay in production.
start()	Starts a new thread by calling its run() method.
