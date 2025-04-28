# Java Program: Custom Exception Handling Example

Program Title

Exceptionsampel.java – Creating and Throwing a Custom Exception



# Key Concepts Covered
----------------------
* Defining a custom exception by extending the Exception class
* Throwing exceptions manually using the throw keyword
* Catching exceptions using try-catch blocks
* Overriding the toString() method to display custom error messages



# Program Description
---------------------
* This program demonstrates how to:
* Create your own custom exception class (MyException).
* Manually throw the custom exception.
* Catch and handle the custom exception inside a catch block.



# Structure Explanation
-----------------------
Custom Exception Class:

* MyException extends the base Exception class.

* It has a constructor to accept a custom error message.

* The toString() method is overridden to display a user-defined error message when the exception is printed.


Main Class (Exceptionsampel):

* A custom exception is thrown inside a try block.

* It is caught using a catch block specifically for MyException.

* The custom message is printed.



# Sample Output
---------------
Starting of try block
Catch Block
MyException Occurred: This is My error Message



# Class Breakdown
-----------------
Class Name	Responsibility
MyException	Defines a user-created exception with a custom message.
