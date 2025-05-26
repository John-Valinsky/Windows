//Q. Polynomial representation using linked list.

#include <iostream>
using namespace std;

// Define the structure of a term in the polynomial
struct Term {
    int coeff;    // Coefficient of the term
    int exp;      // Exponent of the term
    Term* next;   // Pointer to the next term

    // Constructor to initialize a term
    Term(int c, int e) {
        coeff = c;
        exp = e;
        next = nullptr;
    }
};

