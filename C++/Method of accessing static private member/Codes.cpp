//Q. Write a program to show the method of accessing static private member function.

#include <iostream>
using namespace std;

class Demo {
private:

 // Private static member function
    static void privateStaticFunction() {
        cout << "This is a private static member function." << endl;
    }

public:
    // Public static member function to access the private one
    static void accessPrivateFunction() {
  cout << "Accessing private static function from public static function:" << endl;
        privateStaticFunction(); // Valid call within class
    }
};

int main() {
    // Try to access private function directly (Invalid)
    // Demo::privateStaticFunction(); // Error: not accessible

