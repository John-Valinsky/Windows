//Q. Write a program to perform ++ operator overloading using friend function.

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

    // Declare friend function
    friend Counter operator++(Counter &obj);

    // Display function
    void display() {
        cout << "Count = " << count << endl;
    }
};

// Friend function for prefix ++ overloading
Counter operator++(Counter &obj) {
    ++obj.count; // Direct access to private member
    return obj;
}

int main() {
    Counter c1(10);

    cout << "Original ";
    c1.display();

    ++c1; // Calls friend function operator++
    cout << "After prefix ++ ";
    c1.display();

    return 0;
}
