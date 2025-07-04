C++ Program: Overloading + Operator for String Concatenation

# Question
==========
Write a program to perform + operator overloading for string concatenation.



# Description
=============
This program demonstrates how to overload the + operator in C++ to perform concatenation of custom string objects using a user-defined class MyString.



# Key Concepts
==============
Concept	Explanation
Operator Overloading	Redefining operators (+ in this case) to work with user-defined types.
String Manipulation	Using C-style strings (char[], strcpy, strcat) for operations.
Object-Oriented Programming	Class design and encapsulation of behavior in MyString.



# Class Design
==============
class MyString {
private:
    char str[100];             // Internal character array
public:
    MyString(const char* s = "");         // Constructor
    MyString operator+(const MyString&);  // Overloaded + operator
    void display();                       // Display function
};



Overloaded + Logic
==================
MyString operator+(const MyString& obj) {
    MyString result;
    strcpy(result.str, str);         // Copy first string
    strcat(result.str, obj.str);     // Append second string
    return result;
}



# Program Flow
==============
Create two string objects s1 and s2 with different values.

Concatenate them using overloaded + operator: s3 = s1 + s2.

Display original and concatenated strings.



# Sample Output
===============
First String: Hello 
Second String: World!
Concatenated String: Hello World!