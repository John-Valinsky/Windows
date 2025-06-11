C++ Program: Distinguishing Static and Non-Static Data Members

# Question
==========
Write a program to distinguish the properties of static and non-static data members in a class.



# Concepts Covered
==================
Concept	Description
Static Member Variable	Shared among all instances of the class. Retains its value across objects.
Non-static Member Variable	Separate copy for each object. Reset per object.
Static Variable Initialization	Done outside the class using scope resolution operator (::)



# Code Summary
==============
class Demo {
    int nonStatic;               // Instance-specific
    static int staticCount;      // Shared across all objects
public:
    Demo();                      // Increments staticCount
    void show();                 // Shows and modifies both variables
};
staticCount is shared by all Demo objects.

nonStatic is separate for each object.



# Output Explanation
====================
Demo obj1, obj2;
obj1.show();
obj2.show();
obj1.show();

Output

--- obj1.show() ---
Non-static (object-specific): 1
Static (shared across objects): 2

--- obj2.show() ---
Non-static (object-specific): 1
Static (shared across objects): 2

--- obj1.show() again ---
Non-static (object-specific): 2
Static (shared across objects): 2



# Breakdown
===========
Object	nonStatic	staticCount
obj1 1st show	1	2
obj2 1st show	1	2
obj1 2nd show	2	2

staticCount is incremented once per object construction, shared globally.

nonStatic increments on each show() call but remains specific to the object.