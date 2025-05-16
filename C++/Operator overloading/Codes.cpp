//Q. Write a program to perform ++ operator overloading using member function.

#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    // Constructor
    Counter(int c = 0) {
 count = c;
    }
 // Overload prefix ++ operator
    Counter operator++() {
    ++count; // Increment before return
    return *this;
 }

    // Function to display count
    void display() {
