# What is Recursion?

Recursion is a programming technique where a function calls itself to solve a smaller part of a bigger problem.

Think of it like this: "To solve the big problem, I’ll solve a smaller version of it using the same method."


# Recursive GCD Finder for Three Numbers
----------------------------------------
This C program calculates the Greatest Common Divisor (GCD) of three user-input integers using a recursive function.


# What It Does
--------------
* Takes three integers as input from the user.

* Uses a recursive function to compute the GCD of two numbers.

* Applies it twice to get the GCD of all three numbers.

* Prints the result.


# File
------
* gcd_recursive.c


# Logic Behind the GCD Function
-------------------------------
This program uses the Euclidean Algorithm:

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


# How to Run
------------
* Compile the code:

	gcc gcd_recursive.c -o gcd_recursive


🚀 Run the program:
-------------------
./gcd_recursive


💡 Sample Output:
-----------------
Enter first number: 4
Enter second number: 6
Enter third number: 8
GCD of 4, 6, and 8 is: 2


📚 Topics Covered:
------------------
Recursion in C

Euclidean Algorithm for GCD

Working with user input in C

Basic math logic implementation