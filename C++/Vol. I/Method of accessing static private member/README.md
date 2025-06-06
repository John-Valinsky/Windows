Accessing Private Static Member Function in C++

#Program Title
==============
Demonstrate Method to Access Private Static Member Function in C++



# Description
=============
This program shows how a private static member function in a class can be safely accessed using a public static member function.

In C++, private members (including static ones) are not accessible directly from outside the class. However, they can be accessed internally by public member functions.



# Key Concepts
==============
Feature	Explanation
static functions	Belong to the class, not to specific objects.
private access specifier	Restricts access from outside the class.
public static function	Provides a way to access private static methods.



# What This Demonstrates
========================
Encapsulation: Keeps sensitive or restricted logic hidden inside the class.

Controlled Access: Allows indirect access to private logic using public methods.

Static behavior: Demonstrates how static methods are associated with the class rather than instances.

