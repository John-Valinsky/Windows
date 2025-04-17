# Java Program: Inheritance and Polymorphism Demonstration

* Overview

This Java program demonstrates the concepts of inheritance and runtime polymorphism (method overriding) using a simple game hierarchy.



# File Structure
----------------
* Game.java         // Base class
* Cricket.java      // Subclass inheriting from Game and overriding method
(Note: In your code, both classes are written in the same file. This is valid as long as only one of them is public.)



# Concepts Demonstrated
-----------------------
* Inheritance (Cricket extends Game)

* Method Overriding

* Dynamic Method Dispatch (runtime polymorphism)

* Upcasting (gm = ck)



# Class Breakdown
-----------------
* Game Class

Method:
-------
type() — prints "Indoor & outdoor"


* Cricket Class (extends Game)

Overrides the type() method to print "outdoor game"



# Sample Output
---------------
Indoor & outdoor
outdoor game
outdoor game



# Explanation
-------------
* gm.type() — calls Game's version.

* ck.type() — calls Cricket's version.

* gm = ck; gm.type(); — although gm is a reference of type Game, it refers to a Cricket object, so Cricket's type() method is called due to runtime polymorphism.



# How to Run
------------
Save the code as Cricket.java.

Compile:
--------
javac Cricket.java

Run:
----
java Cricket



# Educational Use
-----------------
* Perfect for learners exploring:

* Object-Oriented Programming (OOP)

* Method overriding and polymorphism

* Upcasting and dynamic method dispatch in Java