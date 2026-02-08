//Q. Write a Program to find area of circle, triangle and rectangle using function overloading.

#include <iostream>
#include <cmath> // for M_PI (value of π)
using namespace std;

class AreaCalculator {
public:


    // Area of a circle: π × r²
    double area(double radius) {

      return M_PI * radius * radius;
    }

     // Area of a triangle: 0.5 × base × height
    double area(double base, double height)
     return 0.5 * base * height;
    }

     // Area of a rectangle: length × breadth
    int area(int length, int breadth) {

     return length * breadth;
    }
};

int main() {
    AreaCalculator calc;
    double radius, base, height;
    int length, breadth;

    // Circle
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle = " << calc.area(radius) << endl;

    // Triangle
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle = " << calc.area(base, height) << endl;

    // Rectangle
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle = " << calc.area(length, breadth) << endl;

    return 0;
}
