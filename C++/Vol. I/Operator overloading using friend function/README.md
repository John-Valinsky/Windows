C++ Program: ++ Operator Overloading Using Friend Function

# Question
==========
Write a program to perform ++ operator overloading using a friend function.



# Concepts Covered
==================
Concept	Explanation
Operator Overloading	Customizing the behavior of operators for user-defined types.
Friend Function	A non-member function that can access private members of a class.
Prefix ++ Overload	Increments the value before the expression is evaluated.



# Class Used
============
class Counter {
private:
    int count;
public:
    Counter(int c = 0);                // Constructor
    friend Counter operator++(Counter &obj); // Friend function declaration
    void display();                    // Display method
};



# Operator Overloading as Friend Function
=========================================
Syntax:

Counter operator++(Counter &obj) {
    ++obj.count; // Access private member directly
    return obj;
}
