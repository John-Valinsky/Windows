C++ Program: Overloading ++ Operator (Prefix) Using Member Function

# Question
==========
Write a program to perform ++ operator overloading using a member function.



# Description
=============
This program demonstrates how to overload the prefix increment operator (++) for a user-defined class using a member function.
The class Counter maintains a private integer count and defines custom behavior for incrementing the count using the ++ operator.



# Key Concepts Covered
======================
Concept	Description
Operator Overloading	Redefining built-in operators for user-defined types.
Member Function	Function defined inside the class to perform operator overloading.
Prefix ++ Operator	Increment happens before the value is used (++obj).
*this Pointer	Used to return the current object after increment.



# Class Structure
=================
class Counter {
private:
    int count;

public:
    Counter(int c = 0);        // Constructor
    Counter operator++();      // Overloaded prefix ++
    void display();            // Display function
};
