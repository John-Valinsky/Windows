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

int main() {
    cout << "\nCreating object1 with default constructor:" << endl;
    Demo obj1; // Default constructor

    cout << "\nCreating object2 with parameterized constructor:" << endl;
    Demo obj2(100); // Parameterized constructor

    cout << "\nCreating object3 using copy constructor (copy of obj2):" << endl;
    Demo obj3 = obj2; // Copy constructor

    cout << "\nMain function is ending, destructors will now be called..." << endl;

    return 0;
}
