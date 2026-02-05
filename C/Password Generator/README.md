# Password Generator using C

A simple yet effective strong password generator written in C, designed to create random passwords using a mix of uppercase letters, lowercase letters, numbers, and special characters.

This program runs in the terminal and allows users to generate multiple passwords of custom lengths in one session.


# Features

* Generates strong random passwords.

* Ensures at least:

    * 1 uppercase letter

    * 1 lowercase letter

    * 1 digit

    * 1 special character

* Fully randomized & shuffled.

* User-defined password length.

* Loop-based generation (generate multiple passwords without restarting).

* Clean ASCII banner output.

* Written in pure C (no external libraries).


# How It Works

* The program seeds the random number generator using the current time.

* It guarantees minimum password strength by selecting characters from each category.

* Remaining characters are chosen randomly.

* The password is shuffled to remove predictable patterns.

* 