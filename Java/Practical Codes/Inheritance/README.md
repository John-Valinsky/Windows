# Java Program: Method Overriding Example

Overview

This Java program demonstrates the concept of method overriding, which is a key feature of runtime polymorphism in object-oriented programming.



# Concepts Covered
------------------
* Method Overriding

* Dynamic Method Dispatch (Polymorphism)

* Parent-child class relationships in Java



# What is Method Overriding?
----------------------------
Method overriding allows a subclass to provide a specific implementation of a method that is already defined in its superclass.

When an overridden method is called through a parent class reference, Java uses dynamic method dispatch to decide which version of the method to invoke at runtime.



# Classes Breakdown
-------------------
ABC (Parent Class)
Contains a method: disp()

public void disp() {
    System.out.println("disp() method of parent class");
}
Demo (Child Class)
Overrides the disp() method

public void disp() {
    System.out.println("disp() method of Child class");
}
Defines an additional method: newMethod()



# Program Flow
--------------
ABC obj = new ABC();     // Creates object of parent class
obj.disp();              // Calls parent class disp()

ABC obj2 = new Demo();   // Parent class reference to child class object
obj2.disp();             // Calls child class disp() due to overriding



# Output
--------
disp() method of parent class
disp() method of Child class
Even though obj2 is declared as type ABC, it refers to a Demo object, so the child class method is executed — this is runtime polymorphism.



# How to Run
------------
Save the code in a file named: Demo.java



# Compile
---------
javac Demo.java



# Run
-----
java Demo




# Use Case
----------
* This example is useful for understanding:

* How Java resolves method calls dynamically at runtime

* How subclasses can change inherited behaviors