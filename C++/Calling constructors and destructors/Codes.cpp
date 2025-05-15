//Q. Write a program to show the ways of calling constructors and destructors.

#include <iostream>
using namespace std;

class Demo {
private:
    int value;

public:
    // Default constructor
    Demo() {
        value = 0;
        cout << "Default constructor called. Value = " << value << endl;
    }

    // Parameterized constructor
    Demo(int val) {
        value = val;
        cout << "Parameterized constructor called. Value = " << value << endl;
    }

    // Copy constructor
    Demo(const Demo &obj) {
        value = obj.value;
        cout << "Copy constructor called. Copied Value = " << value << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called for Value = " << value << endl;
    }
};
