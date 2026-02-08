Virtual Destructor Implementation in C++

# Program Title
===============
Demonstrate the Use of Virtual Destructor in Inheritance



# Description
=============
This C++ program illustrates the importance of virtual destructors when using polymorphism in object-oriented programming. It ensures that destructors of both the base and derived classes are called properly when a derived class object is deleted via a base class pointer.



# Key Features
==============
Demonstrates runtime polymorphism using a base class pointer.

Proper destructor chaining using virtual destructors.

Helps avoid memory leaks and ensures safe cleanup in inheritance.



# Concepts Used
===============
Concept	Explanation
Virtual Destructor	Ensures base class destructor is overridden correctly in derived classes.
Polymorphism	Used to point to derived objects via base class pointers.
Dynamic Allocation	Object is created using new and destroyed using delete.



# Class Overview
================
Base
Contains a virtual destructor that prints a message when invoked.



# Derived
=========
Inherits from Base.

Contains its own destructor that also prints a message.



# Sample Output
===============
Derived class destructor called.
Base class destructor called.



# This output confirms
======================
The Derived class destructor is called first.

Then the Base class destructor is called.