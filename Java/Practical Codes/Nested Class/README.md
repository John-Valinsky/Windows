# Java Program: Nested Class Demonstration

 Overview

This Java program demonstrates the use of a non-static nested class (also known as an inner class) within an outer class. It shows how the inner class can be instantiated and used from within a method of the outer class.



# Key Concepts
--------------
* Nested Classes

* Inner Class Instantiation

* Object-Oriented Programming (OOP) concepts in Java



# File Description
------------------
* Outer

Contains a method display() which instantiates and uses the inner class Inner.

* Inner

A non-static inner class defined inside Outer.

Contains the method show() which prints a message to the console.

* Nestedclass

Contains the main method to execute the program.

Creates an object of Outer and calls the display() method.



# Sample Output
---------------
inside inner class



# How It Works
--------------
* In the main() method, an object of the Outer class is created.

* display() is called, which creates an object of the Inner class.

* The show() method of the inner class is invoked, displaying a message.



# Features
----------
Demonstrates how an inner class can be used to logically group classes that are only used in one place.

Highlights encapsulation and structuring of code in a clean and modular way.



# Use Cases
-----------
* Implementing helper classes that should not be used outside the outer class.

* GUI components in frameworks like JavaFX or Swing.

* Organizing tightly-coupled classes in a readable manner.



# Suggestions for Extension
---------------------------
* Add more methods to Inner to simulate real-world encapsulation.

* Try a static nested class for comparison.

* Create multiple levels of nested classes to simulate complex structures.

