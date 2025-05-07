//Q. Write a Program for Swapping of two numbers using pass by address.

#include <iostream>
using namespace std;


// Function to swap numbers using pointers (pass by address)
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;

