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

