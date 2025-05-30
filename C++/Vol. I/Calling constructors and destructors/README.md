Constructor and Destructor Demonstration in C++

# Program Title
---------------
Ways of Calling Constructors and Destructors in C++



# Description
-------------
This program illustrates the different ways constructors and destructors are invoked in C++ using a class named Demo. It includes:

* Default Constructor

* Parameterized Constructor

* Copy Constructor

* Destructor



These constructors initialize objects in different ways, and the destructor is automatically invoked when an object goes out of scope.



# Features
----------
Shows how constructors are triggered upon object creation.

Shows how destructors are automatically called when objects are destroyed.

Provides a clear order of execution for object lifecycle events.



# Key Concepts
--------------
Concept	Description
Default Constructor	Invoked when an object is created with no arguments
Parameterized Constructor	Invoked when an object is created with specific arguments
Copy Constructor	Invoked when a new object is created from an existing one
Destructor	Invoked automatically when an object goes out of scope.



# Code Overview
===============
* Class: Demo
Demo() – Initializes value to 0.

Demo(int val) – Initializes value to the provided argument.

Demo(const Demo &obj) – Creates a copy of another Demo object.

Demo() – Prints a message when the object is destroyed.


* main() function:
Creates obj1 using the default constructor.

Creates obj2 using the parameterized constructor.

Creates obj3 as a copy of obj2, invoking the copy constructor.

Destructor is called for each object automatically when the program ends.



# Sample Output
===============
Creating object1 with default constructor:
Default constructor called. Value = 0

Creating object2 with parameterized constructor:
Parameterized constructor called. Value = 100

Creating object3 using copy constructor (copy of obj2):
Copy constructor called. Copied Value = 100

Main function is ending, destructors will now be called...
Destructor called for Value = 100
Destructor called for Value = 100
Destructor called for Value = 0

Note: Destructors are called in reverse order of creation.



# File Structure
================
constructor_destructor.cpp  // Main C++ file demonstrating constructors/destructor
🚀 How to Compile and Run
🔧 Compile:

g++ constructor_destructor.cpp -o demo
▶️ Run:

./demo



# Enhancements You Can Try

Add a static counter to track how many objects are active.

Demonstrate constructor overloading with multiple parameter types.

Add logging to a file instead of printing to console.