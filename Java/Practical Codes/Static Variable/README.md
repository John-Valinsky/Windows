# Java Program: Static Variable and Method Example

# Key Concepts Covered
----------------------
* static keyword in Java

* Static variables and methods

* Calling static methods from both instance methods and main()



# Program Description
---------------------
Class: Staticmethod

This class contains:
--------------------
Static Variables

i: An integer with value 100

s: A string with value "beginner books"

Static Method

display(): Prints values of i and s


Instance Method

func(): Calls the static display() method

Main Method

Creates an object of Staticmethod

Calls func() using the object

Directly calls display() without creating an object



# Sample Output
---------------
i:100
s:beginner books
i:100
s:beginner books



# Explanation
-------------
Static variables and methods belong to the class rather than to any specific object.

The display() method accesses static variables and prints their values.

You can:
--------
Call a static method from another static context (like main())

Call a static method from an instance method (func())



# Benefits of Using Static
--------------------------
* Memory efficient – shared among all instances.

* Useful for utility or helper methods that don’t depend on object state.

* Great for constants or fixed data used across objects.