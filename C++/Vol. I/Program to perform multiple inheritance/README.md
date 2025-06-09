C++ Program: Multiple Inheritance Example

# Question
==========
Write a program to demonstrate multiple inheritance.



# Concept: Multiple Inheritance
===============================
Multiple inheritance allows a class (called the derived class) to inherit from more than one base class.

In this program:

Faculty class inherits from:

Teacher (base class 1)

Staff (base class 2)



# Classes Overview
==================
Class	Description
Teacher	Contains subject-related methods
Staff	Contains staff ID-related methods
Faculty	Inherits from both Teacher and Staff to combine features



# Code Behavior
===============
class Faculty : public Teacher, public Staff {
    void showFacultyDetails() {
        showSubject();
        showStaffID();
    }
};

Faculty can access:

getSubject() and showSubject() from Teacher

getStaffID() and showStaffID() from Staff



# Sample Input/Output
=====================
Input:

--- Enter Faculty Details ---
Enter subject taught: Physics
Enter staff ID: 1024

Output:

--- Faculty Details ---
Subject: Physics
Staff ID: 1024



# How It Works
==============
You create an object f of class Faculty.

Using f, you access both getSubject() and getStaffID() (from two base classes).

showFacultyDetails() combines outputs of both base class methods.