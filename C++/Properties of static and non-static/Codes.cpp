//Q. Write a program to distinguish the properties of static and non-static ata members.

#include <iostream>
using namespace std;

class Demo {

private:

    int nonStatic;             // Non-static data member
    static int staticCount;    // Static data member

    public:
    // Constructor increments static and non-static members
    Demo() {
        nonStatic = 0;
        staticCount++;
    }
 // Function to show values
    void show() {
    nonStatic++;
        cout << "Non-static (object-specific): " << nonStatic << endl;
         cout << "Static (shared across objects): " << staticCount << endl;
    }
};

    // Initialize static member
    int Demo::staticCount = 0;

    int main() {
    Demo obj1, obj2;

    cout << "--- obj1.show() ---" << endl;
    obj1.show();

    cout << "--- obj2.show() ---" << endl;
    obj2.show();

    cout << "--- obj1.show() again ---" << endl;
    obj1.show();
