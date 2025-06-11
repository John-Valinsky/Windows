C++ Program: Multiple Inheritance

# Question
==========
Write a program to perform multiple inheritance using two base classes (Teacher and Staff) and a derived class (Faculty).



# Concepts Covered
==================
Concept	Description
Multiple Inheritance	A class can inherit from more than one base class
Access Modifiers	public inheritance means public members of base classes remain public
Class Composition	The derived class Faculty combines properties of both Teacher and Staff



# Classes Overview
==================
Class	Members	Description
Teacher	subject, getSubject(), showSubject()	Stores and shows subject taught
Staff	staffID, getStaffID(), showStaffID()	Stores and shows staff ID
Faculty	showFacultyDetails()	Inherits both and shows combined details



# Sample Input & Output
=======================
Input

--- Enter Faculty Details ---
Enter subject taught: Mathematics
Enter staff ID: 101

Output

--- Faculty Details ---
Subject: Mathematics
Staff ID: 101



# Code Flow Explanation
=======================
Input phase:

f.getSubject() → Reads subject from user

f.getStaffID() → Reads staffID from user

Output phase:

f.showFacultyDetails() internally calls:

showSubject() from Teacher

showStaffID() from Staff



# Multiple Inheritance Diagram
==============================
   Teacher       Staff
      |             |
      +------> Faculty
	  
Faculty inherits all accessible public members of Teacher and Staff.



# Additional Notes
==================
This program avoids ambiguity, as there are no conflicting names in both base classes.

If both base classes had a method with the same name (e.g., display()), scope resolution would be needed to resolve ambiguity.

