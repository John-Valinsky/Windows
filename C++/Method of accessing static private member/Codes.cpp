//Q. Write a program to show the method of accessing static private member function.

#include <iostream>
using namespace std;

class Demo {
private:

 // Private static member function
    static void privateStaticFunction() {
        out << "This is a private static member function." << endl;
    }

