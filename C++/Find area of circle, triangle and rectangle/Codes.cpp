//Q. Write a Program to find area of circle, triangle and rectangle using function overloading.

#include <iostream>
#include <cmath> // for M_PI (value of π)
using namespace std;

class AreaCalculator {
public:


    // Area of a circle: π × r²
    double area(double radius) {
