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
