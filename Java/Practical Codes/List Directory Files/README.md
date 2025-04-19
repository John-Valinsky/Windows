# Java Program: Method Overriding & Runtime Polymorphism

Overview

This Java program illustrates the concept of method overriding in object-oriented programming and demonstrates runtime polymorphism using a parent and child class.



# Key Concepts
--------------
* Method Overriding: Redefining a parent class method in a subclass.

* Runtime Polymorphism: When a superclass reference refers to a subclass object, the subclass’s overridden method is executed at runtime.

* Dynamic Method Dispatch: The mechanism behind runtime polymorphism.



# Files and Classes
-------------------
* ABC class (Parent Class)

Method: disp()

Prints a message indicating it belongs to the parent class.

* Demo class (Child Class)

Overrides disp() to provide its own implementation.

Adds a new method newMethod().



# Program Execution Flow
------------------------
* An object of ABC is created and its disp() method is called.

* A parent class reference (ABC) is used to point to a child class object (Demo), and the overridden disp() method is invoked.

* The output shows that the child class version of disp() is called at runtime.




# Sample Output
---------------
disp() method of parent class
disp() method of Child class



# Code Behavior Summary
-----------------------
ABC obj = new ABC();
obj.disp();          // Calls ABC's disp()

ABC obj2 = new Demo();
obj2.disp();         // Calls Demo's overridden disp() (polymorphism)
Note: obj2 cannot call newMethod() because it's declared as type ABC.




# Use Cases
-----------
* Designing flexible and extensible software (OOP principles)

* Frameworks and libraries (e.g., in GUI or event handling)

* Achieving polymorphic behavior in enterprise Java applications




# Related Topics
----------------
* Method Overloading vs Overriding

* Abstract Classes and Interfaces

* Upcasting and Downcasting