Person, Teacher, and Student Class Program in C++

# Program Title
===============
Demonstration of Inheritance and Runtime Polymorphism using Person, Teacher, and Student Classes



# Description
=============
This C++ program demonstrates the concepts of:

Class Inheritance

Runtime Polymorphism

Virtual Functions

Virtual Destructors


The base class Person is inherited by two derived classes: Teacher and Student. The program dynamically creates and deletes objects using a base class pointer to showcase polymorphic behavior.



# Features
==========
* Accepts user input for Person, Teacher, and Student details.

* Uses virtual functions to support runtime polymorphism.

* Demonstrates proper use of destructors for clean object destruction.

* Ensures extensibility using inheritance and OOP principles.



# Concepts Covered
==================
Concept	Description
Inheritance	Teacher and Student inherit from Person.
Runtime Polymorphism	Achieved using virtual functions and base class pointers.
Virtual Destructor	Ensures proper destructor chaining when deleting derived objects.



# Class Diagram Overview


      +-------------+
      |   Person    |
      +-------------+
      | - name      |
      | - age       |
      +-------------+
      | +getDetails() [virtual] |
      | +showDetails() [virtual]|
      +-------------+
            /\
           /  \
 +----------------+    +----------------+
 |   Teacher      |    |   Student      |
 +----------------+    +----------------+
 | - subject      |    | - rollNo       |
 +----------------+    +----------------+
 | +getDetails()  |    | +getDetails()  |
 | +showDetails() |    | +showDetails() |
 +----------------+    +----------------+
 
 
 
# Sample Output
===============
Enter name: John
Enter age: 40
Enter subject taught: Physics

Name: John
Age: 40
Subject: Physics
Teacher object deleted.
Person object deleted.

