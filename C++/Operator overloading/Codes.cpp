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
    cout << "Count = " << count << endl;
    }
};

int main() {
    Counter c1(5);

    cout << "Original ";
    c1.display();
    ++c1; // Calls overloaded prefix ++
    cout << "After prefix ++ ";
    c1.display();
