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
