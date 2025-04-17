# Abstract Class and Polymorphism Demonstration (Java)

* Overview

This Java program demonstrates the concept of abstraction and runtime polymorphism using an abstract class Shape and its concrete subclasses Rectangle and Triangle. Each shape class overrides the getArea() method to compute its own area.



# File Structure
----------------

AbstractDemo.java    // Main class to test polymorphism
Shape.java           // Abstract base class
Rectangle.java       // Subclass representing a rectangle
Triangle.java        // Subclass representing a triangle



# Concepts Demonstrated
-----------------------
* Abstraction using abstract classes

* Inheritance for code reuse

* Method Overriding

* Runtime Polymorphism via superclass references



# Classes Breakdown
-------------------
* Shape (Abstract Class)

	Fields:

	double height

	double width


* Methods:

	setValues(double height, double width)

	getHeight()

	getWidth()

	abstract double getArea()



# Rectangle (Subclass of Shape)
-------------------------------
Overrides getArea() to return:

height × width
Triangle (Subclass of Shape)

Overrides getArea() to return:

(height × width) / 2



# AbstractDemo (Main Class)
---------------------------
Creates Shape references pointing to Rectangle and Triangle objects.

Demonstrates polymorphism by calling getArea() using the Shape reference.
s



# Sample Output
---------------
Area of rectangle : 390.0
Area of triangle : 51.0



# How to Run
------------
* Save all four files in the same folder:

* AbstractDemo.java

* Shape.java

* Rectangle.java

* Triangle.java



# Compile
---------
javac AbstractDemo.java Shape.java Rectangle.java Triangle.java

Run:
----
java AbstractDemo
