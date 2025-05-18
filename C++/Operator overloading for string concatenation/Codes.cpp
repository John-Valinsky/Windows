//Q. Write a program to perform + operator overloading for string concatenation.

#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char str[100];
    public:

    // Constructor
    MyString(const char* s = "") {
        strcpy(str, s);
    }
