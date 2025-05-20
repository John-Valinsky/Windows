//Q. Write a program to implement virtual destructor.

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Virtual destructor
    virtual ~Base() {
        cout << "Base class destructor called." << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Destructor for Derived class
    ~Derived() {
        cout << "Derived class destructor called." << endl;
    }
};

int main() {
    // Creating an object of Derived class using Base class pointer
    Base* basePtr = new Derived();

    // Deleting the object using Base class pointer
    delete basePtr;

    return 0;
}
