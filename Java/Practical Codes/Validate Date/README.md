# Java Program: Validate a Date

Program Title

Date Validator Using Java (Manual Parsing of Date Format)



# Description
-------------

This Java program allows a user to input a date in the format dd/MM/yyyy and checks whether it is a valid calendar date or not, including checking for leap years.

It:

* Parses the date using String.substring()

* Checks date bounds for each month

* Adjusts February’s days during leap year



# Code Overview
---------------

ValiDate.java

import java.util.*;

class ValiDate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

        System.out.print("Enter Date (dd/MM/yyyy): ");
        String input = sc.nextLine();

        int d = Integer.parseInt(input.substring(0,2));
        int m = Integer.parseInt(input.substring(3,5));
        int y = Integer.parseInt(input.substring(6));

        if (y > 1900 && y <= 9999) {
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
                days[1]++; // leap year
            }

            if (m > 0 && m <= 12) {
                if (d > 0 && d <= days[m - 1]) {
                    System.out.print("Valid Date");
                } else {
                    System.out.print("Invalid Date");
                }
            } else {
                System.out.print("Invalid Date");
            }
        } else {
            System.out.print("Invalid Date");
        }
    }
}



# Sample I/O
------------

Valid Input:

Enter Date (dd/MM/yyyy): 29/02/2024
Valid Date

Invalid Input:

Enter Date (dd/MM/yyyy): 31/04/2023
Invalid Date



# How to Run
------------
Save the file as ValiDate.java

Compile the code:

javac ValiDate.java


Run the program:

java ValiDate


# Key Concepts
--------------
Concept	Explanation

String.substring()	Extracts parts of the input string
Leap year check	Adjusts February’s days to 29 if it's a leap year
Scanner	Reads user input from the console
Array for days	Stores number of days in each month



# Limitations
-------------
Does not handle malformed input like 99/99/abcd (no error handling or try-catch)

Assumes date is well-formatted (dd/MM/yyyy)

Better alternatives include using LocalDate.parse() in modern Java (Java 8+)

